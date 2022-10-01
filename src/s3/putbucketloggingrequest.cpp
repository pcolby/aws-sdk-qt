// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketloggingrequest.h"
#include "putbucketloggingrequest_p.h"
#include "putbucketloggingresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketLoggingRequest
 * \brief The PutBucketLoggingRequest class provides an interface for S3 PutBucketLogging requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketLogging
 */

/*!
 * Constructs a copy of \a other.
 */
PutBucketLoggingRequest::PutBucketLoggingRequest(const PutBucketLoggingRequest &other)
    : S3Request(new PutBucketLoggingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBucketLoggingRequest object.
 */
PutBucketLoggingRequest::PutBucketLoggingRequest()
    : S3Request(new PutBucketLoggingRequestPrivate(S3Request::PutBucketLoggingAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketLoggingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBucketLoggingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketLoggingRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketLoggingResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutBucketLoggingRequestPrivate
 * \brief The PutBucketLoggingRequestPrivate class provides private implementation for PutBucketLoggingRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketLoggingRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutBucketLoggingRequestPrivate::PutBucketLoggingRequestPrivate(
    const S3Request::Action action, PutBucketLoggingRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBucketLoggingRequest
 * class' copy constructor.
 */
PutBucketLoggingRequestPrivate::PutBucketLoggingRequestPrivate(
    const PutBucketLoggingRequestPrivate &other, PutBucketLoggingRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
