// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsim__Syms.h"


//======================

void Vsim::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vsim* t = (Vsim*)userthis;
    Vsim__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vsim::traceChgThis(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__16(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__17(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__19(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__21(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__23(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vsim::traceChgThis__2(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed31),2);
        vcdp->chgBit(c+9,(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_act_n));
        vcdp->chgBus(c+17,(vlSymsp->TOP__sim.__PVT__main_sdram_ext_dfi_p0_rddata),32);
        vcdp->chgBit(c+25,(vlSymsp->TOP__sim.__PVT__main_sdram_ext_dfi_p0_rddata_valid));
        vcdp->chgBit(c+33,(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_aborted_fsm_next_value_ce));
        vcdp->chgBit(c+41,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalInstruction));
    }
}

void Vsim::traceChgThis__3(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+49,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_readable));
        vcdp->chgBus(c+57,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_fifo_out_payload_data),8);
        vcdp->chgBit(c+65,((0x10U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0))));
        vcdp->chgBit(c+73,(vlSymsp->TOP__sim.__PVT__main_int_rst));
        vcdp->chgBit(c+81,(vlSymsp->TOP__sim.__PVT__main_soc_rst));
        vcdp->chgBit(c+89,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_reset_storage) 
                                  >> 1U))));
        vcdp->chgBus(c+97,(vlSymsp->TOP__sim.__PVT__main_reset_storage),2);
        vcdp->chgBit(c+105,(vlSymsp->TOP__sim.__PVT__main_reset_re));
        vcdp->chgBus(c+113,(vlSymsp->TOP__sim.__PVT__main_scratch_storage),32);
        vcdp->chgBit(c+121,(vlSymsp->TOP__sim.__PVT__main_scratch_re));
        vcdp->chgBus(c+129,(vlSymsp->TOP__sim.__PVT__main_bus_errors),32);
        vcdp->chgBit(c+137,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_bus_errors_we));
        vcdp->chgBit(c+145,(vlSymsp->TOP__sim.__PVT__main_bus_errors_re));
        vcdp->chgBit(c+153,(vlSymsp->TOP__sim.__PVT__builder_error));
        vcdp->chgBit(c+161,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_soc_rst) 
                                   | ((IData)(vlSymsp->TOP__sim.__PVT__main_reset_storage) 
                                      >> 1U)))));
        vcdp->chgBus(c+169,(vlSymsp->TOP__sim.__PVT__main_interrupt),32);
        vcdp->chgBus(c+177,(vlSymsp->TOP__sim.__PVT__builder_shared_dat_r),32);
        vcdp->chgBit(c+185,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC));
        vcdp->chgBit(c+193,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_STB));
        vcdp->chgBit(c+201,(vlSymsp->TOP__sim.__PVT__main_ibus_ack));
        vcdp->chgBit(c+209,(vlSymsp->TOP__sim.__PVT__main_dbus_ack));
        vcdp->chgBus(c+217,(((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                              ? ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_4)
                                  ? 7U : 2U) : 0U)),3);
        vcdp->chgBus(c+225,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24),30);
        vcdp->chgBus(c+233,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed25),32);
        vcdp->chgBus(c+241,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed26),4);
        vcdp->chgBit(c+249,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed27) 
                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_slave_sel))));
        vcdp->chgBit(c+257,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed28));
        vcdp->chgBit(c+265,(vlSymsp->TOP__sim.__PVT__main_simsoc_ram_bus_ack));
        vcdp->chgBit(c+273,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed29));
        vcdp->chgBus(c+281,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed30),3);
        vcdp->chgBus(c+289,((0x7fffU & vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24)),15);
        vcdp->chgBus(c+297,(vlSymsp->TOP__sim.__PVT__sram
                            [vlSymsp->TOP__sim.__PVT__sram_adr0]),32);
        vcdp->chgBit(c+305,(vlSymsp->TOP__sim.__PVT__main_ram_bus_ram_bus_cyc));
        vcdp->chgBit(c+313,(vlSymsp->TOP__sim.__PVT__main_ram_bus_ram_bus_ack));
        vcdp->chgBus(c+321,((0x7ffU & vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24)),11);
        vcdp->chgBus(c+329,(vlSymsp->TOP__sim.__PVT__main_ram_we),4);
        vcdp->chgBit(c+337,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_fifo_out_first));
        vcdp->chgBit(c+345,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_fifo_out_last));
        vcdp->chgBit(c+353,(vlSymsp->TOP__sim.__PVT__main_uart_rxtx_re));
        vcdp->chgBus(c+361,((0xffU & vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w)),8);
        vcdp->chgBit(c+369,(vlSymsp->TOP__sim.__PVT__main_uart_rxtx_we));
        vcdp->chgBus(c+377,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_fifo_out_payload_data),8);
        vcdp->chgBit(c+385,((0x10U == (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0))));
        vcdp->chgBit(c+393,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txfull_we));
        vcdp->chgBit(c+401,(vlSymsp->TOP__sim.__PVT__main_uart_txfull_re));
        vcdp->chgBit(c+409,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_readable)))));
        vcdp->chgBit(c+417,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxempty_we));
        vcdp->chgBit(c+425,(vlSymsp->TOP__sim.__PVT__main_uart_rxempty_re));
        vcdp->chgBit(c+433,((1U & (((IData)(vlSymsp->TOP__sim.__PVT__main_uart_pending_status) 
                                    & (IData)(vlSymsp->TOP__sim.__PVT__main_uart_enable_storage)) 
                                   | (((IData)(vlSymsp->TOP__sim.__PVT__main_uart_pending_status) 
                                       & (IData)(vlSymsp->TOP__sim.__PVT__main_uart_enable_storage)) 
                                      >> 1U)))));
        vcdp->chgBit(c+441,((0x10U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0))));
        vcdp->chgBit(c+449,(vlSymsp->TOP__sim.__PVT__main_uart_tx_pending));
        vcdp->chgBit(c+457,(vlSymsp->TOP__sim.__PVT__main_uart_tx_clear));
        vcdp->chgBit(c+465,(vlSymsp->TOP__sim.__PVT__main_uart_tx_trigger_d));
        vcdp->chgBit(c+473,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_readable));
        vcdp->chgBit(c+481,(vlSymsp->TOP__sim.__PVT__main_uart_rx_pending));
        vcdp->chgBit(c+489,(vlSymsp->TOP__sim.__PVT__main_uart_rx_clear));
        vcdp->chgBit(c+497,(vlSymsp->TOP__sim.__PVT__main_uart_rx_trigger_d));
        vcdp->chgBus(c+505,(vlSymsp->TOP__sim.__PVT__main_uart_status_status),2);
        vcdp->chgBit(c+513,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_status_we));
        vcdp->chgBit(c+521,(vlSymsp->TOP__sim.__PVT__main_uart_status_re));
        vcdp->chgBus(c+529,(vlSymsp->TOP__sim.__PVT__main_uart_pending_status),2);
        vcdp->chgBit(c+537,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_pending_we));
        vcdp->chgBit(c+545,(vlSymsp->TOP__sim.__PVT__main_uart_pending_re));
        vcdp->chgBus(c+553,(vlSymsp->TOP__sim.__PVT__main_uart_pending_r),2);
        vcdp->chgBit(c+561,((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_uart_enable_storage))));
        vcdp->chgBit(c+569,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_uart_enable_storage) 
                                   >> 1U))));
        vcdp->chgBus(c+577,(vlSymsp->TOP__sim.__PVT__main_uart_enable_storage),2);
        vcdp->chgBit(c+585,(vlSymsp->TOP__sim.__PVT__main_uart_enable_re));
        vcdp->chgBit(c+593,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_readable)))));
        vcdp->chgBit(c+601,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txempty_we));
        vcdp->chgBit(c+609,(vlSymsp->TOP__sim.__PVT__main_uart_txempty_re));
        vcdp->chgBit(c+617,((0x10U == (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0))));
        vcdp->chgBit(c+625,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxfull_we));
        vcdp->chgBit(c+633,(vlSymsp->TOP__sim.__PVT__main_uart_rxfull_re));
        vcdp->chgBit(c+641,((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0))));
        vcdp->chgBus(c+649,((0xffU & vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w)),10);
        vcdp->chgBus(c+657,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0),5);
        vcdp->chgBus(c+665,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_produce),4);
        vcdp->chgBus(c+673,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_consume),4);
        vcdp->chgBus(c+681,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_wrport_adr),4);
        vcdp->chgBit(c+689,(((IData)(vlSymsp->TOP__sim.__PVT__main_uart_rxtx_re) 
                             & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0)))));
        vcdp->chgBus(c+697,((0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0) 
                                      + (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_readable)))),5);
        vcdp->chgBit(c+705,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_fifo_out_first));
        vcdp->chgBit(c+713,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_fifo_out_last));
        vcdp->chgBit(c+721,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_syncfifo_re));
        vcdp->chgBit(c+729,((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0))));
        vcdp->chgBus(c+737,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0),5);
        vcdp->chgBus(c+745,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_produce),4);
        vcdp->chgBus(c+753,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_consume),4);
        vcdp->chgBus(c+761,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_wrport_adr),4);
        vcdp->chgBit(c+769,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_do_read));
        vcdp->chgBus(c+777,((0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0) 
                                      + (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_readable)))),5);
        vcdp->chgBus(c+785,(vlSymsp->TOP__sim.__PVT__main_timer_load_storage),32);
        vcdp->chgBit(c+793,(vlSymsp->TOP__sim.__PVT__main_timer_load_re));
        vcdp->chgBus(c+801,(vlSymsp->TOP__sim.__PVT__main_timer_reload_storage),32);
        vcdp->chgBit(c+809,(vlSymsp->TOP__sim.__PVT__main_timer_reload_re));
        vcdp->chgBit(c+817,(vlSymsp->TOP__sim.__PVT__main_timer_en_storage));
        vcdp->chgBit(c+825,(vlSymsp->TOP__sim.__PVT__main_timer_en_re));
        vcdp->chgBit(c+833,(vlSymsp->TOP__sim.__PVT__main_timer_update_value_storage));
        vcdp->chgBit(c+841,(vlSymsp->TOP__sim.__PVT__main_timer_update_value_re));
        vcdp->chgBus(c+849,(vlSymsp->TOP__sim.__PVT__main_timer_value_status),32);
        vcdp->chgBit(c+857,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_value_we));
        vcdp->chgBit(c+865,(vlSymsp->TOP__sim.__PVT__main_timer_value_re));
        vcdp->chgBit(c+873,(((IData)(vlSymsp->TOP__sim.__PVT__main_timer_zero_pending) 
                             & (IData)(vlSymsp->TOP__sim.__PVT__main_timer_enable_storage))));
        vcdp->chgBit(c+881,((0U == vlSymsp->TOP__sim.__PVT__main_timer_value)));
        vcdp->chgBit(c+889,(vlSymsp->TOP__sim.__PVT__main_timer_zero_pending));
        vcdp->chgBit(c+897,(vlSymsp->TOP__sim.__PVT__main_timer_zero_clear));
        vcdp->chgBit(c+905,(vlSymsp->TOP__sim.__PVT__main_timer_zero_trigger_d));
        vcdp->chgBit(c+913,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_status_we));
        vcdp->chgBit(c+921,(vlSymsp->TOP__sim.__PVT__main_timer_status_re));
        vcdp->chgBit(c+929,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_pending_we));
        vcdp->chgBit(c+937,(vlSymsp->TOP__sim.__PVT__main_timer_pending_re));
        vcdp->chgBit(c+945,(vlSymsp->TOP__sim.__PVT__main_timer_pending_r));
        vcdp->chgBit(c+953,(vlSymsp->TOP__sim.__PVT__main_timer_enable_storage));
        vcdp->chgBit(c+961,(vlSymsp->TOP__sim.__PVT__main_timer_enable_re));
        vcdp->chgBus(c+969,(vlSymsp->TOP__sim.__PVT__main_timer_value),32);
        vcdp->chgBus(c+977,(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_address),13);
        vcdp->chgBus(c+985,(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_bank),2);
        vcdp->chgBit(c+993,(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_cas_n));
        vcdp->chgBit(c+1001,(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_cs_n));
        vcdp->chgBit(c+1009,(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_ras_n));
        vcdp->chgBit(c+1017,(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_we_n));
        vcdp->chgBit(c+1025,(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_cke));
        vcdp->chgBit(c+1033,(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_odt));
        vcdp->chgBit(c+1041,(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_reset_n));
        vcdp->chgBus(c+1049,(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_wrdata),32);
        vcdp->chgBit(c+1057,(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_wrdata_en));
        vcdp->chgBus(c+1065,(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_wrdata_mask),4);
        vcdp->chgBit(c+1073,(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_rddata_en));
        vcdp->chgBus(c+1081,(vlSymsp->TOP__sim.__PVT__main_new_banks_read_data3),32);
        vcdp->chgBit(c+1089,(vlSymsp->TOP__sim.__PVT__main_new_banks_read3));
        vcdp->chgBit(c+1097,(vlSymsp->TOP__sim.__PVT__main_activate));
        vcdp->chgBit(c+1105,(vlSymsp->TOP__sim.__PVT__main_precharge));
        vcdp->chgBit(c+1113,(vlSymsp->TOP__sim.__PVT__main_write));
        vcdp->chgBit(c+1121,(vlSymsp->TOP__sim.__PVT__main_read));
        vcdp->chgBit(c+1129,(vlSymsp->TOP__sim.__PVT__main_bankmodel0_activate));
        vcdp->chgBus(c+1137,(vlSymsp->TOP__sim.__PVT__main_bankmodel0_activate_row),13);
        vcdp->chgBit(c+1145,(vlSymsp->TOP__sim.__PVT__main_bankmodel0_precharge));
        vcdp->chgBit(c+1153,(vlSymsp->TOP__sim.__PVT__main_bank_write0));
        vcdp->chgBus(c+1161,(vlSymsp->TOP__sim.__PVT__main_bank_write_col0),9);
        vcdp->chgBit(c+1169,(vlSymsp->TOP__sim.__PVT__main_bankmodel0_read));
        vcdp->chgBus(c+1177,(vlSymsp->TOP__sim.__PVT__main_bankmodel0_read_col),9);
        vcdp->chgBus(c+1185,(vlSymsp->TOP__sim.__PVT__main_bankmodel0_read_data),32);
        vcdp->chgBit(c+1193,(vlSymsp->TOP__sim.__PVT__main_bankmodel0_active));
        vcdp->chgBus(c+1201,(vlSymsp->TOP__sim.__PVT__main_bankmodel0_row),13);
        vcdp->chgBus(c+1209,(vlSymsp->TOP__sim.__PVT__main_bankmodel0_write_port_adr),22);
        vcdp->chgBus(c+1217,(vlSymsp->TOP__sim.__PVT__mem_1
                             [vlSymsp->TOP__sim.__PVT__mem_1_adr0]),32);
        vcdp->chgBus(c+1225,(vlSymsp->TOP__sim.__PVT__main_bankmodel0_write_port_we),4);
        vcdp->chgBus(c+1233,(vlSymsp->TOP__sim.__PVT__main_bankmodel0_write_port_dat_w),32);
        vcdp->chgBus(c+1241,(vlSymsp->TOP__sim.__PVT__main_bankmodel0_read_port_adr),22);
        vcdp->chgBus(c+1249,(vlSymsp->TOP__sim.__PVT__mem_1
                             [vlSymsp->TOP__sim.__PVT__main_bankmodel0_read_port_adr]),32);
        vcdp->chgBus(c+1257,((0x3fffffU & ((0x7fffffU 
                                            & ((IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel0_row) 
                                               << 9U)) 
                                           | (IData)(vlSymsp->TOP__sim.__PVT__main_bank_write_col0)))),22);
        vcdp->chgBus(c+1265,((0x3fffffU & ((0x7fffffU 
                                            & ((IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel0_row) 
                                               << 9U)) 
                                           | (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel0_read_col)))),22);
        vcdp->chgBit(c+1273,(vlSymsp->TOP__sim.__PVT__main_bankmodel1_activate));
        vcdp->chgBus(c+1281,(vlSymsp->TOP__sim.__PVT__main_bankmodel1_activate_row),13);
        vcdp->chgBit(c+1289,(vlSymsp->TOP__sim.__PVT__main_bankmodel1_precharge));
        vcdp->chgBit(c+1297,(vlSymsp->TOP__sim.__PVT__main_bank_write1));
        vcdp->chgBus(c+1305,(vlSymsp->TOP__sim.__PVT__main_bank_write_col1),9);
        vcdp->chgBit(c+1313,(vlSymsp->TOP__sim.__PVT__main_bankmodel1_read));
        vcdp->chgBus(c+1321,(vlSymsp->TOP__sim.__PVT__main_bankmodel1_read_col),9);
        vcdp->chgBus(c+1329,(vlSymsp->TOP__sim.__PVT__main_bankmodel1_read_data),32);
        vcdp->chgBit(c+1337,(vlSymsp->TOP__sim.__PVT__main_bankmodel1_active));
        vcdp->chgBus(c+1345,(vlSymsp->TOP__sim.__PVT__main_bankmodel1_row),13);
        vcdp->chgBus(c+1353,(vlSymsp->TOP__sim.__PVT__main_bankmodel1_write_port_adr),22);
        vcdp->chgBus(c+1361,(vlSymsp->TOP__sim.__PVT__mem_2
                             [vlSymsp->TOP__sim.__PVT__mem_2_adr0]),32);
        vcdp->chgBus(c+1369,(vlSymsp->TOP__sim.__PVT__main_bankmodel1_write_port_we),4);
        vcdp->chgBus(c+1377,(vlSymsp->TOP__sim.__PVT__main_bankmodel1_write_port_dat_w),32);
        vcdp->chgBus(c+1385,(vlSymsp->TOP__sim.__PVT__main_bankmodel1_read_port_adr),22);
        vcdp->chgBus(c+1393,(vlSymsp->TOP__sim.__PVT__mem_2
                             [vlSymsp->TOP__sim.__PVT__main_bankmodel1_read_port_adr]),32);
        vcdp->chgBus(c+1401,((0x3fffffU & ((0x7fffffU 
                                            & ((IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel1_row) 
                                               << 9U)) 
                                           | (IData)(vlSymsp->TOP__sim.__PVT__main_bank_write_col1)))),22);
        vcdp->chgBus(c+1409,((0x3fffffU & ((0x7fffffU 
                                            & ((IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel1_row) 
                                               << 9U)) 
                                           | (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel1_read_col)))),22);
        vcdp->chgBit(c+1417,(vlSymsp->TOP__sim.__PVT__main_bankmodel2_activate));
        vcdp->chgBus(c+1425,(vlSymsp->TOP__sim.__PVT__main_bankmodel2_activate_row),13);
        vcdp->chgBit(c+1433,(vlSymsp->TOP__sim.__PVT__main_bankmodel2_precharge));
        vcdp->chgBit(c+1441,(vlSymsp->TOP__sim.__PVT__main_bank_write2));
        vcdp->chgBus(c+1449,(vlSymsp->TOP__sim.__PVT__main_bank_write_col2),9);
        vcdp->chgBit(c+1457,(vlSymsp->TOP__sim.__PVT__main_bankmodel2_read));
        vcdp->chgBus(c+1465,(vlSymsp->TOP__sim.__PVT__main_bankmodel2_read_col),9);
        vcdp->chgBus(c+1473,(vlSymsp->TOP__sim.__PVT__main_bankmodel2_read_data),32);
    }
}

