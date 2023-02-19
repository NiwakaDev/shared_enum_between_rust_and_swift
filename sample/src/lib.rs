#[repr(C)]
pub enum NiwakaEnum {
    Variant1(i32, u32),
    Variant2,
}

#[no_mangle]
pub extern "C" fn print_niwaka_enum(niwaka_enum: NiwakaEnum) {
    match niwaka_enum {
        NiwakaEnum::Variant1(value_i32, value_u32) => println!("NiwakaEnum::Variant1({}, {})", value_i32, value_u32),
        NiwakaEnum::Variant2 => println!("NiwakaEnum::Variant2")
    }
}

