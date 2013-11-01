/*
    Copyright 2013 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "awssignaturev3.h"
#include "awssignaturev3_p.h"

QTAWS_BEGIN_NAMESPACE

/**
 * @class  AwsSignatureV3
 *
 * @brief  Implements AWS Signature Version 3.
 *
 * @note   Signature Version 3 has been discontinued by Amazon, but is included here for posterity.
 *
 * @warning  This class has not been implemented yet!
 */

AwsSignatureV3::AwsSignatureV3() : d_ptr(new AwsSignatureV3Private(this)) {

}

/**
 * @brief AwsSignatureV3 destructor.
 */
AwsSignatureV3::~AwsSignatureV3()
{
    delete d_ptr;
}

void AwsSignatureV3::sign(const AwsAbstractCredentials &credentials, const QNetworkAccessManager::Operation operation,
                          QNetworkRequest &request, const QByteArray &data) const
{
    Q_UNUSED(operation)
    Q_UNUSED(request)
    Q_UNUSED(data)
    Q_UNUSED(credentials)

    Q_ASSERT_X(false, "AwsSignatureV3::sign", "Not implemented");

    //Q_D(AwsBasicCredentials);
    //return d->accessKeyId;
}

int AwsSignatureV3::version() const {
    return 3;
}

/**
 * @internal
 *
 * @class  AwsSignatureV3Private
 *
 * @brief  Private implementation for AwsSignatureV3.
 *
 * @see    http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html
 */

/**
 * @brief  Constructs a new AwsSignatureV3Private object.
 *
 * @param  q  Pointer to this object's public AwsSignatureV3 instance.
 */
AwsSignatureV3Private::AwsSignatureV3Private(AwsSignatureV3 * const q) : q_ptr(q) { }

QTAWS_END_NAMESPACE