void Vsim::traceChgThis__5(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1481,(vlSymsp->TOP__sim.__PVT__main_bankmodel2_active));
        vcdp->chgBus(c+1489,(vlSymsp->TOP__sim.__PVT__main_bankmodel2_row),13);
        vcdp->chgBus(c+1497,(vlSymsp->TOP__sim.__PVT__main_bankmodel2_write_port_adr),22);
        vcdp->chgBus(c+1505,(vlSymsp->TOP__sim.__PVT__mem_3
                             [vlSymsp->TOP__sim.__PVT__mem_3_adr0]),32);
        vcdp->chgBus(c+1513,(vlSymsp->TOP__sim.__PVT__main_bankmodel2_write_port_we),4);
        vcdp->chgBus(c+1521,(vlSymsp->TOP__sim.__PVT__main_bankmodel2_write_port_dat_w),32);
        vcdp->chgBus(c+1529,(vlSymsp->TOP__sim.__PVT__main_bankmodel2_read_port_adr),22);
        vcdp->chgBus(c+1537,(vlSymsp->TOP__sim.__PVT__mem_3
                             [vlSymsp->TOP__sim.__PVT__main_bankmodel2_read_port_adr]),32);
        vcdp->chgBus(c+1545,((0x3fffffU & ((0x7fffffU 
                                            & ((IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel2_row) 
                                               << 9U)) 
                                           | (IData)(vlSymsp->TOP__sim.__PVT__main_bank_write_col2)))),22);
        vcdp->chgBus(c+1553,((0x3fffffU & ((0x7fffffU 
                                            & ((IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel2_row) 
                                               << 9U)) 
                                           | (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel2_read_col)))),22);
        vcdp->chgBit(c+1561,(vlSymsp->TOP__sim.__PVT__main_bankmodel3_activate));
        vcdp->chgBus(c+1569,(vlSymsp->TOP__sim.__PVT__main_bankmodel3_activate_row),13);
        vcdp->chgBit(c+1577,(vlSymsp->TOP__sim.__PVT__main_bankmodel3_precharge));
        vcdp->chgBit(c+1585,(vlSymsp->TOP__sim.__PVT__main_bank_write3));
        vcdp->chgBus(c+1593,(vlSymsp->TOP__sim.__PVT__main_bank_write_col3),9);
        vcdp->chgBit(c+1601,(vlSymsp->TOP__sim.__PVT__main_bankmodel3_read));
        vcdp->chgBus(c+1609,(vlSymsp->TOP__sim.__PVT__main_bankmodel3_read_col),9);
        vcdp->chgBus(c+1617,(vlSymsp->TOP__sim.__PVT__main_bankmodel3_read_data),32);
        vcdp->chgBit(c+1625,(vlSymsp->TOP__sim.__PVT__main_bankmodel3_active));
        vcdp->chgBus(c+1633,(vlSymsp->TOP__sim.__PVT__main_bankmodel3_row),13);
        vcdp->chgBus(c+1641,(vlSymsp->TOP__sim.__PVT__main_bankmodel3_write_port_adr),22);
        vcdp->chgBus(c+1649,(vlSymsp->TOP__sim.__PVT__mem_4
                             [vlSymsp->TOP__sim.__PVT__mem_4_adr0]),32);
        vcdp->chgBus(c+1657,(vlSymsp->TOP__sim.__PVT__main_bankmodel3_write_port_we),4);
        vcdp->chgBus(c+1665,(vlSymsp->TOP__sim.__PVT__main_bankmodel3_write_port_dat_w),32);
        vcdp->chgBus(c+1673,(vlSymsp->TOP__sim.__PVT__main_bankmodel3_read_port_adr),22);
        vcdp->chgBus(c+1681,(vlSymsp->TOP__sim.__PVT__mem_4
                             [vlSymsp->TOP__sim.__PVT__main_bankmodel3_read_port_adr]),32);
        vcdp->chgBus(c+1689,((0x3fffffU & ((0x7fffffU 
                                            & ((IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel3_row) 
                                               << 9U)) 
                                           | (IData)(vlSymsp->TOP__sim.__PVT__main_bank_write_col3)))),22);
        vcdp->chgBus(c+1697,((0x3fffffU & ((0x7fffffU 
                                            & ((IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel3_row) 
                                               << 9U)) 
                                           | (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel3_read_col)))),22);
        vcdp->chgBit(c+1705,(((((IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel0_read) 
                                | (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel1_read)) 
                               | (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel2_read)) 
                              | (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel3_read))));
        vcdp->chgBus(c+1713,((((vlSymsp->TOP__sim.__PVT__main_bankmodel0_read_data 
                                | vlSymsp->TOP__sim.__PVT__main_bankmodel1_read_data) 
                               | vlSymsp->TOP__sim.__PVT__main_bankmodel2_read_data) 
                              | vlSymsp->TOP__sim.__PVT__main_bankmodel3_read_data)),32);
        vcdp->chgBit(c+1721,(vlSymsp->TOP__sim.__PVT__main_new_banks_read0));
        vcdp->chgBus(c+1729,(vlSymsp->TOP__sim.__PVT__main_new_banks_read_data0),32);
        vcdp->chgBit(c+1737,(vlSymsp->TOP__sim.__PVT__main_new_banks_read1));
        vcdp->chgBus(c+1745,(vlSymsp->TOP__sim.__PVT__main_new_banks_read_data1),32);
        vcdp->chgBit(c+1753,(vlSymsp->TOP__sim.__PVT__main_new_banks_read2));
        vcdp->chgBus(c+1761,(vlSymsp->TOP__sim.__PVT__main_new_banks_read_data2),32);
        vcdp->chgBus(c+1769,(vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_address),13);
        vcdp->chgBus(c+1777,(vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_bank),2);
        vcdp->chgBit(c+1785,(vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_cas_n));
        vcdp->chgBit(c+1793,(vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_cs_n));
        vcdp->chgBit(c+1801,(vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_ras_n));
        vcdp->chgBit(c+1809,(vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_we_n));
        vcdp->chgBus(c+1817,(vlSymsp->TOP__sim.__PVT__main_sdram_interface_wdata),32);
        vcdp->chgBit(c+1825,(vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_wrdata_en));
        vcdp->chgBus(c+1833,((0xfU & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_interface_wdata_we)))),4);
        vcdp->chgBit(c+1841,(vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_rddata_en));
        vcdp->chgBus(c+1849,(vlSymsp->TOP__sim.__PVT__main_sdram_slave_p0_rddata),32);
        vcdp->chgBit(c+1857,(vlSymsp->TOP__sim.__PVT__main_sdram_slave_p0_rddata_valid));
        vcdp->chgBus(c+1865,(vlSymsp->TOP__sim.__PVT__main_sdram_address_storage),13);
        vcdp->chgBus(c+1873,(vlSymsp->TOP__sim.__PVT__main_sdram_baddress_storage),2);
        vcdp->chgBit(c+1881,(vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_cas_n));
        vcdp->chgBit(c+1889,(vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_cs_n));
        vcdp->chgBit(c+1897,(vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_ras_n));
        vcdp->chgBit(c+1905,(vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_we_n));
        vcdp->chgBit(c+1913,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage) 
                                    >> 1U))));
        vcdp->chgBit(c+1921,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage) 
                                    >> 2U))));
        vcdp->chgBit(c+1929,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage) 
                                    >> 3U))));
        vcdp->chgBus(c+1937,(vlSymsp->TOP__sim.__PVT__main_sdram_wrdata_storage),32);
        vcdp->chgBit(c+1945,(((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_issue_re) 
                              & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_storage) 
                                 >> 4U))));
        vcdp->chgBit(c+1953,(((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_issue_re) 
                              & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_storage) 
                                 >> 5U))));
        vcdp->chgBus(c+1961,(vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_rddata),32);
        vcdp->chgBit(c+1969,(vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_rddata_valid));
        vcdp->chgBit(c+1977,((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage))));
        vcdp->chgBus(c+1985,(vlSymsp->TOP__sim.__PVT__main_sdram_storage),4);
        vcdp->chgBit(c+1993,(vlSymsp->TOP__sim.__PVT__main_sdram_re));
        vcdp->chgBit(c+2001,((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_storage))));
        vcdp->chgBit(c+2009,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_storage) 
                                    >> 1U))));
        vcdp->chgBit(c+2017,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_storage) 
                                    >> 2U))));
        vcdp->chgBit(c+2025,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_storage) 
                                    >> 3U))));
        vcdp->chgBit(c+2033,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_storage) 
                                    >> 4U))));
        vcdp->chgBit(c+2041,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_storage) 
                                    >> 5U))));
        vcdp->chgBus(c+2049,(vlSymsp->TOP__sim.__PVT__main_sdram_command_storage),6);
        vcdp->chgBit(c+2057,(vlSymsp->TOP__sim.__PVT__main_sdram_command_re));
        vcdp->chgBit(c+2065,(vlSymsp->TOP__sim.__PVT__main_sdram_command_issue_re));
        vcdp->chgBit(c+2073,((1U & vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w)));
        vcdp->chgBit(c+2081,(vlSymsp->TOP__sim.__PVT__main_sdram_command_issue_we));
        vcdp->chgBit(c+2089,(vlSymsp->TOP__sim.__PVT__main_sdram_address_re));
        vcdp->chgBit(c+2097,(vlSymsp->TOP__sim.__PVT__main_sdram_baddress_re));
        vcdp->chgBit(c+2105,(vlSymsp->TOP__sim.__PVT__main_sdram_wrdata_re));
        vcdp->chgBus(c+2113,(vlSymsp->TOP__sim.__PVT__main_sdram_rddata_status),32);
        vcdp->chgBit(c+2121,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_rddata_we));
        vcdp->chgBit(c+2129,(vlSymsp->TOP__sim.__PVT__main_sdram_rddata_re));
        vcdp->chgBit(c+2137,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed14));
        vcdp->chgBit(c+2145,((8U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_level))));
        vcdp->chgBit(c+2153,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed13));
        vcdp->chgBus(c+2161,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed12),22);
        vcdp->chgBit(c+2169,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_req_lock));
        vcdp->chgBit(c+2177,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_req_wdata_ready));
        vcdp->chgBit(c+2185,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_req_rdata_valid));
        vcdp->chgBit(c+2193,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed17));
        vcdp->chgBit(c+2201,((8U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_level))));
        vcdp->chgBit(c+2209,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed16));
        vcdp->chgBus(c+2217,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed15),22);
        vcdp->chgBit(c+2225,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_req_lock));
        vcdp->chgBit(c+2233,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_req_wdata_ready));
        vcdp->chgBit(c+2241,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_req_rdata_valid));
        vcdp->chgBit(c+2249,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed20));
        vcdp->chgBit(c+2257,((8U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_level))));
        vcdp->chgBit(c+2265,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed19));
        vcdp->chgBus(c+2273,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed18),22);
        vcdp->chgBit(c+2281,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_req_lock));
        vcdp->chgBit(c+2289,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_req_wdata_ready));
        vcdp->chgBit(c+2297,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_req_rdata_valid));
        vcdp->chgBit(c+2305,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed23));
        vcdp->chgBit(c+2313,((8U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_level))));
        vcdp->chgBit(c+2321,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed22));
        vcdp->chgBus(c+2329,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed21),22);
        vcdp->chgBit(c+2337,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_req_lock));
        vcdp->chgBit(c+2345,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_req_wdata_ready));
        vcdp->chgBit(c+2353,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_req_rdata_valid));
        vcdp->chgBus(c+2361,(vlSymsp->TOP__sim.__PVT__main_sdram_interface_wdata_we),4);
        vcdp->chgBit(c+2369,(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid));
        vcdp->chgBit(c+2377,(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_ready));
        vcdp->chgBit(c+2385,(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_last));
        vcdp->chgBus(c+2393,(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_a),13);
        vcdp->chgBus(c+2401,(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_ba),2);
        vcdp->chgBit(c+2409,(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_cas));
        vcdp->chgBit(c+2417,(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_ras));
        vcdp->chgBit(c+2425,(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_we));
        vcdp->chgBit(c+2433,(vlSymsp->TOP__sim.__PVT__main_sdram_postponer_req_o));
        vcdp->chgBit(c+2441,((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_timer_count1))));
        vcdp->chgBit(c+2449,((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_timer_count1))));
        vcdp->chgBus(c+2457,(vlSymsp->TOP__sim.__PVT__main_sdram_timer_count1),10);
        vcdp->chgBit(c+2465,(vlSymsp->TOP__sim.__PVT__main_sdram_postponer_count));
        vcdp->chgBit(c+2473,(vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_start0));
        vcdp->chgBit(c+2481,(vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_done0));
        vcdp->chgBit(c+2489,(vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_start1));
        vcdp->chgBit(c+2497,(vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_done1));
        vcdp->chgBus(c+2505,(vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_counter),4);
        vcdp->chgBit(c+2513,(vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_count));
        vcdp->chgBit(c+2521,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_refresh_gnt));
        vcdp->chgBit(c+2529,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_valid));
        vcdp->chgBit(c+2537,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_ready));
        vcdp->chgBus(c+2545,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_a),13);
        vcdp->chgBit(c+2553,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_cas));
        vcdp->chgBit(c+2561,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_ras));
        vcdp->chgBit(c+2569,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_we));
        vcdp->chgBit(c+2577,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_is_cmd));
        vcdp->chgBit(c+2585,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_is_read));
        vcdp->chgBit(c+2593,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_is_write));
        vcdp->chgBit(c+2601,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_auto_precharge));
        vcdp->chgBit(c+2609,((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_level))));
        vcdp->chgBit(c+2617,((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_valid)) 
                                    | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_source_source_ready)))));
        vcdp->chgBit(c+2625,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_fifo_out_first));
        vcdp->chgBit(c+2633,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_fifo_out_last));
        vcdp->chgBit(c+2641,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_fifo_out_payload_we));
        vcdp->chgBus(c+2649,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_fifo_out_payload_addr),22);
        vcdp->chgBus(c+2657,(((vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed12 
                               << 1U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed13))),25);
        vcdp->chgBus(c+2665,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_rdport_dat_r),25);
        vcdp->chgBus(c+2673,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_level),4);
        vcdp->chgBus(c+2681,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_produce),3);
        vcdp->chgBus(c+2689,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_consume),3);
        vcdp->chgBus(c+2697,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_wrport_adr),3);
        vcdp->chgBit(c+2705,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed14) 
                              & (8U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_level)))));
        vcdp->chgBit(c+2713,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_do_read));
        vcdp->chgBit(c+2721,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_valid));
        vcdp->chgBit(c+2729,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_source_source_ready));
        vcdp->chgBit(c+2737,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_first));
        vcdp->chgBit(c+2745,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_last));
        vcdp->chgBit(c+2753,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_payload_we));
        vcdp->chgBus(c+2761,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_payload_addr),22);
        vcdp->chgBus(c+2769,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row),13);
        vcdp->chgBit(c+2777,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_opened));
        vcdp->chgBit(c+2785,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_hit));
        vcdp->chgBit(c+2793,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_open));
        vcdp->chgBit(c+2801,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_close));
        vcdp->chgBit(c+2809,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_col_n_addr_sel));
        vcdp->chgBit(c+2817,((((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_valid) 
                               & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_ready)) 
                              & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_is_write))));
        vcdp->chgBit(c+2825,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_twtpcon_ready));
        vcdp->chgBus(c+2833,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_twtpcon_count),3);
        vcdp->chgBit(c+2841,((((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_valid) 
                               & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_ready)) 
                              & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_open))));
        vcdp->chgBit(c+2849,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trccon_ready));
        vcdp->chgBus(c+2857,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trccon_count),3);
        vcdp->chgBit(c+2865,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trascon_ready));
        vcdp->chgBus(c+2873,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trascon_count),3);
        vcdp->chgBit(c+2881,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_refresh_gnt));
        vcdp->chgBit(c+2889,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_valid));
        vcdp->chgBit(c+2897,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_ready));
        vcdp->chgBus(c+2905,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_a),13);
    }
}

