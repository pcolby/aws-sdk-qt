#include "awsregion.h"
#include "awsregion_p.h"

#include <QDebug>
#include <QMessageAuthenticationCode>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  AwsRegion
 *
 * @brief  Implements AWS Signature Version 4.
 *
 * @see    http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html
 */

/**
 * @brief  Constructs a new AwsRegion object.
 *
 * Use instances of this object to provide Version 4 signatures for AWS services.
 */
/*AwsRegion::AwsRegion()
    : d_ptr(new AwsRegionPrivate(hashAlgorithm, this))
{

}*/

/**
 * @class  AwsRegionPrivate
 *
 * @brief  Private implementation for AwsRegion.
 */

AwsRegionPrivate::AwsRegionPrivate(AwsRegion * const q)
    : q_ptr(q)
{

}

QTAWS_END_NAMESPACE
