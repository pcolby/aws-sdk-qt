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
 * \brief The GetBucketRequestPaymentRequest class provides an interface for S3 GetBucketRequestPayment requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketRequestPayment
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketRequestPaymentRequest::GetBucketRequestPaymentRequest(const GetBucketRequestPaymentRequest &other)
    : S3Request(new GetBucketRequestPaymentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketRequestPaymentRequest object.
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
 * Returns a GetBucketRequestPaymentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketRequestPaymentRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketRequestPaymentResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetBucketRequestPaymentRequestPrivate
 * \brief The GetBucketRequestPaymentRequestPrivate class provides private implementation for GetBucketRequestPaymentRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 *
 * Constructs a GetBucketRequestPaymentRequestPrivate object for S3 \a action with,
 * public implementation \a q.
 */
GetBucketRequestPaymentRequestPrivate::GetBucketRequestPaymentRequestPrivate(
    const S3Request::Action action, GetBucketRequestPaymentRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketRequestPaymentRequest
 * class' copy constructor.
 */
GetBucketRequestPaymentRequestPrivate::GetBucketRequestPaymentRequestPrivate(
    const GetBucketRequestPaymentRequestPrivate &other, GetBucketRequestPaymentRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