void Vsim::traceChgThis__7(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2913,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_cas));
        vcdp->chgBit(c+2921,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_ras));
        vcdp->chgBit(c+2929,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_we));
        vcdp->chgBit(c+2937,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_is_cmd));
        vcdp->chgBit(c+2945,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_is_read));
        vcdp->chgBit(c+2953,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_is_write));
        vcdp->chgBit(c+2961,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_auto_precharge));
        vcdp->chgBit(c+2969,((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_level))));
        vcdp->chgBit(c+2977,((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_valid)) 
                                    | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_source_source_ready)))));
        vcdp->chgBit(c+2985,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_fifo_out_first));
        vcdp->chgBit(c+2993,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_fifo_out_last));
        vcdp->chgBit(c+3001,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_fifo_out_payload_we));
        vcdp->chgBus(c+3009,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_fifo_out_payload_addr),22);
        vcdp->chgBus(c+3017,(((vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed15 
                               << 1U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed16))),25);
        vcdp->chgBus(c+3025,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_rdport_dat_r),25);
        vcdp->chgBus(c+3033,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_level),4);
        vcdp->chgBus(c+3041,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_produce),3);
        vcdp->chgBus(c+3049,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_consume),3);
        vcdp->chgBus(c+3057,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_wrport_adr),3);
        vcdp->chgBit(c+3065,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed17) 
                              & (8U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_level)))));
        vcdp->chgBit(c+3073,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_do_read));
        vcdp->chgBit(c+3081,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_valid));
        vcdp->chgBit(c+3089,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_source_source_ready));
        vcdp->chgBit(c+3097,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_first));
        vcdp->chgBit(c+3105,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_last));
        vcdp->chgBit(c+3113,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_payload_we));
        vcdp->chgBus(c+3121,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_payload_addr),22);
        vcdp->chgBus(c+3129,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row),13);
        vcdp->chgBit(c+3137,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_opened));
        vcdp->chgBit(c+3145,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_hit));
        vcdp->chgBit(c+3153,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_open));
        vcdp->chgBit(c+3161,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_close));
        vcdp->chgBit(c+3169,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_col_n_addr_sel));
        vcdp->chgBit(c+3177,((((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_valid) 
                               & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_ready)) 
                              & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_is_write))));
        vcdp->chgBit(c+3185,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_twtpcon_ready));
        vcdp->chgBus(c+3193,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_twtpcon_count),3);
        vcdp->chgBit(c+3201,((((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_valid) 
                               & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_ready)) 
                              & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_open))));
        vcdp->chgBit(c+3209,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trccon_ready));
        vcdp->chgBus(c+3217,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trccon_count),3);
        vcdp->chgBit(c+3225,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trascon_ready));
        vcdp->chgBus(c+3233,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trascon_count),3);
        vcdp->chgBit(c+3241,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_refresh_gnt));
        vcdp->chgBit(c+3249,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_valid));
        vcdp->chgBit(c+3257,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_ready));
        vcdp->chgBus(c+3265,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_a),13);
        vcdp->chgBit(c+3273,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_cas));
        vcdp->chgBit(c+3281,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_ras));
        vcdp->chgBit(c+3289,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_we));
        vcdp->chgBit(c+3297,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_is_cmd));
        vcdp->chgBit(c+3305,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_is_read));
        vcdp->chgBit(c+3313,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_is_write));
        vcdp->chgBit(c+3321,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_auto_precharge));
        vcdp->chgBit(c+3329,((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_level))));
        vcdp->chgBit(c+3337,((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_valid)) 
                                    | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_source_source_ready)))));
        vcdp->chgBit(c+3345,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_fifo_out_first));
        vcdp->chgBit(c+3353,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_fifo_out_last));
        vcdp->chgBit(c+3361,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_fifo_out_payload_we));
        vcdp->chgBus(c+3369,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_fifo_out_payload_addr),22);
        vcdp->chgBus(c+3377,(((vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed18 
                               << 1U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed19))),25);
        vcdp->chgBus(c+3385,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_rdport_dat_r),25);
        vcdp->chgBus(c+3393,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_level),4);
        vcdp->chgBus(c+3401,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_produce),3);
        vcdp->chgBus(c+3409,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_consume),3);
        vcdp->chgBus(c+3417,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_wrport_adr),3);
        vcdp->chgBit(c+3425,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed20) 
                              & (8U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_level)))));
        vcdp->chgBit(c+3433,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_do_read));
        vcdp->chgBit(c+3441,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_valid));
        vcdp->chgBit(c+3449,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_source_source_ready));
        vcdp->chgBit(c+3457,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_first));
        vcdp->chgBit(c+3465,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_last));
        vcdp->chgBit(c+3473,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_payload_we));
        vcdp->chgBus(c+3481,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_payload_addr),22);
        vcdp->chgBus(c+3489,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row),13);
        vcdp->chgBit(c+3497,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_opened));
        vcdp->chgBit(c+3505,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_hit));
        vcdp->chgBit(c+3513,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_open));
        vcdp->chgBit(c+3521,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_close));
        vcdp->chgBit(c+3529,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_col_n_addr_sel));
        vcdp->chgBit(c+3537,((((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_valid) 
                               & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_ready)) 
                              & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_is_write))));
        vcdp->chgBit(c+3545,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_twtpcon_ready));
        vcdp->chgBus(c+3553,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_twtpcon_count),3);
        vcdp->chgBit(c+3561,((((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_valid) 
                               & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_ready)) 
                              & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_open))));
        vcdp->chgBit(c+3569,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trccon_ready));
        vcdp->chgBus(c+3577,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trccon_count),3);
        vcdp->chgBit(c+3585,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trascon_ready));
        vcdp->chgBus(c+3593,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trascon_count),3);
        vcdp->chgBit(c+3601,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_refresh_gnt));
        vcdp->chgBit(c+3609,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_valid));
        vcdp->chgBit(c+3617,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_ready));
        vcdp->chgBus(c+3625,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_a),13);
        vcdp->chgBit(c+3633,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_cas));
        vcdp->chgBit(c+3641,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_ras));
        vcdp->chgBit(c+3649,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_we));
        vcdp->chgBit(c+3657,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_is_cmd));
        vcdp->chgBit(c+3665,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_is_read));
        vcdp->chgBit(c+3673,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_is_write));
        vcdp->chgBit(c+3681,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_auto_precharge));
        vcdp->chgBit(c+3689,((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_level))));
        vcdp->chgBit(c+3697,((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_valid)) 
                                    | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_source_source_ready)))));
        vcdp->chgBit(c+3705,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_fifo_out_first));
        vcdp->chgBit(c+3713,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_fifo_out_last));
        vcdp->chgBit(c+3721,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_fifo_out_payload_we));
        vcdp->chgBus(c+3729,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_fifo_out_payload_addr),22);
        vcdp->chgBus(c+3737,(((vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed21 
                               << 1U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed22))),25);
        vcdp->chgBus(c+3745,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_rdport_dat_r),25);
        vcdp->chgBus(c+3753,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_level),4);
        vcdp->chgBus(c+3761,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_produce),3);
        vcdp->chgBus(c+3769,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_consume),3);
        vcdp->chgBus(c+3777,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_wrport_adr),3);
        vcdp->chgBit(c+3785,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed23) 
                              & (8U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_level)))));
        vcdp->chgBit(c+3793,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_do_read));
        vcdp->chgBit(c+3801,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_valid));
        vcdp->chgBit(c+3809,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_source_source_ready));
        vcdp->chgBit(c+3817,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_first));
        vcdp->chgBit(c+3825,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_last));
        vcdp->chgBit(c+3833,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_payload_we));
        vcdp->chgBus(c+3841,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_payload_addr),22);
        vcdp->chgBus(c+3849,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row),13);
        vcdp->chgBit(c+3857,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_opened));
        vcdp->chgBit(c+3865,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_hit));
        vcdp->chgBit(c+3873,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_open));
        vcdp->chgBit(c+3881,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_close));
        vcdp->chgBit(c+3889,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_col_n_addr_sel));
        vcdp->chgBit(c+3897,((((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_valid) 
                               & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_ready)) 
                              & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_is_write))));
        vcdp->chgBit(c+3905,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_twtpcon_ready));
        vcdp->chgBus(c+3913,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_twtpcon_count),3);
        vcdp->chgBit(c+3921,((((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_valid) 
                               & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_ready)) 
                              & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_open))));
        vcdp->chgBit(c+3929,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trccon_ready));
        vcdp->chgBus(c+3937,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trccon_count),3);
        vcdp->chgBit(c+3945,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trascon_ready));
        vcdp->chgBus(c+3953,(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trascon_count),3);
        vcdp->chgBit(c+3961,(vlSymsp->TOP__sim.__PVT__main_sdram_trrdcon_ready));
        vcdp->chgBit(c+3969,(vlSymsp->TOP__sim.__PVT__main_sdram_tccdcon_ready));
        vcdp->chgBit(c+3977,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed0));
        vcdp->chgBus(c+3985,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed1),13);
        vcdp->chgBus(c+3993,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed2),2);
        vcdp->chgBit(c+4001,(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_cmd_payload_cas));
        vcdp->chgBit(c+4009,(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_cmd_payload_ras));
        vcdp->chgBit(c+4017,(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_cmd_payload_we));
        vcdp->chgBit(c+4025,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed5));
        vcdp->chgBit(c+4033,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed3));
        vcdp->chgBit(c+4041,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed4));
        vcdp->chgBus(c+4049,(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_valids),4);
        vcdp->chgBus(c+4057,(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant),2);
        vcdp->chgBit(c+4065,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed0)))));
        vcdp->chgBit(c+4073,(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_want_reads));
        vcdp->chgBit(c+4081,(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_want_writes));
        vcdp->chgBit(c+4089,(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_want_activates));
        vcdp->chgBit(c+4097,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed6));
        vcdp->chgBit(c+4105,(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_ready));
        vcdp->chgBus(c+4113,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed7),13);
        vcdp->chgBus(c+4121,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed8),2);
        vcdp->chgBit(c+4129,(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_payload_cas));
        vcdp->chgBit(c+4137,(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_payload_ras));
        vcdp->chgBit(c+4145,(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_payload_we));
        vcdp->chgBit(c+4153,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed11));
        vcdp->chgBit(c+4161,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed9));
        vcdp->chgBit(c+4169,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed10));
        vcdp->chgBus(c+4177,(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_valids),4);
        vcdp->chgBus(c+4185,(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant),2);
        vcdp->chgBit(c+4193,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_ready) 
                                    | (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed6))))));
        vcdp->chgBus(c+4201,(vlSymsp->TOP__sim.__PVT__main_sdram_steerer_sel),2);
        vcdp->chgBit(c+4209,((((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed6) 
                               & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_ready)) 
                              & (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_payload_ras) 
                                  & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_payload_cas))) 
                                 & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_payload_we))))));
        vcdp->chgBit(c+4217,(vlSymsp->TOP__sim.__PVT__main_sdram_trrdcon_count));
        vcdp->chgBit(c+4225,((((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed6) 
                               & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_ready)) 
                              & ((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed10) 
                                 | (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed9)))));
        vcdp->chgBit(c+4233,(vlSymsp->TOP__sim.__PVT__main_sdram_tccdcon_count));
        vcdp->chgBit(c+4241,((((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed6) 
                               & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_ready)) 
                              & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed10))));
        vcdp->chgBit(c+4249,(vlSymsp->TOP__sim.__PVT__main_sdram_twtrcon_ready));
        vcdp->chgBus(c+4257,(vlSymsp->TOP__sim.__PVT__main_sdram_twtrcon_count),3);
        vcdp->chgBit(c+4265,(vlSymsp->TOP__sim.__PVT__main_sdram_read_available));
        vcdp->chgBit(c+4273,(vlSymsp->TOP__sim.__PVT__main_sdram_write_available));
        vcdp->chgBit(c+4281,(vlSymsp->TOP__sim.__PVT__main_sdram_en0));
        vcdp->chgBit(c+4289,((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_time0))));
        vcdp->chgBus(c+4297,(vlSymsp->TOP__sim.__PVT__main_sdram_time0),5);
        vcdp->chgBit(c+4305,(vlSymsp->TOP__sim.__PVT__main_sdram_en1));
        vcdp->chgBit(c+4313,((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_time1))));
        vcdp->chgBus(c+4321,(vlSymsp->TOP__sim.__PVT__main_sdram_time1),4);
        vcdp->chgBit(c+4329,(vlSymsp->TOP__sim.__PVT__main_sdram_go_to_refresh));
        vcdp->chgBit(c+4337,(vlSymsp->TOP__sim.__PVT__main_port_cmd_valid));
        vcdp->chgBit(c+4345,(vlSymsp->TOP__sim.__PVT__main_port_cmd_ready));
        vcdp->chgBit(c+4353,(vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_we));
        vcdp->chgBus(c+4361,(vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_addr),24);
        vcdp->chgBit(c+4369,(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_valid));
        vcdp->chgBit(c+4377,(vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_wdata_ready));
        vcdp->chgBus(c+4385,(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_source_payload_data),32);
        vcdp->chgBus(c+4393,(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_source_payload_we),4);
        vcdp->chgBit(c+4401,(vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_rdata_valid4));
        vcdp->chgBus(c+4409,(vlSymsp->TOP__sim.__PVT__main_wb_sdram_dat_r),32);
        vcdp->chgBit(c+4417,(vlSymsp->TOP__sim.__PVT__main_wb_sdram_cyc));
        vcdp->chgBit(c+4425,(vlSymsp->TOP__sim.__PVT__main_wb_sdram_ack));
        vcdp->chgBus(c+4433,(((0x3ffffe00U & (vlSymsp->TOP__sim.__PVT__main_tag_do_tag 
                                              << 9U)) 
                              | (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                                           >> 2U)))),30);
        vcdp->chgArray(c+4441,(vlSymsp->TOP__sim.__PVT__main_data_port_dat_r),128);
        vcdp->chgArray(c+4473,(vlSymsp->TOP__sim.__PVT__main_interface_dat_r),128);
        vcdp->chgBit(c+4505,(vlSymsp->TOP__sim.__PVT__main_interface_cyc));
        vcdp->chgBit(c+4513,(vlSymsp->TOP__sim.__PVT__main_interface_stb));
        vcdp->chgBit(c+4521,(vlSymsp->TOP__sim.__PVT__main_interface_ack));
        vcdp->chgBit(c+4529,(vlSymsp->TOP__sim.__PVT__main_interface_we));
        vcdp->chgBus(c+4537,((0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                                        >> 2U))),9);
        vcdp->chgBus(c+4545,(vlSymsp->TOP__sim.__PVT__main_data_port_we),16);
        vcdp->chgArray(c+4553,(vlSymsp->TOP__sim.__PVT__main_data_port_dat_w),128);
        vcdp->chgBit(c+4585,(vlSymsp->TOP__sim.__PVT__main_write_from_slave));
    }
}

