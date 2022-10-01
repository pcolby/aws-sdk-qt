// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketrequestpaymentrequest.h"
#include "putbucketrequestpaymentrequest_p.h"
#include "putbucketrequestpaymentresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketRequestPaymentRequest
 * \brief The PutBucketRequestPaymentRequest class provides an interface for S3 PutBucketRequestPayment requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketRequestPayment
 */

/*!
 * Constructs a copy of \a other.
 */
PutBucketRequestPaymentRequest::PutBucketRequestPaymentRequest(const PutBucketRequestPaymentRequest &other)
    : S3Request(new PutBucketRequestPaymentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBucketRequestPaymentRequest object.
 */
PutBucketRequestPaymentRequest::PutBucketRequestPaymentRequest()
    : S3Request(new PutBucketRequestPaymentRequestPrivate(S3Request::PutBucketRequestPaymentAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketRequestPaymentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBucketRequestPaymentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketRequestPaymentRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketRequestPaymentResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutBucketRequestPaymentRequestPrivate
 * \brief The PutBucketRequestPaymentRequestPrivate class provides private implementation for PutBucketRequestPaymentRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketRequestPaymentRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutBucketRequestPaymentRequestPrivate::PutBucketRequestPaymentRequestPrivate(
    const S3Request::Action action, PutBucketRequestPaymentRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBucketRequestPaymentRequest
 * class' copy constructor.
 */
PutBucketRequestPaymentRequestPrivate::PutBucketRequestPaymentRequestPrivate(
    const PutBucketRequestPaymentRequestPrivate &other, PutBucketRequestPaymentRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
