// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketloggingrequest.h"
#include "getbucketloggingrequest_p.h"
#include "getbucketloggingresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketLoggingRequest
 * \brief The GetBucketLoggingRequest class provides an interface for S3 GetBucketLogging requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketLogging
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketLoggingRequest::GetBucketLoggingRequest(const GetBucketLoggingRequest &other)
    : S3Request(new GetBucketLoggingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketLoggingRequest object.
 */
GetBucketLoggingRequest::GetBucketLoggingRequest()
    : S3Request(new GetBucketLoggingRequestPrivate(S3Request::GetBucketLoggingAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketLoggingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketLoggingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketLoggingRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketLoggingResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetBucketLoggingRequestPrivate
 * \brief The GetBucketLoggingRequestPrivate class provides private implementation for GetBucketLoggingRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketLoggingRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetBucketLoggingRequestPrivate::GetBucketLoggingRequestPrivate(
    const S3Request::Action action, GetBucketLoggingRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketLoggingRequest
 * class' copy constructor.
 */
GetBucketLoggingRequestPrivate::GetBucketLoggingRequestPrivate(
    const GetBucketLoggingRequestPrivate &other, GetBucketLoggingRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
