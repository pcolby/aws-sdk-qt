// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketversioningrequest.h"
#include "getbucketversioningrequest_p.h"
#include "getbucketversioningresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketVersioningRequest
 * \brief The GetBucketVersioningRequest class provides an interface for S3 GetBucketVersioning requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketVersioning
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketVersioningRequest::GetBucketVersioningRequest(const GetBucketVersioningRequest &other)
    : S3Request(new GetBucketVersioningRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketVersioningRequest object.
 */
GetBucketVersioningRequest::GetBucketVersioningRequest()
    : S3Request(new GetBucketVersioningRequestPrivate(S3Request::GetBucketVersioningAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketVersioningRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketVersioningResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketVersioningRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketVersioningResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetBucketVersioningRequestPrivate
 * \brief The GetBucketVersioningRequestPrivate class provides private implementation for GetBucketVersioningRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketVersioningRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetBucketVersioningRequestPrivate::GetBucketVersioningRequestPrivate(
    const S3Request::Action action, GetBucketVersioningRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketVersioningRequest
 * class' copy constructor.
 */
GetBucketVersioningRequestPrivate::GetBucketVersioningRequestPrivate(
    const GetBucketVersioningRequestPrivate &other, GetBucketVersioningRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