void Vsim::traceChgThis__9(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+4593,(vlSymsp->TOP__sim.__PVT__main_adr_offset_r),2);
        vcdp->chgBus(c+4601,(vlSymsp->TOP__sim.__PVT__main_tag_port_dat_r),24);
        vcdp->chgBit(c+4609,(vlSymsp->TOP__sim.__PVT__main_tag_port_we));
        vcdp->chgBus(c+4617,((((IData)(vlSymsp->TOP__sim.__PVT__main_tag_di_dirty) 
                               << 0x17U) | (0x7ffffU 
                                            & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                                               >> 0xbU)))),24);
        vcdp->chgBus(c+4625,(vlSymsp->TOP__sim.__PVT__main_tag_do_tag),23);
        vcdp->chgBit(c+4633,(vlSymsp->TOP__sim.__PVT__main_tag_do_dirty));
        vcdp->chgBus(c+4641,((0x7ffffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                                          >> 0xbU))),23);
        vcdp->chgBit(c+4649,(vlSymsp->TOP__sim.__PVT__main_tag_di_dirty));
        vcdp->chgBit(c+4657,(vlSymsp->TOP__sim.__PVT__main_word_clr));
        vcdp->chgBit(c+4665,(vlSymsp->TOP__sim.__PVT__main_word_inc));
        vcdp->chgBit(c+4673,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_interface_cyc)))));
        vcdp->chgBit(c+4681,(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_cmd_valid));
        vcdp->chgBit(c+4689,(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_cmd_ready));
        vcdp->chgBit(c+4697,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_interface_we)))));
        vcdp->chgBus(c+4705,(((0x3ffe00U & (vlSymsp->TOP__sim.__PVT__main_tag_do_tag 
                                            << 9U)) 
                              | (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                                           >> 2U)))),22);
        vcdp->chgBit(c+4713,(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_ready));
        vcdp->chgBit(c+4721,(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_strobe_all));
        vcdp->chgBit(c+4729,(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_first));
        vcdp->chgBit(c+4737,(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_last));
        vcdp->chgArray(c+4745,(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data),128);
        vcdp->chgBus(c+4777,(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_count),2);
        vcdp->chgArray(c+4785,(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data),144);
        vcdp->chgQuad(c+4825,(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_source_payload_data),36);
        vcdp->chgBit(c+4841,((3U == (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_mux))));
        vcdp->chgBus(c+4849,(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_mux),2);
        vcdp->chgBit(c+4857,((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_mux))));
        vcdp->chgArray(c+4865,(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_payload_data),128);
        vcdp->chgBus(c+4897,(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_payload_valid_token_count),3);
        vcdp->chgBus(c+4905,(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_demux),2);
        vcdp->chgBit(c+4913,(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_aborted));
        vcdp->chgBit(c+4921,(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_is_ongoing));
        vcdp->chgBus(c+4929,(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr),14);
        vcdp->chgBit(c+4937,(vlSymsp->TOP__sim.__PVT__builder_simsoc_we));
        vcdp->chgBus(c+4945,(vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w),32);
        vcdp->chgBus(c+4953,(((((vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r 
                                 | vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r) 
                                | vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r) 
                               | vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r) 
                              | vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sram_bus_dat_r)),32);
        vcdp->chgBus(c+4961,(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone_dat_r),32);
        vcdp->chgBit(c+4969,(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone_cyc));
        vcdp->chgBit(c+4977,(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone_ack));
        vcdp->chgBit(c+4985,(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed27));
        vcdp->chgBit(c+4993,(vlSymsp->TOP__sim.__PVT__builder_shared_ack));
        vcdp->chgBus(c+5001,(vlSymsp->TOP__sim.__PVT__builder_request),2);
        vcdp->chgBit(c+5009,(vlSymsp->TOP__sim.__PVT__builder_grant));
        vcdp->chgBus(c+5017,(vlSymsp->TOP__sim.__PVT__builder_slave_sel),4);
        vcdp->chgBus(c+5025,(vlSymsp->TOP__sim.__PVT__builder_slave_sel_r),4);
        vcdp->chgBit(c+5033,((((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed28) 
                               & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed27)) 
                              & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_shared_ack)))));
        vcdp->chgBit(c+5041,((0U == vlSymsp->TOP__sim.__PVT__builder_count)));
        vcdp->chgBus(c+5049,(vlSymsp->TOP__sim.__PVT__builder_count),20);
        vcdp->chgBus(c+5057,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r),32);
        vcdp->chgBit(c+5065,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_reset0_re));
        vcdp->chgBus(c+5073,((3U & vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w)),2);
        vcdp->chgBit(c+5081,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_reset0_we));
        vcdp->chgBit(c+5089,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_scratch0_re));
        vcdp->chgBit(c+5097,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_scratch0_we));
        vcdp->chgBit(c+5105,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_bus_errors_re));
        vcdp->chgBit(c+5113,((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                                              >> 9U)))));
        vcdp->chgBus(c+5121,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sram_bus_dat_r),32);
        vcdp->chgBus(c+5129,((0x3fU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))),6);
        vcdp->chgBus(c+5137,(((0x24U >= (IData)(vlSymsp->TOP__sim.__PVT__mem_adr0))
                               ? vlSymsp->TOP__sim.__PVT__mem
                              [vlSymsp->TOP__sim.__PVT__mem_adr0]
                               : 0U)),8);
        vcdp->chgBit(c+5145,((1U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                                              >> 9U)))));
        vcdp->chgBit(c+5153,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sel_r));
        vcdp->chgBus(c+5161,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r),32);
        vcdp->chgBit(c+5169,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_control0_re));
        vcdp->chgBus(c+5177,((0xfU & vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w)),4);
        vcdp->chgBit(c+5185,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_control0_we));
        vcdp->chgBit(c+5193,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_command0_re));
        vcdp->chgBus(c+5201,((0x3fU & vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w)),6);
        vcdp->chgBit(c+5209,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_command0_we));
        vcdp->chgBit(c+5217,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_address0_re));
        vcdp->chgBus(c+5225,((0x1fffU & vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w)),13);
        vcdp->chgBit(c+5233,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_address0_we));
        vcdp->chgBit(c+5241,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_baddress0_re));
        vcdp->chgBit(c+5249,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_baddress0_we));
        vcdp->chgBit(c+5257,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_wrdata0_re));
        vcdp->chgBit(c+5265,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_wrdata0_we));
        vcdp->chgBit(c+5273,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_rddata_re));
        vcdp->chgBit(c+5281,((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                                              >> 9U)))));
        vcdp->chgBus(c+5289,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r),32);
        vcdp->chgBit(c+5297,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_load0_re));
        vcdp->chgBit(c+5305,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_load0_we));
        vcdp->chgBit(c+5313,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_reload0_re));
        vcdp->chgBit(c+5321,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_reload0_we));
        vcdp->chgBit(c+5329,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_en0_re));
        vcdp->chgBit(c+5337,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_en0_we));
        vcdp->chgBit(c+5345,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_update_value0_re));
        vcdp->chgBit(c+5353,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_update_value0_we));
        vcdp->chgBit(c+5361,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_value_re));
        vcdp->chgBit(c+5369,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_status_re));
        vcdp->chgBit(c+5377,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_pending_re));
        vcdp->chgBit(c+5385,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_enable0_re));
        vcdp->chgBit(c+5393,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_enable0_we));
        vcdp->chgBit(c+5401,((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                                              >> 9U)))));
        vcdp->chgBus(c+5409,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r),32);
        vcdp->chgBit(c+5417,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txfull_re));
        vcdp->chgBit(c+5425,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxempty_re));
        vcdp->chgBit(c+5433,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_status_re));
        vcdp->chgBit(c+5441,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_pending_re));
        vcdp->chgBit(c+5449,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_enable0_re));
        vcdp->chgBit(c+5457,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_enable0_we));
        vcdp->chgBit(c+5465,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txempty_re));
        vcdp->chgBit(c+5473,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxfull_re));
        vcdp->chgBit(c+5481,((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                                              >> 9U)))));
        vcdp->chgBus(c+5489,(vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_state),2);
        vcdp->chgBus(c+5497,(vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_next_state),2);
        vcdp->chgBus(c+5505,(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state),3);
        vcdp->chgBus(c+5513,(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_next_state),3);
        vcdp->chgBus(c+5521,(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state),3);
        vcdp->chgBus(c+5529,(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_next_state),3);
        vcdp->chgBus(c+5537,(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state),3);
        vcdp->chgBus(c+5545,(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_next_state),3);
        vcdp->chgBus(c+5553,(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state),3);
        vcdp->chgBus(c+5561,(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_next_state),3);
        vcdp->chgBus(c+5569,(vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state),3);
        vcdp->chgBus(c+5577,(vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_next_state),3);
        vcdp->chgBit(c+5585,((((0U == (3U & (vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_addr 
                                             >> 9U))) 
                               & (~ (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_req_lock) 
                                      | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_req_lock)) 
                                     | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_req_lock)))) 
                              & (IData)(vlSymsp->TOP__sim.__PVT__main_port_cmd_valid))));
        vcdp->chgBit(c+5593,((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed14)) 
                                    & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_req_lock))))));
        vcdp->chgBit(c+5601,((((1U == (3U & (vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_addr 
                                             >> 9U))) 
                               & (~ (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_req_lock) 
                                      | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_req_lock)) 
                                     | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_req_lock)))) 
                              & (IData)(vlSymsp->TOP__sim.__PVT__main_port_cmd_valid))));
        vcdp->chgBit(c+5609,((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed17)) 
                                    & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_req_lock))))));
        vcdp->chgBit(c+5617,((((2U == (3U & (vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_addr 
                                             >> 9U))) 
                               & (~ (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_req_lock) 
                                      | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_req_lock)) 
                                     | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_req_lock)))) 
                              & (IData)(vlSymsp->TOP__sim.__PVT__main_port_cmd_valid))));
        vcdp->chgBit(c+5625,((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed20)) 
                                    & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_req_lock))))));
        vcdp->chgBit(c+5633,((((3U == (3U & (vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_addr 
                                             >> 9U))) 
                               & (~ (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_req_lock) 
                                      | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_req_lock)) 
                                     | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_req_lock)))) 
                              & (IData)(vlSymsp->TOP__sim.__PVT__main_port_cmd_valid))));
        vcdp->chgBit(c+5641,((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed23)) 
                                    & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_req_lock))))));
        vcdp->chgBit(c+5649,(vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_rdata_valid0));
        vcdp->chgBit(c+5657,(vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_rdata_valid1));
        vcdp->chgBit(c+5665,(vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_rdata_valid2));
        vcdp->chgBit(c+5673,(vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_rdata_valid3));
        vcdp->chgBus(c+5681,(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state),2);
        vcdp->chgBus(c+5689,(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_next_state),2);
        vcdp->chgBit(c+5697,(vlSymsp->TOP__sim.__PVT__builder_simsoc_litedramnativeportconverter_state));
        vcdp->chgBit(c+5705,(vlSymsp->TOP__sim.__PVT__builder_simsoc_litedramnativeportconverter_next_state));
        vcdp->chgBus(c+5713,(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_count_litedramnativeportconverter_next_value),2);
        vcdp->chgBit(c+5721,(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_count_litedramnativeportconverter_next_value_ce));
        vcdp->chgBus(c+5729,(vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_state),2);
        vcdp->chgBus(c+5737,(vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_next_state),2);
        vcdp->chgBit(c+5745,(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_aborted_fsm_next_value));
        vcdp->chgBus(c+5753,(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_state),2);
        vcdp->chgBus(c+5761,(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_next_state),2);
        vcdp->chgBus(c+5769,(vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w_next_value0),32);
        vcdp->chgBit(c+5777,(vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w_next_value_ce0));
        vcdp->chgBus(c+5785,(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr_next_value1),14);
        vcdp->chgBit(c+5793,(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr_next_value_ce1));
        vcdp->chgBit(c+5801,(vlSymsp->TOP__sim.__PVT__builder_simsoc_we_next_value2));
        vcdp->chgBit(c+5809,(vlSymsp->TOP__sim.__PVT__builder_simsoc_we_next_value_ce2));
        vcdp->chgBus(c+5817,((0x7fffffU & (((IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel0_row) 
                                            << 9U) 
                                           | (IData)(vlSymsp->TOP__sim.__PVT__main_bank_write_col0)))),23);
        vcdp->chgBus(c+5825,((0x7fffffU & (((IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel0_row) 
                                            << 9U) 
                                           | (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel0_read_col)))),23);
        vcdp->chgBus(c+5833,((0x7fffffU & (((IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel1_row) 
                                            << 9U) 
                                           | (IData)(vlSymsp->TOP__sim.__PVT__main_bank_write_col1)))),23);
        vcdp->chgBus(c+5841,((0x7fffffU & (((IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel1_row) 
                                            << 9U) 
                                           | (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel1_read_col)))),23);
        vcdp->chgBus(c+5849,((0x7fffffU & (((IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel2_row) 
                                            << 9U) 
                                           | (IData)(vlSymsp->TOP__sim.__PVT__main_bank_write_col2)))),23);
        vcdp->chgBus(c+5857,((0x7fffffU & (((IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel2_row) 
                                            << 9U) 
                                           | (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel2_read_col)))),23);
        vcdp->chgBus(c+5865,((0x7fffffU & (((IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel3_row) 
                                            << 9U) 
                                           | (IData)(vlSymsp->TOP__sim.__PVT__main_bank_write_col3)))),23);
        vcdp->chgBus(c+5873,((0x7fffffU & (((IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel3_row) 
                                            << 9U) 
                                           | (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel3_read_col)))),23);
    }
}

