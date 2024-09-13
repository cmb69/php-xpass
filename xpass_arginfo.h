/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 09c1d047a579afe870fadd302bd2e34a5d06c370 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_crypt_gensalt, 0, 0, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, salt, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, count, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_crypt_preferred_method, 0, 0, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_crypt_checksalt, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, salt, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_FUNCTION(crypt_gensalt);
ZEND_FUNCTION(crypt_preferred_method);
ZEND_FUNCTION(crypt_checksalt);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(crypt_gensalt, arginfo_crypt_gensalt)
	ZEND_FE(crypt_preferred_method, arginfo_crypt_preferred_method)
	ZEND_FE(crypt_checksalt, arginfo_crypt_checksalt)
	ZEND_FE_END
};

static void register_xpass_symbols(int module_number)
{
	REGISTER_STRING_CONSTANT("XPASS_CRYPT_STD_DES", "", CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("XPASS_CRYPT_EXT_DES", "_", CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("XPASS_CRYPT_MD5", "$1$", CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("XPASS_CRYPT_BLOWFISH", "$2y$", CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("XPASS_CRYPT_SHA256", "$5$", CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("XPASS_CRYPT_SHA512", "$6$", CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("XPASS_CRYPT_SCRYPT", "$7$", CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("XPASS_CRYPT_GOST_YESCRYPT", "$gy$", CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("XPASS_CRYPT_YESCRYPT", "$y$", CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CRYPT_SALT_OK", CRYPT_SALT_OK, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CRYPT_SALT_INVALID", CRYPT_SALT_INVALID, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CRYPT_SALT_METHOD_DISABLED", CRYPT_SALT_METHOD_DISABLED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CRYPT_SALT_METHOD_LEGACY", CRYPT_SALT_METHOD_LEGACY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CRYPT_SALT_TOO_CHEAP", CRYPT_SALT_TOO_CHEAP, CONST_PERSISTENT);
}
