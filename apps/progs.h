/* apps/progs.h */
/* automatically generated by progs.pl for openssl.c */

#define FUNC_TYPE_NONE		0
#define FUNC_TYPE_GENERAL	1
#define FUNC_TYPE_MD		2
#define FUNC_TYPE_CIPHER	3
#define FUNC_TYPE_PKEY		4
#define FUNC_TYPE_MD_ALG	5
#define FUNC_TYPE_CIPHER_ALG	6

typedef struct function_st {
	int type;
	const char *name;
	int (*func)(int argc,char *argv[]);
	const OPTIONS *help;
} FUNCTION;

extern int verify_main(int argc,char *argv[]);
extern OPTIONS verify_options[];
extern int asn1parse_main(int argc,char *argv[]);
extern OPTIONS asn1parse_options[];
extern int req_main(int argc,char *argv[]);
extern OPTIONS req_options[];
extern int dgst_main(int argc,char *argv[]);
extern OPTIONS dgst_options[];
extern int dh_main(int argc,char *argv[]);
extern OPTIONS dh_options[];
extern int dhparam_main(int argc,char *argv[]);
extern OPTIONS dhparam_options[];
extern int enc_main(int argc,char *argv[]);
extern OPTIONS enc_options[];
extern int passwd_main(int argc,char *argv[]);
extern OPTIONS passwd_options[];
extern int gendh_main(int argc,char *argv[]);
extern OPTIONS gendh_options[];
extern int errstr_main(int argc,char *argv[]);
extern OPTIONS errstr_options[];
extern int ca_main(int argc,char *argv[]);
extern OPTIONS ca_options[];
extern int crl_main(int argc,char *argv[]);
extern OPTIONS crl_options[];
extern int rsa_main(int argc,char *argv[]);
extern OPTIONS rsa_options[];
extern int rsautl_main(int argc,char *argv[]);
extern OPTIONS rsautl_options[];
extern int dsa_main(int argc,char *argv[]);
extern OPTIONS dsa_options[];
extern int dsaparam_main(int argc,char *argv[]);
extern OPTIONS dsaparam_options[];
extern int ec_main(int argc,char *argv[]);
extern OPTIONS ec_options[];
extern int ecparam_main(int argc,char *argv[]);
extern OPTIONS ecparam_options[];
extern int x509_main(int argc,char *argv[]);
extern OPTIONS x509_options[];
extern int genrsa_main(int argc,char *argv[]);
extern OPTIONS genrsa_options[];
extern int gendsa_main(int argc,char *argv[]);
extern OPTIONS gendsa_options[];
extern int genpkey_main(int argc,char *argv[]);
extern OPTIONS genpkey_options[];
extern int s_server_main(int argc,char *argv[]);
extern OPTIONS s_server_options[];
extern int s_client_main(int argc,char *argv[]);
extern OPTIONS s_client_options[];
extern int speed_main(int argc,char *argv[]);
extern OPTIONS speed_options[];
extern int s_time_main(int argc,char *argv[]);
extern OPTIONS s_time_options[];
extern int version_main(int argc,char *argv[]);
extern OPTIONS version_options[];
extern int pkcs7_main(int argc,char *argv[]);
extern OPTIONS pkcs7_options[];
extern int cms_main(int argc,char *argv[]);
extern OPTIONS cms_options[];
extern int crl2pkcs7_main(int argc,char *argv[]);
extern OPTIONS crl2pkcs7_options[];
extern int sess_id_main(int argc,char *argv[]);
extern OPTIONS sess_id_options[];
extern int ciphers_main(int argc,char *argv[]);
extern OPTIONS ciphers_options[];
extern int nseq_main(int argc,char *argv[]);
extern OPTIONS nseq_options[];
extern int pkcs12_main(int argc,char *argv[]);
extern OPTIONS pkcs12_options[];
extern int pkcs8_main(int argc,char *argv[]);
extern OPTIONS pkcs8_options[];
extern int pkey_main(int argc,char *argv[]);
extern OPTIONS pkey_options[];
extern int pkeyparam_main(int argc,char *argv[]);
extern OPTIONS pkeyparam_options[];
extern int pkeyutl_main(int argc,char *argv[]);
extern OPTIONS pkeyutl_options[];
extern int spkac_main(int argc,char *argv[]);
extern OPTIONS spkac_options[];
extern int smime_main(int argc,char *argv[]);
extern OPTIONS smime_options[];
extern int rand_main(int argc,char *argv[]);
extern OPTIONS rand_options[];
extern int engine_main(int argc,char *argv[]);
extern OPTIONS engine_options[];
extern int ocsp_main(int argc,char *argv[]);
extern OPTIONS ocsp_options[];
extern int prime_main(int argc,char *argv[]);
extern OPTIONS prime_options[];
extern int ts_main(int argc,char *argv[]);
extern OPTIONS ts_options[];
extern int srp_main(int argc,char *argv[]);
extern OPTIONS srp_options[];
FUNCTION functions[] = {
	{ FUNC_TYPE_GENERAL, "verify", verify_main, NULL },
	{ FUNC_TYPE_GENERAL, "asn1parse", asn1parse_main, NULL },
	{ FUNC_TYPE_GENERAL, "req", req_main, NULL },
	{ FUNC_TYPE_GENERAL, "dgst", dgst_main, NULL },
#ifndef OPENSSL_NO_DH
	{ FUNC_TYPE_GENERAL, "dh", dh_main, NULL },
#endif
#ifndef OPENSSL_NO_DH
	{ FUNC_TYPE_GENERAL, "dhparam", dhparam_main, NULL },
#endif
	{ FUNC_TYPE_GENERAL, "enc", enc_main, NULL },
	{ FUNC_TYPE_GENERAL, "passwd", passwd_main, NULL },
#ifndef OPENSSL_NO_DH
	{ FUNC_TYPE_GENERAL, "gendh", gendh_main, NULL },
#endif
	{ FUNC_TYPE_GENERAL, "errstr", errstr_main, NULL },
	{ FUNC_TYPE_GENERAL, "ca", ca_main, NULL },
	{ FUNC_TYPE_GENERAL, "crl", crl_main, NULL },
#ifndef OPENSSL_NO_RSA
	{ FUNC_TYPE_GENERAL, "rsa", rsa_main, NULL },
#endif
#ifndef OPENSSL_NO_RSA
	{ FUNC_TYPE_GENERAL, "rsautl", rsautl_main, NULL },
#endif
#ifndef OPENSSL_NO_DSA
	{ FUNC_TYPE_GENERAL, "dsa", dsa_main, NULL },
#endif
#ifndef OPENSSL_NO_DSA
	{ FUNC_TYPE_GENERAL, "dsaparam", dsaparam_main, NULL },
#endif
#ifndef OPENSSL_NO_EC
	{ FUNC_TYPE_GENERAL, "ec", ec_main, NULL },
#endif
#ifndef OPENSSL_NO_EC
	{ FUNC_TYPE_GENERAL, "ecparam", ecparam_main, NULL },
#endif
	{ FUNC_TYPE_GENERAL, "x509", x509_main, NULL },
#ifndef OPENSSL_NO_RSA
	{ FUNC_TYPE_GENERAL, "genrsa", genrsa_main, NULL },
#endif
#ifndef OPENSSL_NO_DSA
	{ FUNC_TYPE_GENERAL, "gendsa", gendsa_main, NULL },
#endif
	{ FUNC_TYPE_GENERAL, "genpkey", genpkey_main, NULL },
#if !defined(OPENSSL_NO_SOCK)
	{ FUNC_TYPE_GENERAL, "s_server", s_server_main, NULL },
#endif
#if !defined(OPENSSL_NO_SOCK)
	{ FUNC_TYPE_GENERAL, "s_client", s_client_main, NULL },
#endif
#ifndef OPENSSL_NO_SPEED
	{ FUNC_TYPE_GENERAL, "speed", speed_main, NULL },
#endif
#if !defined(OPENSSL_NO_SOCK)
	{ FUNC_TYPE_GENERAL, "s_time", s_time_main, NULL },
#endif
	{ FUNC_TYPE_GENERAL, "version", version_main, NULL },
	{ FUNC_TYPE_GENERAL, "pkcs7", pkcs7_main, NULL },
#ifndef OPENSSL_NO_CMS
	{ FUNC_TYPE_GENERAL, "cms", cms_main, NULL },
#endif
	{ FUNC_TYPE_GENERAL, "crl2pkcs7", crl2pkcs7_main, NULL },
	{ FUNC_TYPE_GENERAL, "sess_id", sess_id_main, NULL },
#if !defined(OPENSSL_NO_SOCK)
	{ FUNC_TYPE_GENERAL, "ciphers", ciphers_main, NULL },
#endif
	{ FUNC_TYPE_GENERAL, "nseq", nseq_main, NULL },
#if !defined(OPENSSL_NO_DES) && !defined(OPENSSL_NO_SHA1)
	{ FUNC_TYPE_GENERAL, "pkcs12", pkcs12_main, NULL },
#endif
	{ FUNC_TYPE_GENERAL, "pkcs8", pkcs8_main, NULL },
	{ FUNC_TYPE_GENERAL, "pkey", pkey_main, NULL },
	{ FUNC_TYPE_GENERAL, "pkeyparam", pkeyparam_main, NULL },
	{ FUNC_TYPE_GENERAL, "pkeyutl", pkeyutl_main, NULL },
	{ FUNC_TYPE_GENERAL, "spkac", spkac_main, NULL },
	{ FUNC_TYPE_GENERAL, "smime", smime_main, NULL },
	{ FUNC_TYPE_GENERAL, "rand", rand_main, NULL },
#ifndef OPENSSL_NO_ENGINE
	{ FUNC_TYPE_GENERAL, "engine", engine_main, NULL },
#endif
#ifndef OPENSSL_NO_OCSP
	{ FUNC_TYPE_GENERAL, "ocsp", ocsp_main, NULL },
#endif
	{ FUNC_TYPE_GENERAL, "prime", prime_main, NULL },
	{ FUNC_TYPE_GENERAL, "ts", ts_main, NULL },
#ifndef OPENSSL_NO_SRP
	{ FUNC_TYPE_GENERAL, "srp", srp_main, NULL },
#endif
#ifndef OPENSSL_NO_MD2
	{ FUNC_TYPE_MD, "md2", dgst_main, NULL },
#endif
#ifndef OPENSSL_NO_MD4
	{ FUNC_TYPE_MD, "md4", dgst_main, NULL },
#endif
#ifndef OPENSSL_NO_MD5
	{ FUNC_TYPE_MD, "md5", dgst_main, NULL },
#endif
#ifndef OPENSSL_NO_MD_GHOST94
	{ FUNC_TYPE_MD, "md_ghost94", dgst_main, NULL },
#endif
#ifndef OPENSSL_NO_SHA
	{ FUNC_TYPE_MD, "sha", dgst_main, NULL },
#endif
#ifndef OPENSSL_NO_SHA1
	{ FUNC_TYPE_MD, "sha1", dgst_main, NULL },
#endif
#ifndef OPENSSL_NO_SHA224
	{ FUNC_TYPE_MD, "sha224", dgst_main, NULL },
#endif
#ifndef OPENSSL_NO_SHA256
	{ FUNC_TYPE_MD, "sha256", dgst_main, NULL },
#endif
#ifndef OPENSSL_NO_SHA384
	{ FUNC_TYPE_MD, "sha384", dgst_main, NULL },
#endif
#ifndef OPENSSL_NO_SHA512
	{ FUNC_TYPE_MD, "sha512", dgst_main, NULL },
#endif
#ifndef OPENSSL_NO_MDC2
	{ FUNC_TYPE_MD, "mdc2", dgst_main, NULL },
#endif
#ifndef OPENSSL_NO_RMD160
	{ FUNC_TYPE_MD, "rmd160", dgst_main, NULL },
#endif
#ifndef OPENSSL_NO_AES
	{ FUNC_TYPE_CIPHER, "aes-128-cbc", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_AES
	{ FUNC_TYPE_CIPHER, "aes-128-ecb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_AES
	{ FUNC_TYPE_CIPHER, "aes-192-cbc", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_AES
	{ FUNC_TYPE_CIPHER, "aes-192-ecb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_AES
	{ FUNC_TYPE_CIPHER, "aes-256-cbc", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_AES
	{ FUNC_TYPE_CIPHER, "aes-256-ecb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_CAMELLIA
	{ FUNC_TYPE_CIPHER, "camellia-128-cbc", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_CAMELLIA
	{ FUNC_TYPE_CIPHER, "camellia-128-ecb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_CAMELLIA
	{ FUNC_TYPE_CIPHER, "camellia-192-cbc", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_CAMELLIA
	{ FUNC_TYPE_CIPHER, "camellia-192-ecb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_CAMELLIA
	{ FUNC_TYPE_CIPHER, "camellia-256-cbc", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_CAMELLIA
	{ FUNC_TYPE_CIPHER, "camellia-256-ecb", enc_main, NULL },
#endif
	{ FUNC_TYPE_CIPHER, "base64", enc_main, NULL },
#ifdef ZLIB
	{ FUNC_TYPE_CIPHER, "zlib", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_DES
	{ FUNC_TYPE_CIPHER, "des", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_DES
	{ FUNC_TYPE_CIPHER, "des3", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_DES
	{ FUNC_TYPE_CIPHER, "desx", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_IDEA
	{ FUNC_TYPE_CIPHER, "idea", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_SEED
	{ FUNC_TYPE_CIPHER, "seed", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_RC4
	{ FUNC_TYPE_CIPHER, "rc4", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_RC4
	{ FUNC_TYPE_CIPHER, "rc4-40", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_RC2
	{ FUNC_TYPE_CIPHER, "rc2", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_BF
	{ FUNC_TYPE_CIPHER, "bf", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_CAST
	{ FUNC_TYPE_CIPHER, "cast", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_RC5
	{ FUNC_TYPE_CIPHER, "rc5", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_DES
	{ FUNC_TYPE_CIPHER, "des-ecb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_DES
	{ FUNC_TYPE_CIPHER, "des-ede", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_DES
	{ FUNC_TYPE_CIPHER, "des-ede3", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_DES
	{ FUNC_TYPE_CIPHER, "des-cbc", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_DES
	{ FUNC_TYPE_CIPHER, "des-ede-cbc", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_DES
	{ FUNC_TYPE_CIPHER, "des-ede3-cbc", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_DES
	{ FUNC_TYPE_CIPHER, "des-cfb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_DES
	{ FUNC_TYPE_CIPHER, "des-ede-cfb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_DES
	{ FUNC_TYPE_CIPHER, "des-ede3-cfb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_DES
	{ FUNC_TYPE_CIPHER, "des-ofb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_DES
	{ FUNC_TYPE_CIPHER, "des-ede-ofb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_DES
	{ FUNC_TYPE_CIPHER, "des-ede3-ofb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_IDEA
	{ FUNC_TYPE_CIPHER, "idea-cbc", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_IDEA
	{ FUNC_TYPE_CIPHER, "idea-ecb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_IDEA
	{ FUNC_TYPE_CIPHER, "idea-cfb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_IDEA
	{ FUNC_TYPE_CIPHER, "idea-ofb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_SEED
	{ FUNC_TYPE_CIPHER, "seed-cbc", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_SEED
	{ FUNC_TYPE_CIPHER, "seed-ecb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_SEED
	{ FUNC_TYPE_CIPHER, "seed-cfb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_SEED
	{ FUNC_TYPE_CIPHER, "seed-ofb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_RC2
	{ FUNC_TYPE_CIPHER, "rc2-cbc", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_RC2
	{ FUNC_TYPE_CIPHER, "rc2-ecb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_RC2
	{ FUNC_TYPE_CIPHER, "rc2-cfb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_RC2
	{ FUNC_TYPE_CIPHER, "rc2-ofb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_RC2
	{ FUNC_TYPE_CIPHER, "rc2-64-cbc", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_RC2
	{ FUNC_TYPE_CIPHER, "rc2-40-cbc", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_BF
	{ FUNC_TYPE_CIPHER, "bf-cbc", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_BF
	{ FUNC_TYPE_CIPHER, "bf-ecb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_BF
	{ FUNC_TYPE_CIPHER, "bf-cfb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_BF
	{ FUNC_TYPE_CIPHER, "bf-ofb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_CAST
	{ FUNC_TYPE_CIPHER, "cast5-cbc", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_CAST
	{ FUNC_TYPE_CIPHER, "cast5-ecb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_CAST
	{ FUNC_TYPE_CIPHER, "cast5-cfb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_CAST
	{ FUNC_TYPE_CIPHER, "cast5-ofb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_CAST
	{ FUNC_TYPE_CIPHER, "cast-cbc", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_RC5
	{ FUNC_TYPE_CIPHER, "rc5-cbc", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_RC5
	{ FUNC_TYPE_CIPHER, "rc5-ecb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_RC5
	{ FUNC_TYPE_CIPHER, "rc5-cfb", enc_main, NULL },
#endif
#ifndef OPENSSL_NO_RC5
	{ FUNC_TYPE_CIPHER, "rc5-ofb", enc_main, NULL },
#endif
	{0,NULL}
	};
