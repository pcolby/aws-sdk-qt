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

#include "getbucketrequestpaymentrequest.h"
#include "getbucketrequestpaymentrequest_p.h"
#include "getbucketrequestpaymentresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketRequestPaymentRequest
 *
 * \brief The GetBucketRequestPaymentRequest class provides an interface for S3 GetBucketRequestPayment requests.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::getBucketRequestPayment
 */

/*!
 * @brief  Constructs a new GetBucketRequestPaymentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBucketRequestPaymentRequest::GetBucketRequestPaymentRequest(const GetBucketRequestPaymentRequest &other)
    : S3Request(new GetBucketRequestPaymentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetBucketRequestPaymentRequest object.
 */
GetBucketRequestPaymentRequest::GetBucketRequestPaymentRequest()
    : S3Request(new GetBucketRequestPaymentRequestPrivate(S3Request::GetBucketRequestPaymentAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketRequestPaymentRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetBucketRequestPaymentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBucketRequestPaymentResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketRequestPaymentRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketRequestPaymentResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetBucketRequestPaymentRequestPrivate
 *
 * @brief  Private implementation for GetBucketRequestPaymentRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetBucketRequestPaymentRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public GetBucketRequestPaymentRequest instance.
 */
GetBucketRequestPaymentRequestPrivate::GetBucketRequestPaymentRequestPrivate(
    const S3Request::Action action, GetBucketRequestPaymentRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetBucketRequestPaymentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBucketRequestPaymentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBucketRequestPaymentRequest instance.
 */
GetBucketRequestPaymentRequestPrivate::GetBucketRequestPaymentRequestPrivate(
    const GetBucketRequestPaymentRequestPrivate &other, GetBucketRequestPaymentRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
