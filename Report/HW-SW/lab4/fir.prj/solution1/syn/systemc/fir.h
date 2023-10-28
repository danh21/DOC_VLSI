// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _fir_HH_
#define _fir_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "fir_mul_mul_16s_1bkb.h"
#include "fir_mac_muladd_16cud.h"
#include "fir_mac_muladd_10dEe.h"
#include "fir_shift_reg.h"
#include "fir_c.h"
#include "fir_fir_io_s_axi.h"

namespace ap_rtl {

template<unsigned int C_S_AXI_FIR_IO_ADDR_WIDTH = 5,
         unsigned int C_S_AXI_FIR_IO_DATA_WIDTH = 32>
struct fir : public sc_module {
    // Port declarations 20
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_logic > s_axi_fir_io_AWVALID;
    sc_out< sc_logic > s_axi_fir_io_AWREADY;
    sc_in< sc_uint<C_S_AXI_FIR_IO_ADDR_WIDTH> > s_axi_fir_io_AWADDR;
    sc_in< sc_logic > s_axi_fir_io_WVALID;
    sc_out< sc_logic > s_axi_fir_io_WREADY;
    sc_in< sc_uint<C_S_AXI_FIR_IO_DATA_WIDTH> > s_axi_fir_io_WDATA;
    sc_in< sc_uint<C_S_AXI_FIR_IO_DATA_WIDTH/8> > s_axi_fir_io_WSTRB;
    sc_in< sc_logic > s_axi_fir_io_ARVALID;
    sc_out< sc_logic > s_axi_fir_io_ARREADY;
    sc_in< sc_uint<C_S_AXI_FIR_IO_ADDR_WIDTH> > s_axi_fir_io_ARADDR;
    sc_out< sc_logic > s_axi_fir_io_RVALID;
    sc_in< sc_logic > s_axi_fir_io_RREADY;
    sc_out< sc_uint<C_S_AXI_FIR_IO_DATA_WIDTH> > s_axi_fir_io_RDATA;
    sc_out< sc_lv<2> > s_axi_fir_io_RRESP;
    sc_out< sc_logic > s_axi_fir_io_BVALID;
    sc_in< sc_logic > s_axi_fir_io_BREADY;
    sc_out< sc_lv<2> > s_axi_fir_io_BRESP;
    sc_out< sc_logic > interrupt;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    fir(sc_module_name name);
    SC_HAS_PROCESS(fir);

    ~fir();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    fir_shift_reg* shift_reg_U;
    fir_c* c_U;
    fir_fir_io_s_axi<C_S_AXI_FIR_IO_ADDR_WIDTH,C_S_AXI_FIR_IO_DATA_WIDTH>* fir_fir_io_s_axi_U;
    fir_mul_mul_16s_1bkb<1,1,16,10,26>* fir_mul_mul_16s_1bkb_U1;
    fir_mac_muladd_16cud<1,1,16,16,37,37>* fir_mac_muladd_16cud_U2;
    fir_mac_muladd_10dEe<1,1,10,16,31,31>* fir_mac_muladd_10dEe_U3;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_lv<6> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_lv<16> > y;
    sc_signal< sc_logic > y_ap_vld;
    sc_signal< sc_lv<16> > x;
    sc_signal< sc_lv<6> > shift_reg_address0;
    sc_signal< sc_logic > shift_reg_ce0;
    sc_signal< sc_lv<16> > shift_reg_q0;
    sc_signal< sc_lv<6> > shift_reg_address1;
    sc_signal< sc_logic > shift_reg_ce1;
    sc_signal< sc_logic > shift_reg_we1;
    sc_signal< sc_lv<16> > shift_reg_d1;
    sc_signal< sc_lv<6> > c_address0;
    sc_signal< sc_logic > c_ce0;
    sc_signal< sc_lv<16> > c_q0;
    sc_signal< sc_lv<37> > acc1_reg_117;
    sc_signal< sc_lv<6> > i_reg_127;
    sc_signal< sc_lv<16> > reg_138;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter2;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > tmp_3_reg_234;
    sc_signal< sc_lv<26> > acc_fu_195_p2;
    sc_signal< sc_lv<26> > acc_reg_218;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<16> > x_read_reg_223;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<37> > acc_cast_fu_146_p1;
    sc_signal< sc_lv<1> > tmp_3_fu_149_p2;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter1_tmp_3_reg_234;
    sc_signal< sc_lv<6> > i_1_fu_155_p2;
    sc_signal< sc_lv<6> > i_1_reg_238;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<64> > tmp_6_fu_166_p1;
    sc_signal< sc_lv<64> > tmp_6_reg_248;
    sc_signal< sc_lv<16> > c_load_reg_258;
    sc_signal< sc_lv<37> > grp_fu_201_p3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state5;
    sc_signal< sc_lv<6> > ap_phi_mux_i_phi_fu_131_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<64> > tmp_s_fu_161_p1;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<31> > grp_fu_209_p3;
    sc_signal< sc_lv<10> > acc_fu_195_p1;
    sc_signal< sc_lv<10> > grp_fu_209_p0;
    sc_signal< sc_lv<31> > grp_fu_209_p2;
    sc_signal< sc_lv<6> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<6> ap_ST_fsm_state1;
    static const sc_lv<6> ap_ST_fsm_state2;
    static const sc_lv<6> ap_ST_fsm_state3;
    static const sc_lv<6> ap_ST_fsm_state4;
    static const sc_lv<6> ap_ST_fsm_pp0_stage0;
    static const sc_lv<6> ap_ST_fsm_state8;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const int C_S_AXI_DATA_WIDTH;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_4;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<6> ap_const_lv6_39;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<6> ap_const_lv6_3F;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<26> ap_const_lv26_3FFFE86;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_acc_cast_fu_146_p1();
    void thread_acc_fu_195_p1();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state8();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state5_pp0_stage0_iter0();
    void thread_ap_block_state6_pp0_stage0_iter1();
    void thread_ap_block_state7_pp0_stage0_iter2();
    void thread_ap_condition_pp0_exit_iter0_state5();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_i_phi_fu_131_p4();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_c_address0();
    void thread_c_ce0();
    void thread_grp_fu_209_p0();
    void thread_grp_fu_209_p2();
    void thread_i_1_fu_155_p2();
    void thread_shift_reg_address0();
    void thread_shift_reg_address1();
    void thread_shift_reg_ce0();
    void thread_shift_reg_ce1();
    void thread_shift_reg_d1();
    void thread_shift_reg_we1();
    void thread_tmp_3_fu_149_p2();
    void thread_tmp_6_fu_166_p1();
    void thread_tmp_s_fu_161_p1();
    void thread_y();
    void thread_y_ap_vld();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif