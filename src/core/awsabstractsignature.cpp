#include "awsabstractsignature.h"

QTAWS_BEGIN_NAMESPACE

/**
 * @class  AwsAbstractSignature
 *
 * @brief  Interface class for providing AWS signatures.
 */

/**
 * @brief  AwsAbstractSignature destructor.
 *
 * This virtual destructor does nothing (yet) - its here to allow for safe
 * polymorphic destruction.
 */
AwsAbstractSignature::~AwsAbstractSignature() { }

/**
 * @fn     void AwsAbstractSignature::sign() const
 *
 * @brief  Sign an AWS request.
 *
 * Note, \a credentials must be valid before calling this function.  So, for
 * example, if \a credentials has expired, and is refreshable, it is the
 * caller's responsibility to refresh the credentials before calling this
 * function.
 *
 * @param  operation     The network operation to sign \a request for.
 * @param  request       The network request to be signed.
 * @param  credentials   The credentials to use for signing.
 * @param  data          Optional POST / PUT data to sign \a request for.
 */

QTAWS_END_NAMESPACE
