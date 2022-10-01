// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbuckettaggingrequest.h"
#include "getbuckettaggingrequest_p.h"
#include "getbuckettaggingresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketTaggingRequest
 * \brief The GetBucketTaggingRequest class provides an interface for S3 GetBucketTagging requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketTagging
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketTaggingRequest::GetBucketTaggingRequest(const GetBucketTaggingRequest &other)
    : S3Request(new GetBucketTaggingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketTaggingRequest object.
 */
GetBucketTaggingRequest::GetBucketTaggingRequest()
    : S3Request(new GetBucketTaggingRequestPrivate(S3Request::GetBucketTaggingAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketTaggingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketTaggingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketTaggingRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketTaggingResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetBucketTaggingRequestPrivate
 * \brief The GetBucketTaggingRequestPrivate class provides private implementation for GetBucketTaggingRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketTaggingRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetBucketTaggingRequestPrivate::GetBucketTaggingRequestPrivate(
    const S3Request::Action action, GetBucketTaggingRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketTaggingRequest
 * class' copy constructor.
 */
GetBucketTaggingRequestPrivate::GetBucketTaggingRequestPrivate(
    const GetBucketTaggingRequestPrivate &other, GetBucketTaggingRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