void Vsim::traceChgThis__11(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+5881,(vlSymsp->TOP__sim.__PVT__builder_t_array_muxed0));
        vcdp->chgBit(c+5889,(vlSymsp->TOP__sim.__PVT__builder_t_array_muxed1));
        vcdp->chgBit(c+5897,(vlSymsp->TOP__sim.__PVT__builder_t_array_muxed2));
        vcdp->chgBit(c+5905,(vlSymsp->TOP__sim.__PVT__builder_t_array_muxed3));
        vcdp->chgBit(c+5913,(vlSymsp->TOP__sim.__PVT__builder_t_array_muxed4));
        vcdp->chgBit(c+5921,(vlSymsp->TOP__sim.__PVT__builder_t_array_muxed5));
        vcdp->chgBus(c+5929,(vlSymsp->TOP__sim.__PVT__builder_array_muxed0),2);
        vcdp->chgBus(c+5937,(vlSymsp->TOP__sim.__PVT__builder_array_muxed1),13);
        vcdp->chgBit(c+5945,(vlSymsp->TOP__sim.__PVT__builder_array_muxed2));
        vcdp->chgBit(c+5953,(vlSymsp->TOP__sim.__PVT__builder_array_muxed3));
        vcdp->chgBit(c+5961,(vlSymsp->TOP__sim.__PVT__builder_array_muxed4));
        vcdp->chgBit(c+5969,(vlSymsp->TOP__sim.__PVT__builder_array_muxed5));
        vcdp->chgBit(c+5977,(vlSymsp->TOP__sim.__PVT__builder_array_muxed6));
        vcdp->chgBit(c+5985,(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset));
        vcdp->chgBit(c+5993,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_flush));
        vcdp->chgBit(c+6001,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid));
        vcdp->chgBit(c+6009,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready)))));
        vcdp->chgBit(c+6017,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid));
        vcdp->chgBit(c+6025,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid));
        vcdp->chgBit(c+6033,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_isValid));
        vcdp->chgBus(c+6041,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub),32);
        vcdp->chgBit(c+6049,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid));
        vcdp->chgBit(c+6057,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid));
        vcdp->chgBit(c+6065,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt));
        vcdp->chgBit(c+6073,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid));
        vcdp->chgBit(c+6081,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_haltIt));
        vcdp->chgBit(c+6089,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt));
        vcdp->chgBus(c+6097,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data),32);
        vcdp->chgBit(c+6105,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_mmuException));
        vcdp->chgBit(c+6113,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess));
        vcdp->chgBit(c+6121,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_accessError));
        vcdp->chgBit(c+6129,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready));
        vcdp->chgBit(c+6137,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_redo));
        vcdp->chgBit(c+6145,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid));
        vcdp->chgBit(c+6153,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_wr));
        vcdp->chgBus(c+6161,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address),32);
        vcdp->chgBus(c+6169,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_size),3);
        vcdp->chgQuad(c+6177,((VL_ULL(0x3ffffffff) 
                               & VL_MULS_QQQ(34,34,34, 
                                             (VL_ULL(0x3ffffffff) 
                                              & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh)), 
                                             (VL_ULL(0x3ffffffff) 
                                              & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh))))),34);
        vcdp->chgQuad(c+6193,((VL_ULL(0x3ffffffff) 
                               & VL_MULS_QQQ(34,34,34, 
                                             (VL_ULL(0x3ffffffff) 
                                              & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh)), 
                                             (VL_ULL(0x3ffffffff) 
                                              & VL_EXTENDS_QI(34,17, 
                                                              (0xffffU 
                                                               & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)))))),34);
        vcdp->chgQuad(c+6209,((VL_ULL(0x3ffffffff) 
                               & VL_MULS_QQQ(34,34,34, 
                                             (VL_ULL(0x3ffffffff) 
                                              & VL_EXTENDS_QI(34,17, 
                                                              (0xffffU 
                                                               & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1))), 
                                             (VL_ULL(0x3ffffffff) 
                                              & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh))))),34);
        vcdp->chgBus(c+6225,((0xfffffffeU & (((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                               ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                               : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC) 
                                             + vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2))),32);
        vcdp->chgBit(c+6233,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2) 
                               != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1)) 
                              | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1) 
                                 & ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                     ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                         >> 0x15U) 
                                        ^ (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                           >> 1U)) : 
                                    ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                      ? (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                         >> 0x15U) : 
                                     (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                      >> 8U)))))));
        vcdp->chgBus(c+6241,((IData)((VL_ULL(0x1ffffffff) 
                                      & VL_SHIFTRS_QQI(33,33,5, 
                                                       (((QData)((IData)(
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL)) 
                                                                          & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed 
                                                                             >> 0x1fU)))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed))), 
                                                       (0x1fU 
                                                        & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5))))),32);
        vcdp->chgBus(c+6249,(((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                               ? ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                   ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                      & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                                   : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                       ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                          | vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                                       : (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                          ^ vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)))
                               : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                   ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_less)
                                   : vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub))),32);
        vcdp->chgBit(c+6257,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch));
        vcdp->chgBit(c+6265,((1U & ((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0x14U) & (~ 
                                                  (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                   >> 3U))))));
        vcdp->chgBit(c+6273,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                    >> 0x1fU))));
        vcdp->chgBit(c+6281,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                    >> 0x1eU))));
        vcdp->chgBit(c+6289,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                    >> 0x1dU))));
        vcdp->chgBit(c+6297,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                    >> 0x1cU))));
        vcdp->chgBus(c+6305,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                    >> 0x1aU))),2);
        vcdp->chgBit(c+6313,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                    >> 0x19U))));
        vcdp->chgBus(c+6321,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                    >> 0x15U))),2);
        vcdp->chgBus(c+6329,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                    >> 0x12U))),2);
        vcdp->chgBit(c+6337,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                    >> 0x11U))));
        vcdp->chgBit(c+6345,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                    >> 0x10U))));
        vcdp->chgBit(c+6353,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                    >> 0xdU))));
        vcdp->chgBit(c+6361,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                    >> 0xcU))));
        vcdp->chgBit(c+6369,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                    >> 0xbU))));
        vcdp->chgBus(c+6377,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                    >> 8U))),2);
        vcdp->chgBus(c+6385,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                    >> 6U))),2);
        vcdp->chgBus(c+6393,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                    >> 1U))),2);
        vcdp->chgBit(c+6401,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1));
        vcdp->chgBit(c+6409,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                    >> 0xfU))));
        vcdp->chgBit(c+6417,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                    >> 5U))));
        vcdp->chgBus(c+6425,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS2),32);
        vcdp->chgBus(c+6433,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS1),32);
        vcdp->chgBit(c+6441,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                    >> 3U))));
        vcdp->chgBit(c+6449,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                    >> 0x14U))));
        vcdp->chgBit(c+6457,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_less));
        vcdp->chgBus(c+6465,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5),32);
        vcdp->chgBus(c+6473,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1),32);
        vcdp->chgBus(c+6481,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED),32);
        vcdp->chgBit(c+6489,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_REGFILE_WRITE_VALID));
        vcdp->chgBit(c+6497,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                    >> 4U))));
        vcdp->chgBit(c+6505,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)));
        vcdp->chgBit(c+6513,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_4));
        vcdp->chgBit(c+6521,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_3));
        vcdp->chgBit(c+6529,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_2));
        vcdp->chgBit(c+6537,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_1));
        vcdp->chgBus(c+6545,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                    >> 0x17U))),2);
        vcdp->chgBit(c+6553,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_haltByOther));
        vcdp->chgBit(c+6561,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt));
        vcdp->chgBit(c+6569,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext));
        vcdp->chgBit(c+6577,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid));
        vcdp->chgBit(c+6585,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers));
        vcdp->chgBit(c+6593,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isFlushed));
        vcdp->chgBit(c+6601,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers)) 
                                    & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt))))));
        vcdp->chgBit(c+6609,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid) 
                               & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers))) 
                              & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt)))));
        vcdp->chgBit(c+6617,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltItself));
        vcdp->chgBit(c+6625,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltByOther));
        vcdp->chgBit(c+6633,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt));
        vcdp->chgBit(c+6641,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext));
        vcdp->chgBit(c+6649,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck));
        vcdp->chgBit(c+6657,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltByOther) 
                              | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck) 
                                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))));
        vcdp->chgBit(c+6665,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isFlushed));
        vcdp->chgBit(c+6673,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                                    & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt))))));
        vcdp->chgBit(c+6681,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                               & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck))) 
                              & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt)))));
        vcdp->chgBit(c+6689,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_haltItself));
        vcdp->chgBit(c+6697,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt));
        vcdp->chgBit(c+6705,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext));
        vcdp->chgBit(c+6713,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck));
        vcdp->chgBit(c+6721,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself));
        vcdp->chgBit(c+6729,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isFlushed));
        vcdp->chgBit(c+6737,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)) 
                                    & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt))))));
        vcdp->chgBit(c+6745,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                               & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck))) 
                              & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt)))));
        vcdp->chgBit(c+6753,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt));
        vcdp->chgBit(c+6761,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushIt));
        vcdp->chgBit(c+6769,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext));
        vcdp->chgBit(c+6777,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                    & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt))))));
        vcdp->chgBit(c+6785,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isFiring));
        vcdp->chgBit(c+6793,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetcherHalt));
        vcdp->chgBit(c+6801,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_incomingInstruction));
        vcdp->chgBit(c+6809,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_valid));
        vcdp->chgBus(c+6817,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_payload),32);
        vcdp->chgBit(c+6825,(vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_jumpInterface_valid));
        vcdp->chgBit(c+6833,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid));
        vcdp->chgBus(c+6841,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code),4);
        vcdp->chgBit(c+6849,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) 
                              | (0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
                                         << 3U) | (
                                                   ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext) 
                                                    << 2U) 
                                                   | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext) 
                                                       << 1U) 
                                                      | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext))))))));
        vcdp->chgBit(c+6857,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_2) 
                              & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr) 
                                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_4)))));
        vcdp->chgBit(c+6865,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)) 
                                    | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt)))));
        vcdp->chgBit(c+6873,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid));
        vcdp->chgBit(c+6881,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid));
        vcdp->chgBus(c+6889,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_payload_code),4);
        vcdp->chgBit(c+6897,(vlSymsp->TOP__sim__VexRiscv.__PVT__decodeExceptionPort_valid));
        vcdp->chgBit(c+6905,(vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid));
        vcdp->chgBus(c+6913,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_csrMapping_readDataInit),32);
        vcdp->chgBus(c+6921,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal),32);
        vcdp->chgBit(c+6929,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid));
        vcdp->chgBus(c+6937,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload),32);
        vcdp->chgBit(c+6945,((0U != vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_1)));
    }
}

