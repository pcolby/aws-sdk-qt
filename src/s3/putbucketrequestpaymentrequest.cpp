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

#include "putbucketrequestpaymentrequest.h"
#include "putbucketrequestpaymentrequest_p.h"
#include "putbucketrequestpaymentresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/**
 * @class  PutBucketRequestPaymentRequest
 *
 * @brief  Implements S3 PutBucketRequestPayment requests.
 *
 * @see    S3Client::putBucketRequestPayment
 */

/**
 * @brief  Constructs a new PutBucketRequestPaymentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutBucketRequestPaymentRequest::PutBucketRequestPaymentRequest(const PutBucketRequestPaymentRequest &other)
    : S3Request(new PutBucketRequestPaymentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutBucketRequestPaymentRequest object.
 */
PutBucketRequestPaymentRequest::PutBucketRequestPaymentRequest()
    : S3Request(new PutBucketRequestPaymentRequestPrivate(S3Request::PutBucketRequestPaymentAction, this))
{

}

bool PutBucketRequestPaymentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutBucketRequestPaymentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutBucketRequestPaymentResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketRequestPaymentRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketRequestPaymentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutBucketRequestPaymentRequestPrivate
 *
 * @brief  Private implementation for PutBucketRequestPaymentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketRequestPaymentRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public PutBucketRequestPaymentRequest instance.
 */
PutBucketRequestPaymentRequestPrivate::PutBucketRequestPaymentRequestPrivate(
    const S3Request::Action action, PutBucketRequestPaymentRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketRequestPaymentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutBucketRequestPaymentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutBucketRequestPaymentRequest instance.
 */
PutBucketRequestPaymentRequestPrivate::PutBucketRequestPaymentRequestPrivate(
    const PutBucketRequestPaymentRequestPrivate &other, PutBucketRequestPaymentRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
