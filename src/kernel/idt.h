#pragma once

extern void idt_flush(u32);

extern void isr0();
extern void isr1();
extern void isr2();
extern void isr3();
extern void isr4();
extern void isr5();
extern void isr6();
extern void isr7();
extern void isr8();
extern void isr9();
extern void isr10();
extern void isr11();
extern void isr12();
extern void isr13();
extern void isr14();
extern void isr15();
extern void isr16();
extern void isr17();
extern void isr18();
extern void isr19();
extern void isr20();
extern void isr21();
extern void isr22();
extern void isr23();
extern void isr24();
extern void isr25();
extern void isr26();
extern void isr27();
extern void isr28();
extern void isr29();
extern void isr30();
extern void isr31();

typedef struct {
    u16 base_low;   // lower 16 bits of address to jump to if this int fires
    u16 selector;   // kernel segment selector
    u8  reserved;   // always zero
    u8  flags;
    u16 base_high;  // upper 16 bits of address to jump to if this int fires
} __attribute__((packed)) idt_entry_t;

typedef struct {
    u16 limit;
    u32 base;   // address of first element in gdt_t
} __attribute__((packed)) idt_t;

void idt_init(void);