void Vsim::traceChgThis__13(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+6953,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_valid));
        vcdp->chgBus(c+6961,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_payload_code),4);
        vcdp->chgBit(c+6969,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
                                      << 3U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext) 
                                                 << 2U) 
                                                | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext)))))));
        vcdp->chgBit(c+6977,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_jump_pcLoad_valid));
        vcdp->chgBus(c+6985,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                               ? vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_PC
                               : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                                   ? vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload
                                   : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                                       ? vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC
                                       : vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_payload)))),32);
        vcdp->chgBit(c+6993,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready));
        vcdp->chgBus(c+7001,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc),32);
        vcdp->chgBit(c+7009,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction));
        vcdp->chgBit(c+7017,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready))));
        vcdp->chgBit(c+7025,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction) 
                              | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correctionReg))));
        vcdp->chgBit(c+7033,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate));
        vcdp->chgBit(c+7041,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction) 
                              | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate))));
        vcdp->chgBit(c+7049,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid)) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready))));
        vcdp->chgBit(c+7057,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_redoFetch));
        vcdp->chgBit(c+7065,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_flushed));
        vcdp->chgBit(c+7073,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted) 
                              & (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready) 
                                  | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction)) 
                                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate)))));
        vcdp->chgBit(c+7081,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid) 
                              & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt)))));
        vcdp->chgBit(c+7089,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready));
        vcdp->chgBit(c+7097,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt));
        vcdp->chgBit(c+7105,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers)))));
        vcdp->chgBit(c+7113,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt));
        vcdp->chgBit(c+7121,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_flush));
        vcdp->chgBit(c+7129,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError));
        vcdp->chgBit(c+7137,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))));
        vcdp->chgBit(c+7145,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))));
        vcdp->chgBit(c+7153,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))));
        vcdp->chgBit(c+7161,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
                              & (IData)(vlSymsp->TOP__sim.__PVT__main_ibus_ack))));
        vcdp->chgBit(c+7169,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch));
        vcdp->chgBit(c+7177,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l239));
        vcdp->chgBit(c+7185,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l244));
        vcdp->chgBit(c+7193,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l250));
        vcdp->chgBit(c+7201,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l256));
        vcdp->chgBit(c+7209,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid) 
                              | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))));
        vcdp->chgBit(c+7217,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready));
        vcdp->chgBit(c+7225,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                               ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_wr)
                               : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_wr))));
        vcdp->chgBus(c+7233,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                               ? vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_address
                               : vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address)),32);
        vcdp->chgBus(c+7241,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                               ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_size)
                               : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_size))),3);
        vcdp->chgBit(c+7249,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid) 
                              & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready)))));
        vcdp->chgBit(c+7257,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid) 
                               & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready))) 
                              | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_haltIt))));
        vcdp->chgBit(c+7265,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_DBusCachedPlugin_l446));
        vcdp->chgBit(c+7273,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt))));
        vcdp->chgBus(c+7281,((0xffU & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data)),8);
        vcdp->chgBus(c+7289,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                       >> 8U))),8);
        vcdp->chgBus(c+7297,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                       >> 0x10U))),8);
        vcdp->chgBus(c+7305,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                       >> 0x18U))),8);
        vcdp->chgBus(c+7313,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted),32);
        vcdp->chgBus(c+7321,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                            >> 0xcU)))
                               ? vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1
                               : ((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                >> 0xcU)))
                                   ? vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3
                                   : vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted))),32);
        vcdp->chgBus(c+7329,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                       >> 0xfU))),5);
        vcdp->chgBus(c+7337,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                       >> 0x14U))),5);
        vcdp->chgBus(c+7345,(((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                               ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                  & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                               : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                   ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                      | vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                                   : (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                      ^ vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)))),32);
        vcdp->chgBus(c+7353,((0x1fU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)),5);
        vcdp->chgBus(c+7361,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed),32);
        vcdp->chgBit(c+7369,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard));
        vcdp->chgBit(c+7377,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard));
        vcdp->chgBit(c+7385,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isFiring))));
        vcdp->chgBus(c+7393,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_2),32);
        vcdp->chgBit(c+7401,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45));
        vcdp->chgBit(c+7409,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_1));
        vcdp->chgBit(c+7417,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_1));
        vcdp->chgBit(c+7425,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_1));
        vcdp->chgBit(c+7433,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l57_1));
        vcdp->chgBit(c+7441,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_2));
        vcdp->chgBit(c+7449,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_2));
        vcdp->chgBit(c+7457,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_2));
        vcdp->chgBit(c+7465,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l57_2));
        vcdp->chgBit(c+7473,((1U & (~ (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                       >> 5U)))));
        vcdp->chgBit(c+7481,((1U & (~ (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                       >> 0xfU)))));
        vcdp->chgBit(c+7489,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid) 
                              & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard) 
                                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard)))));
        vcdp->chgBit(c+7497,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_eq));
        vcdp->chgBit(c+7505,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1) 
                              & ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                  ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                      >> 0x15U) ^ (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                                   >> 1U))
                                  : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                      ? (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                         >> 0x15U) : 
                                     (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                      >> 8U))))));
        vcdp->chgBus(c+7513,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2),32);
        vcdp->chgBus(c+7521,((((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC) 
                              + vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2)),32);
        vcdp->chgBit(c+7529,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode));
        vcdp->chgBit(c+7537,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute));
        vcdp->chgBit(c+7545,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory));
        vcdp->chgBit(c+7553,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack));
        vcdp->chgBit(c+7561,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack) 
                                      << 3U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory) 
                                                 << 2U) 
                                                | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode)))))));
        vcdp->chgBit(c+7569,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965));
        vcdp->chgBit(c+7577,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965_1));
        vcdp->chgBit(c+7585,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965_2));
        vcdp->chgBit(c+7593,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_active));
        vcdp->chgBit(c+7601,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l998));
        vcdp->chgBit(c+7609,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_done));
        vcdp->chgBus(c+7617,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_targetPrivilege),2);
        vcdp->chgBus(c+7625,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_trapCause),4);
        vcdp->chgBus(c+7633,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_xtvec_mode),2);
        vcdp->chgBus(c+7641,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_xtvec_base),30);
        vcdp->chgBit(c+7649,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1032));
        vcdp->chgBit(c+7657,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1077));
        vcdp->chgBit(c+7665,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess));
        vcdp->chgBit(c+7673,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1157));
        vcdp->chgBit(c+7681,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeInstruction));
        vcdp->chgBit(c+7689,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_readInstruction));
        vcdp->chgBit(c+7697,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeEnable));
        vcdp->chgBit(c+7705,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_readInstruction) 
                              & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))));
        vcdp->chgBus(c+7713,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh),17);
        vcdp->chgBus(c+7721,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh),17);
        vcdp->chgBit(c+7729,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement));
        vcdp->chgBit(c+7737,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willClear));
        vcdp->chgBus(c+7745,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_valueNext),6);
        vcdp->chgBit(c+7753,(((0x21U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value)) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement))));
        vcdp->chgBit(c+7761,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_MulDivIterativePlugin_l128));
        vcdp->chgQuad(c+7769,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderShifted),33);
        vcdp->chgQuad(c+7785,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator),33);
        vcdp->chgBus(c+7801,(((1U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                             >> 0x20U)))
                               ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderShifted)
                               : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator))),32);
        vcdp->chgBus(c+7809,(((0xfffffffeU & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1) 
                                              << 1U)) 
                              | (1U & (~ (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                                  >> 0x20U)))))),32);
        vcdp->chgBit(c+7817,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                    & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack))))));
        vcdp->chgBit(c+7825,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                                    | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt)))));
        vcdp->chgBit(c+7833,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                    | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt)))));
        vcdp->chgBus(c+7841,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                                    >> 0xbU))),2);
        vcdp->chgBit(c+7849,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_InstructionCache_l239));
        vcdp->chgQuad(c+7857,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                             >> 0x1aU)))
                                ? VL_ULL(0x4e4f4e4520)
                                : ((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                 >> 0x1aU)))
                                    ? VL_ULL(0x5852455420)
                                    : ((2U == (3U & 
                                               (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                >> 0x1aU)))
                                        ? VL_ULL(0x4543414c4c)
                                        : VL_ULL(0x3f3f3f3f3f))))),40);
        vcdp->chgArray(c+7873,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SHIFT_CTRL_string),72);
        vcdp->chgQuad(c+7897,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                             >> 0x12U)))
                                ? VL_ULL(0x584f525f31)
                                : ((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                 >> 0x12U)))
                                    ? VL_ULL(0x4f525f3120)
                                    : ((2U == (3U & 
                                               (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                >> 0x12U)))
                                        ? VL_ULL(0x414e445f31)
                                        : VL_ULL(0x3f3f3f3f3f))))),40);
        vcdp->chgBus(c+7913,(((0x200U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                               ? ((0x100U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                   ? 0x504320U : 0x494d53U)
                               : ((0x100U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                   ? 0x494d49U : 0x525320U))),24);
    }
}

void Vsim::traceChgThis__15(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+7921,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                             >> 6U)))
                                ? VL_ULL(0x4144445f53554220)
                                : ((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                 >> 6U)))
                                    ? VL_ULL(0x534c545f534c5455)
                                    : ((2U == (3U & 
                                               (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                >> 6U)))
                                        ? VL_ULL(0x4249545749534520)
                                        : VL_ULL(0x3f3f3f3f3f3f3f3f))))),64);
        vcdp->chgArray(c+7937,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC1_CTRL_string),96);
        vcdp->chgArray(c+7961,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_SHIFT_CTRL_string),72);
        vcdp->chgArray(c+7985,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SHIFT_CTRL_string),72);
        vcdp->chgArray(c+8009,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC1_CTRL_string),96);
        vcdp->chgBus(c+8033,(((0x1000000U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                               ? ((0x800000U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                   ? 0x4a414c52U : 0x4a414c20U)
                               : ((0x800000U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                   ? 0x42202020U : 0x494e4320U))),32);
        vcdp->chgArray(c+8041,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL_string),96);
        vcdp->chgArray(c+8065,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL_string),72);
        vcdp->chgArray(c+8089,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL_string),72);
        vcdp->chgBit(c+8113,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire));
        vcdp->chgBit(c+8121,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351));
        vcdp->chgBit(c+8129,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement));
        vcdp->chgBit(c+8137,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) 
                                    | (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                          >> 7U))))));
        vcdp->chgBit(c+8145,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_valid));
        vcdp->chgBus(c+8153,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_payload),7);
        vcdp->chgBit(c+8161,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid));
        vcdp->chgBit(c+8169,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way));
        vcdp->chgBus(c+8177,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address),7);
        vcdp->chgBit(c+8185,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid));
        vcdp->chgBit(c+8193,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error));
        vcdp->chgBus(c+8201,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address),20);
        vcdp->chgBit(c+8209,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_valid));
        vcdp->chgBus(c+8217,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_payload),10);
        vcdp->chgBit(c+8225,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid));
        vcdp->chgBit(c+8233,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way));
        vcdp->chgBus(c+8241,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address),10);
        vcdp->chgBus(c+8249,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_data),32);
        vcdp->chgBus(c+8257,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask),4);
        vcdp->chgBit(c+8265,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way))));
        vcdp->chgBit(c+8273,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way))));
        vcdp->chgBit(c+8281,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l664));
        vcdp->chgBit(c+8289,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid) 
                              & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)))));
        vcdp->chgBus(c+8297,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask),4);
        vcdp->chgBit(c+8305,(((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                                & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way)) 
                               & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (0x3ffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub 
                                                >> 2U)))) 
                              & (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask) 
                                        & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask))))));
        vcdp->chgBit(c+8313,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen) 
                              | ((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                                   & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way)) 
                                  & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                                     == (0x3ffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                                   >> 2U)))) 
                                 & (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask) 
                                           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask)))))));
        vcdp->chgBit(c+8321,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRspFreeze));
        vcdp->chgBit(c+8329,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l824));
        vcdp->chgBit(c+8337,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits));
        vcdp->chgBit(c+8345,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits));
        vcdp->chgBit(c+8353,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid));
        vcdp->chgBit(c+8361,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_cpuWriteToCache));
        vcdp->chgBit(c+8369,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits))));
        vcdp->chgBit(c+8377,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loadStoreFault));
        vcdp->chgBit(c+8385,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1004));
        vcdp->chgBit(c+8393,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                              & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataColisions) 
                                 & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits)))));
        vcdp->chgBit(c+8401,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1066));
        vcdp->chgBit(c+8409,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling))));
        vcdp->chgBit(c+8417,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement));
        vcdp->chgBus(c+8425,((7U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value) 
                                    + (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement)))),3);
        vcdp->chgBit(c+8433,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willOverflow));
        vcdp->chgBit(c+8441,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1090));
        vcdp->chgBit(c+8449,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid) 
                              | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid))));
    }
}

void Vsim::traceChgThis__16(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+8457,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_syncfifo_re));
        vcdp->chgBit(c+8465,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_do_read));
    }
}

