/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describekeyrequest.h"
#include "describekeyrequest_p.h"
#include "describekeyresponse.h"
#include "kmsrequest_p.h"

namespace QtAws {
namespace KMS {

/**
 * @class  DescribeKeyRequest
 *
 * @brief  Implements KMS DescribeKey requests.
 *
 * @see    KMSClient::describeKey
 */

/**
 * @brief  Constructs a new DescribeKeyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeKeyRequest::DescribeKeyRequest(const DescribeKeyRequest &other)
    : KMSRequest(new DescribeKeyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeKeyRequest object.
 */
DescribeKeyRequest::DescribeKeyRequest()
    : KMSRequest(new DescribeKeyRequestPrivate(KMSRequest::DescribeKeyAction, this))
{

}

bool DescribeKeyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeKeyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeKeyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KMSClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeKeyRequest::response(QNetworkReply * const reply) const
{
    return new DescribeKeyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeKeyRequestPrivate
 *
 * @brief  Private implementation for DescribeKeyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeKeyRequestPrivate object.
 *
 * @param  action  KMS action being performed.
 * @param  q       Pointer to this object's public DescribeKeyRequest instance.
 */
DescribeKeyRequestPrivate::DescribeKeyRequestPrivate(
    const KMSRequest::Action action, DescribeKeyRequest * const q)
    : KMSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeKeyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeKeyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeKeyRequest instance.
 */
DescribeKeyRequestPrivate::DescribeKeyRequestPrivate(
    const DescribeKeyRequestPrivate &other, DescribeKeyRequest * const q)
    : KMSRequestPrivate(other, q)
{

}

} // namespace KMS
} // namespace QtAws