void Vsim::traceChgThis__17(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+8473,(((0x3ffffff8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                              >> 2U)) 
                              | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))),30);
        vcdp->chgBus(c+8481,(((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))
                               ? 7U : 2U)),3);
        vcdp->chgBus(c+8489,((0x3fffffffU & (((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                               ? ((0xffffffe0U 
                                                   & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address) 
                                                  | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready) 
                                                     << 2U))
                                               : (0xfffffffcU 
                                                  & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address)) 
                                             >> 2U))),30);
        vcdp->chgBus(c+8497,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data),32);
        vcdp->chgBus(c+8505,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr)
                               ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_mask)
                               : 0xfU)),4);
        vcdp->chgBit(c+8513,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid));
        vcdp->chgBit(c+8521,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr));
        vcdp->chgBus(c+8529,(vlSymsp->TOP__sim.__PVT__rom_dat0),32);
        vcdp->chgBus(c+8537,(vlSymsp->TOP__sim.__PVT__storage_dat1),10);
        vcdp->chgBus(c+8545,(vlSymsp->TOP__sim.__PVT__storage_dat0),10);
        vcdp->chgBus(c+8553,(vlSymsp->TOP__sim.__PVT__storage_1_dat1),10);
        vcdp->chgBus(c+8561,(vlSymsp->TOP__sim.__PVT__storage_1_dat0),10);
        vcdp->chgBus(c+8569,(vlSymsp->TOP__sim.__PVT__storage_2_dat0),25);
        vcdp->chgBus(c+8577,(vlSymsp->TOP__sim.__PVT__storage_3_dat0),25);
        vcdp->chgBus(c+8585,(vlSymsp->TOP__sim.__PVT__storage_4_dat0),25);
        vcdp->chgBus(c+8593,(vlSymsp->TOP__sim.__PVT__storage_5_dat0),25);
        vcdp->chgBus(c+8601,(vlSymsp->TOP__sim.__PVT__sram_adr0),11);
        vcdp->chgBus(c+8609,(vlSymsp->TOP__sim.__PVT__mem_adr0),6);
        vcdp->chgBus(c+8617,(vlSymsp->TOP__sim.__PVT__storage[0]),10);
        vcdp->chgBus(c+8618,(vlSymsp->TOP__sim.__PVT__storage[1]),10);
        vcdp->chgBus(c+8619,(vlSymsp->TOP__sim.__PVT__storage[2]),10);
        vcdp->chgBus(c+8620,(vlSymsp->TOP__sim.__PVT__storage[3]),10);
        vcdp->chgBus(c+8621,(vlSymsp->TOP__sim.__PVT__storage[4]),10);
        vcdp->chgBus(c+8622,(vlSymsp->TOP__sim.__PVT__storage[5]),10);
        vcdp->chgBus(c+8623,(vlSymsp->TOP__sim.__PVT__storage[6]),10);
        vcdp->chgBus(c+8624,(vlSymsp->TOP__sim.__PVT__storage[7]),10);
        vcdp->chgBus(c+8625,(vlSymsp->TOP__sim.__PVT__storage[8]),10);
        vcdp->chgBus(c+8626,(vlSymsp->TOP__sim.__PVT__storage[9]),10);
        vcdp->chgBus(c+8627,(vlSymsp->TOP__sim.__PVT__storage[10]),10);
        vcdp->chgBus(c+8628,(vlSymsp->TOP__sim.__PVT__storage[11]),10);
        vcdp->chgBus(c+8629,(vlSymsp->TOP__sim.__PVT__storage[12]),10);
        vcdp->chgBus(c+8630,(vlSymsp->TOP__sim.__PVT__storage[13]),10);
        vcdp->chgBus(c+8631,(vlSymsp->TOP__sim.__PVT__storage[14]),10);
        vcdp->chgBus(c+8632,(vlSymsp->TOP__sim.__PVT__storage[15]),10);
        vcdp->chgBus(c+8745,(vlSymsp->TOP__sim.__PVT__storage_1[0]),10);
        vcdp->chgBus(c+8746,(vlSymsp->TOP__sim.__PVT__storage_1[1]),10);
        vcdp->chgBus(c+8747,(vlSymsp->TOP__sim.__PVT__storage_1[2]),10);
        vcdp->chgBus(c+8748,(vlSymsp->TOP__sim.__PVT__storage_1[3]),10);
        vcdp->chgBus(c+8749,(vlSymsp->TOP__sim.__PVT__storage_1[4]),10);
        vcdp->chgBus(c+8750,(vlSymsp->TOP__sim.__PVT__storage_1[5]),10);
        vcdp->chgBus(c+8751,(vlSymsp->TOP__sim.__PVT__storage_1[6]),10);
        vcdp->chgBus(c+8752,(vlSymsp->TOP__sim.__PVT__storage_1[7]),10);
        vcdp->chgBus(c+8753,(vlSymsp->TOP__sim.__PVT__storage_1[8]),10);
        vcdp->chgBus(c+8754,(vlSymsp->TOP__sim.__PVT__storage_1[9]),10);
        vcdp->chgBus(c+8755,(vlSymsp->TOP__sim.__PVT__storage_1[10]),10);
        vcdp->chgBus(c+8756,(vlSymsp->TOP__sim.__PVT__storage_1[11]),10);
        vcdp->chgBus(c+8757,(vlSymsp->TOP__sim.__PVT__storage_1[12]),10);
        vcdp->chgBus(c+8758,(vlSymsp->TOP__sim.__PVT__storage_1[13]),10);
        vcdp->chgBus(c+8759,(vlSymsp->TOP__sim.__PVT__storage_1[14]),10);
        vcdp->chgBus(c+8760,(vlSymsp->TOP__sim.__PVT__storage_1[15]),10);
        vcdp->chgBus(c+8873,(vlSymsp->TOP__sim.__PVT__mem_1_adr0),22);
        vcdp->chgBus(c+8881,(vlSymsp->TOP__sim.__PVT__mem_2_adr0),22);
        vcdp->chgBus(c+8889,(vlSymsp->TOP__sim.__PVT__mem_3_adr0),22);
        vcdp->chgBus(c+8897,(vlSymsp->TOP__sim.__PVT__mem_4_adr0),22);
        vcdp->chgBus(c+8905,(vlSymsp->TOP__sim.__PVT__storage_2[0]),25);
        vcdp->chgBus(c+8906,(vlSymsp->TOP__sim.__PVT__storage_2[1]),25);
        vcdp->chgBus(c+8907,(vlSymsp->TOP__sim.__PVT__storage_2[2]),25);
        vcdp->chgBus(c+8908,(vlSymsp->TOP__sim.__PVT__storage_2[3]),25);
        vcdp->chgBus(c+8909,(vlSymsp->TOP__sim.__PVT__storage_2[4]),25);
        vcdp->chgBus(c+8910,(vlSymsp->TOP__sim.__PVT__storage_2[5]),25);
        vcdp->chgBus(c+8911,(vlSymsp->TOP__sim.__PVT__storage_2[6]),25);
        vcdp->chgBus(c+8912,(vlSymsp->TOP__sim.__PVT__storage_2[7]),25);
        vcdp->chgBus(c+8969,(vlSymsp->TOP__sim.__PVT__storage_3[0]),25);
        vcdp->chgBus(c+8970,(vlSymsp->TOP__sim.__PVT__storage_3[1]),25);
        vcdp->chgBus(c+8971,(vlSymsp->TOP__sim.__PVT__storage_3[2]),25);
        vcdp->chgBus(c+8972,(vlSymsp->TOP__sim.__PVT__storage_3[3]),25);
        vcdp->chgBus(c+8973,(vlSymsp->TOP__sim.__PVT__storage_3[4]),25);
        vcdp->chgBus(c+8974,(vlSymsp->TOP__sim.__PVT__storage_3[5]),25);
        vcdp->chgBus(c+8975,(vlSymsp->TOP__sim.__PVT__storage_3[6]),25);
        vcdp->chgBus(c+8976,(vlSymsp->TOP__sim.__PVT__storage_3[7]),25);
        vcdp->chgBus(c+9033,(vlSymsp->TOP__sim.__PVT__storage_4[0]),25);
        vcdp->chgBus(c+9034,(vlSymsp->TOP__sim.__PVT__storage_4[1]),25);
        vcdp->chgBus(c+9035,(vlSymsp->TOP__sim.__PVT__storage_4[2]),25);
        vcdp->chgBus(c+9036,(vlSymsp->TOP__sim.__PVT__storage_4[3]),25);
        vcdp->chgBus(c+9037,(vlSymsp->TOP__sim.__PVT__storage_4[4]),25);
        vcdp->chgBus(c+9038,(vlSymsp->TOP__sim.__PVT__storage_4[5]),25);
        vcdp->chgBus(c+9039,(vlSymsp->TOP__sim.__PVT__storage_4[6]),25);
        vcdp->chgBus(c+9040,(vlSymsp->TOP__sim.__PVT__storage_4[7]),25);
        vcdp->chgBus(c+9097,(vlSymsp->TOP__sim.__PVT__storage_5[0]),25);
        vcdp->chgBus(c+9098,(vlSymsp->TOP__sim.__PVT__storage_5[1]),25);
        vcdp->chgBus(c+9099,(vlSymsp->TOP__sim.__PVT__storage_5[2]),25);
        vcdp->chgBus(c+9100,(vlSymsp->TOP__sim.__PVT__storage_5[3]),25);
        vcdp->chgBus(c+9101,(vlSymsp->TOP__sim.__PVT__storage_5[4]),25);
        vcdp->chgBus(c+9102,(vlSymsp->TOP__sim.__PVT__storage_5[5]),25);
        vcdp->chgBus(c+9103,(vlSymsp->TOP__sim.__PVT__storage_5[6]),25);
        vcdp->chgBus(c+9104,(vlSymsp->TOP__sim.__PVT__storage_5[7]),25);
        vcdp->chgBus(c+9161,(vlSymsp->TOP__sim.__PVT__tag_mem_adr0),9);
        vcdp->chgBus(c+9169,(vlSymsp->TOP__sim.__PVT__data_mem_grain0_adr0),9);
        vcdp->chgBus(c+9177,(vlSymsp->TOP__sim.__PVT__data_mem_grain1_adr0),9);
        vcdp->chgBus(c+9185,(vlSymsp->TOP__sim.__PVT__data_mem_grain2_adr0),9);
        vcdp->chgBus(c+9193,(vlSymsp->TOP__sim.__PVT__data_mem_grain3_adr0),9);
        vcdp->chgBus(c+9201,(vlSymsp->TOP__sim.__PVT__data_mem_grain4_adr0),9);
        vcdp->chgBus(c+9209,(vlSymsp->TOP__sim.__PVT__data_mem_grain5_adr0),9);
        vcdp->chgBus(c+9217,(vlSymsp->TOP__sim.__PVT__data_mem_grain6_adr0),9);
        vcdp->chgBus(c+9225,(vlSymsp->TOP__sim.__PVT__data_mem_grain7_adr0),9);
        vcdp->chgBus(c+9233,(vlSymsp->TOP__sim.__PVT__data_mem_grain8_adr0),9);
        vcdp->chgBus(c+9241,(vlSymsp->TOP__sim.__PVT__data_mem_grain9_adr0),9);
        vcdp->chgBus(c+9249,(vlSymsp->TOP__sim.__PVT__data_mem_grain10_adr0),9);
        vcdp->chgBus(c+9257,(vlSymsp->TOP__sim.__PVT__data_mem_grain11_adr0),9);
        vcdp->chgBus(c+9265,(vlSymsp->TOP__sim.__PVT__data_mem_grain12_adr0),9);
        vcdp->chgBus(c+9273,(vlSymsp->TOP__sim.__PVT__data_mem_grain13_adr0),9);
        vcdp->chgBus(c+9281,(vlSymsp->TOP__sim.__PVT__data_mem_grain14_adr0),9);
        vcdp->chgBus(c+9289,(vlSymsp->TOP__sim.__PVT__data_mem_grain15_adr0),9);
        vcdp->chgBit(c+9297,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2) 
                              & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit)))));
        vcdp->chgBit(c+9305,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE))));
        vcdp->chgBus(c+9313,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA),32);
        vcdp->chgBit(c+9321,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                    >> 0x1fU))));
        vcdp->chgBus(c+9329,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF),32);
        vcdp->chgBus(c+9337,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA),32);
        vcdp->chgBit(c+9345,((0U != (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                              >> 0xfU)))));
        vcdp->chgBus(c+9353,((0x7fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                       >> 5U))),7);
        vcdp->chgBit(c+9361,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)))));
        vcdp->chgBus(c+9369,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_banks_0_port1),32);
        vcdp->chgBit(c+9377,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error) 
                                    | ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging)) 
                                       & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception) 
                                          | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute))))))));
        vcdp->chgBit(c+9385,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling));
        vcdp->chgBit(c+9393,((((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling)) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging)) 
                              & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception) 
                                 | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute))))));
        vcdp->chgBus(c+9401,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen),32);
        vcdp->chgBit(c+9409,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid)))));
        vcdp->chgBus(c+9417,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress),32);
        vcdp->chgBus(c+9425,((0xffffffe0U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address)),32);
        vcdp->chgBit(c+9433,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid));
        vcdp->chgBit(c+9441,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_wr));
        vcdp->chgBit(c+9449,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr));
        vcdp->chgBit(c+9457,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess));
        vcdp->chgBus(c+9465,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mask),4);
        vcdp->chgQuad(c+9473,((VL_ULL(0xfffffffffffff) 
                               & (((((QData)((IData)(
                                                     (0x7ffffU 
                                                      & VL_NEGATE_I((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL)) 
                                                                                >> 0x20U)))))))) 
                                     << 0x21U) | (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL))) 
                                   + (((QData)((IData)(
                                                       (3U 
                                                        & VL_NEGATE_I((IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (VL_ULL(1) 
                                                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH 
                                                                                >> 0x21U))))))))) 
                                       << 0x32U) | 
                                      (VL_ULL(0x3ffffffffffff) 
                                       & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH 
                                          << 0x10U)))) 
                                  + (((QData)((IData)(
                                                      (3U 
                                                       & VL_NEGATE_I((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (VL_ULL(1) 
                                                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL 
                                                                                >> 0x21U))))))))) 
                                      << 0x32U) | (VL_ULL(0x3ffffffffffff) 
                                                   & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL 
                                                      << 0x10U)))))),52);
        vcdp->chgQuad(c+9489,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HH),34);
        vcdp->chgBus(c+9505,(((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1) 
                              * (0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))),32);
        vcdp->chgBus(c+9513,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_STORE_DATA_RF),32);
        vcdp->chgBus(c+9521,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                            >> 0xcU)))
                               ? ((0xff000000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                                  << 0x18U)) 
                                  | ((0xff0000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                                   << 0x10U)) 
                                     | ((0xff00U & 
                                         (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                          << 8U)) | 
                                        (0xffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))))
                               : ((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                >> 0xcU)))
                                   ? ((0xffff0000U 
                                       & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                          << 0x10U)) 
                                      | (0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))
                                   : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))),32);
        vcdp->chgBit(c+9529,((0x20U != (0x7fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                 >> 7U)))));
        vcdp->chgBit(c+9537,((1U & (~ (((1U == (3U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                   >> 0xdU))) 
                                        & (0U == (0x1fU 
                                                  & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                     >> 0xfU)))) 
                                       | ((3U == (3U 
                                                  & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                     >> 0xdU))) 
                                          & (0U == 
                                             (0x1fU 
                                              & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                 >> 0xfU)))))))));
        vcdp->chgBit(c+9545,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_IS_MUL));
        vcdp->chgBit(c+9553,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_MUL));
        vcdp->chgBit(c+9561,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_WR));
        vcdp->chgBit(c+9569,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE));
        vcdp->chgBus(c+9577,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_FORMAL_PC_NEXT),32);
        vcdp->chgBus(c+9585,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_FORMAL_PC_NEXT),32);
        vcdp->chgBus(c+9593,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_FORMAL_PC_NEXT),32);
        vcdp->chgBus(c+9601,(((IData)(4U) + vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload)),32);
        vcdp->chgBus(c+9609,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_PC),32);
        vcdp->chgBit(c+9617,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS1_SIGNED));
        vcdp->chgBit(c+9625,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_DIV));
        vcdp->chgBit(c+9633,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS2_SIGNED));
        vcdp->chgBit(c+9641,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_IS_DIV));
        vcdp->chgBit(c+9649,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_IS_MUL));
        vcdp->chgQuad(c+9657,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_HH),34);
        vcdp->chgQuad(c+9673,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW),52);
        vcdp->chgQuad(c+9689,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL),34);
        vcdp->chgQuad(c+9705,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH),34);
        vcdp->chgBus(c+9721,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL),32);
        vcdp->chgBit(c+9729,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE));
        vcdp->chgBit(c+9737,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE));
        vcdp->chgBit(c+9745,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR));
        vcdp->chgBus(c+9753,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL),2);
        vcdp->chgBus(c+9761,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL),2);
        vcdp->chgBus(c+9769,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL),2);
        vcdp->chgBus(c+9777,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC),32);
        vcdp->chgBit(c+9785,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_DO));
        vcdp->chgBus(c+9793,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC),32);
        vcdp->chgBit(c+9801,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2));
        vcdp->chgBus(c+9809,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL),2);
        vcdp->chgBit(c+9817,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
        vcdp->chgBit(c+9825,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE));
        vcdp->chgBit(c+9833,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
        vcdp->chgBus(c+9841,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_INSTRUCTION),32);
        vcdp->chgBit(c+9849,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE));
        vcdp->chgBit(c+9857,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID));
        vcdp->chgBus(c+9865,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT),32);
        vcdp->chgBus(c+9873,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL),2);
        vcdp->chgBus(c+9881,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL),2);
        vcdp->chgBit(c+9889,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_LESS_UNSIGNED));
        vcdp->chgBit(c+9897,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_FORCE_ZERO));
        vcdp->chgBit(c+9905,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_USE_SUB_LESS));
        vcdp->chgBus(c+9913,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL),2);
        vcdp->chgBus(c+9921,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL),2);
        vcdp->chgBus(c+9929,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL),2);
        vcdp->chgBus(c+9937,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL),2);
        vcdp->chgBit(c+9945,(((0x17U == (0x5fU & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                              | ((0x6fU == (0x7fU & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                 | ((3U == (0x106fU 
                                            & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                    | ((0x1073U == 
                                        (0x107fU & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                       | ((0x2073U 
                                           == (0x207fU 
                                               & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                          | ((0x4063U 
                                              == (0x407fU 
                                                  & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                             | ((0x2013U 
                                                 == 
                                                 (0x207fU 
                                                  & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                | ((0x23U 
                                                    == 
                                                    (0x603fU 
                                                     & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                   | ((3U 
                                                       == 
                                                       (0x207fU 
                                                        & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                      | ((3U 
                                                          == 
                                                          (0x505fU 
                                                           & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                         | ((0x63U 
                                                             == 
                                                             (0x707bU 
                                                              & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                            | ((0xfU 
                                                                == 
                                                                (0x607fU 
                                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                               | ((0x33U 
                                                                   == 
                                                                   (0xfc00007fU 
                                                                    & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                  | ((0x500fU 
                                                                      == 
                                                                      (0x1f0707fU 
                                                                       & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                     | ((0x5013U 
                                                                         == 
                                                                         (0xbc00707fU 
                                                                          & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                        | ((0x1013U 
                                                                            == 
                                                                            (0xfc00307fU 
                                                                             & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                           | ((0x5033U 
                                                                               == 
                                                                               (0xbe00707fU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                              | ((0x33U 
                                                                                == 
                                                                                (0xbe00707fU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x10200073U 
                                                                                == 
                                                                                (0xdfffffffU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x10500073U 
                                                                                == vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen) 
                                                                                | (0x73U 
                                                                                == vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))))))))))))))))))))));
    }
}

void Vsim::traceChgThis__19(Vsim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp2[3];
    WData/*95:0*/ __Vtemp3[3];
    WData/*95:0*/ __Vtemp4[3];
    WData/*95:0*/ __Vtemp5[3];
    WData/*95:0*/ __Vtemp6[3];
    // Body
    {
        vcdp->chgBit(c+9953,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_WR));
        vcdp->chgBit(c+9961,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE));
        vcdp->chgBit(c+9969,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE));
        vcdp->chgBit(c+9977,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_FORCE_CONSTISTENCY));
        vcdp->chgBus(c+9985,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1),32);
        vcdp->chgBit(c+9993,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_MANAGMENT));
        vcdp->chgBus(c+10001,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2),32);
        vcdp->chgBit(c+10009,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_WR));
        vcdp->chgBit(c+10017,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_ENABLE));
        vcdp->chgBus(c+10025,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION),32);
        vcdp->chgBus(c+10033,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload),32);
        vcdp->chgBus(c+10041,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_PC),32);
        vcdp->chgBus(c+10049,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION),32);
        vcdp->chgBit(c+10057,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid));
        vcdp->chgBit(c+10065,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid));
        vcdp->chgBit(c+10073,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid));
        vcdp->chgBit(c+10081,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1));
        vcdp->chgBit(c+10089,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2));
        vcdp->chgBit(c+10097,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3));
        vcdp->chgBit(c+10105,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4));
        vcdp->chgBus(c+10113,((0xfffffffcU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload)),32);
        vcdp->chgBit(c+10121,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_uncached));
        vcdp->chgBus(c+10129,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address),32);
        vcdp->chgBus(c+10137,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_mask),4);
        vcdp->chgBus(c+10145,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size),3);
        vcdp->chgBit(c+10153,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_last));
        vcdp->chgBit(c+10161,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid));
        vcdp->chgBus(c+10169,(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_DAT_MISO_regNext),32);
        vcdp->chgBit(c+10177,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                        | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid))))));
        vcdp->chgBit(c+10185,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode));
        vcdp->chgBit(c+10193,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute));
        vcdp->chgBit(c+10201,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory));
        vcdp->chgBit(c+10209,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack));
        vcdp->chgBit(c+10217,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correctionReg));
        vcdp->chgBit(c+10225,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted));
        vcdp->chgBit(c+10233,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_inc));
        vcdp->chgBit(c+10241,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2));
        vcdp->chgBit(c+10249,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid));
        vcdp->chgBit(c+10257,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2) 
                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid))));
        vcdp->chgBit(c+10265,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1)))));
        vcdp->chgBit(c+10273,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0));
        vcdp->chgBit(c+10281,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBus_rsp_valid));
        vcdp->chgBus(c+10289,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_DAT_MISO_regNext),32);
        vcdp->chgBus(c+10297,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rspCounter),32);
        vcdp->chgBit(c+10305,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit));
        vcdp->chgBit(c+10313,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s2_tightlyCoupledHit));
        vcdp->chgBit(c+10321,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_uncached)
                                : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess))));
        vcdp->chgBus(c+10329,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                ? vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_data
                                : vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF)),32);
        vcdp->chgBus(c+10337,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_mask)
                                : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mask))),4);
        vcdp->chgBit(c+10345,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)) 
                                     | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_last)))));
        vcdp->chgBit(c+10353,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid));
        vcdp->chgBit(c+10361,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_wr));
        vcdp->chgBit(c+10369,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_uncached));
        vcdp->chgBus(c+10377,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_address),32);
        vcdp->chgBus(c+10385,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_data),32);
        vcdp->chgBus(c+10393,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_mask),4);
        vcdp->chgBus(c+10401,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_size),3);
        vcdp->chgBit(c+10409,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_last));
        vcdp->chgBit(c+10417,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid)))));
        vcdp->chgBus(c+10425,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_rspCounter),32);
        vcdp->chgBus(c+10433,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                     >> 0xcU))),2);
        vcdp->chgBit(c+10441,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid))));
        vcdp->chgBus(c+10449,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                     >> 0xcU))),2);
        vcdp->chgBit(c+10457,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE))));
        vcdp->chgBit(c+10465,((0U == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                               >> 7U)))));
        vcdp->chgBus(c+10473,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port0),32);
        vcdp->chgBus(c+10481,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port1),32);
        vcdp->chgBus(c+10489,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                        >> 7U))),5);
        vcdp->chgBit(c+10497,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_valid));
        vcdp->chgBus(c+10505,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address),5);
        vcdp->chgBus(c+10513,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_data),32);
        vcdp->chgBit(c+10521,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                               == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                            >> 0xfU)))));
        vcdp->chgBit(c+10529,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                               == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                            >> 0x14U)))));
        vcdp->chgBit(c+10537,(((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                         >> 7U)) == 
                               (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                         >> 0xfU)))));
        vcdp->chgBit(c+10545,(((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                         >> 7U)) == 
                               (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                         >> 0x14U)))));
        vcdp->chgBit(c+10553,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID))));
        vcdp->chgBit(c+10561,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))));
        vcdp->chgBit(c+10569,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))));
        vcdp->chgBus(c+10577,((7U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                     >> 0xcU))),3);
        vcdp->chgBus(c+10585,(((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC)),32);
        vcdp->chgBus(c+10593,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtvec_mode),2);
        vcdp->chgBus(c+10601,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtvec_base),30);
        vcdp->chgBus(c+10609,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mepc),32);
        vcdp->chgBit(c+10617,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MIE));
        vcdp->chgBit(c+10625,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPIE));
        vcdp->chgBus(c+10633,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPP),2);
        vcdp->chgBit(c+10641,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MEIP));
        vcdp->chgBit(c+10649,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MTIP));
        vcdp->chgBit(c+10657,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MSIP));
        vcdp->chgBit(c+10665,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MEIE));
        vcdp->chgBit(c+10673,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MTIE));
        vcdp->chgBit(c+10681,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MSIE));
        vcdp->chgBit(c+10689,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcause_interrupt));
        vcdp->chgBus(c+10697,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcause_exceptionCode),4);
        vcdp->chgBus(c+10705,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtval),32);
        vcdp->chgQuad(c+10713,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcycle),64);
        vcdp->chgQuad(c+10729,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_minstret),64);
        vcdp->chgBus(c+10745,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code),4);
        vcdp->chgBus(c+10753,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr),32);
        vcdp->chgBit(c+10761,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_valid));
        vcdp->chgBus(c+10769,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege),2);
        vcdp->chgBit(c+10777,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_0));
        vcdp->chgBit(c+10785,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_1));
        vcdp->chgBit(c+10793,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_2));
        vcdp->chgBit(c+10801,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack) 
                                       << 2U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute))))));
        vcdp->chgBus(c+10809,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                     >> 0x1cU))),2);
        vcdp->chgBit(c+10817,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_wfiWake));
        vcdp->chgBit(c+10825,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))) 
                               | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                                   & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))) 
                                  | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                     & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)))))));
        vcdp->chgBit(c+10833,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid))));
        vcdp->chgBit(c+10841,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                               & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)))));
        vcdp->chgBit(c+10849,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                     >> 0xdU))));
        vcdp->chgBit(c+10857,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR))));
        vcdp->chgBus(c+10865,((0xfffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                         >> 0x14U))),12);
        vcdp->chgBit(c+10873,(((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                             >> 0xcU))) 
                               | (2U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                               >> 0xcU))))));
        vcdp->chgBit(c+10881,((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                            >> 0xcU)))));
        vcdp->chgBus(c+10889,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1)),16);
        vcdp->chgBus(c+10897,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)),16);
        vcdp->chgBus(c+10905,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1)),17);
        vcdp->chgBus(c+10913,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)),17);
        __Vtemp2[0U] = (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW);
        __Vtemp2[1U] = ((0xfff00000U & (VL_NEGATE_I((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                                                        >> 0x33U))))) 
                                        << 0x14U)) 
                        | (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                   >> 0x20U)));
        __Vtemp2[2U] = (3U & (VL_NEGATE_I((IData)((1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                                              >> 0x33U))))) 
                              >> 0xcU));
        VL_EXTEND_WQ(66,34, __Vtemp3, vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_HH);
        VL_SHIFTL_WWI(66,66,32, __Vtemp4, __Vtemp3, 0x20U);
        VL_ADD_W(3, __Vtemp5, __Vtemp2, __Vtemp4);
        __Vtemp6[0U] = __Vtemp5[0U];
        __Vtemp6[1U] = __Vtemp5[1U];
        __Vtemp6[2U] = (3U & __Vtemp5[2U]);
        vcdp->chgArray(c+10921,(__Vtemp6),66);
        vcdp->chgBit(c+10945,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_IS_MUL))));
        vcdp->chgQuad(c+10953,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1),33);
        vcdp->chgBus(c+10969,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs2),32);
        vcdp->chgArray(c+10977,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_accumulator),65);
        vcdp->chgBit(c+11001,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_needRevert));
        vcdp->chgBus(c+11009,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value),6);
        vcdp->chgBit(c+11017,((0x21U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value))));
        vcdp->chgBit(c+11025,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done));
        vcdp->chgBit(c+11033,((0x20U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value))));
        vcdp->chgBus(c+11041,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_result),32);
        vcdp->chgBit(c+11049,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done)))));
        vcdp->chgBus(c+11057,(vlSymsp->TOP__sim__VexRiscv.__PVT__externalInterruptArray_regNext),32);
        vcdp->chgBit(c+11065,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3264));
        vcdp->chgBit(c+11073,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_768));
        vcdp->chgBit(c+11081,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_836));
        vcdp->chgBit(c+11089,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_772));
        vcdp->chgBit(c+11097,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_773));
        vcdp->chgBit(c+11105,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_833));
        vcdp->chgBit(c+11113,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_834));
        vcdp->chgBit(c+11121,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_835));
        vcdp->chgBit(c+11129,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3008));
        vcdp->chgBit(c+11137,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_4032));
        vcdp->chgBit(c+11145,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid)) 
                                     | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR))))));
        vcdp->chgQuad(c+11153,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
                                 ? VL_ULL(0x4e4f4e4520)
                                 : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
                                     ? VL_ULL(0x5852455420)
                                     : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
                                         ? VL_ULL(0x4543414c4c)
                                         : VL_ULL(0x3f3f3f3f3f))))),40);
        vcdp->chgQuad(c+11169,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
                                 ? VL_ULL(0x4e4f4e4520)
                                 : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
                                     ? VL_ULL(0x5852455420)
                                     : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
                                         ? VL_ULL(0x4543414c4c)
                                         : VL_ULL(0x3f3f3f3f3f))))),40);
        vcdp->chgQuad(c+11185,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
                                 ? VL_ULL(0x4e4f4e4520)
                                 : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
                                     ? VL_ULL(0x5852455420)
                                     : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
                                         ? VL_ULL(0x4543414c4c)
                                         : VL_ULL(0x3f3f3f3f3f))))),40);
    }
}
