// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebuckettaggingrequest.h"
#include "deletebuckettaggingrequest_p.h"
#include "deletebuckettaggingresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketTaggingRequest
 * \brief The DeleteBucketTaggingRequest class provides an interface for S3 DeleteBucketTagging requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketTagging
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBucketTaggingRequest::DeleteBucketTaggingRequest(const DeleteBucketTaggingRequest &other)
    : S3Request(new DeleteBucketTaggingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBucketTaggingRequest object.
 */
DeleteBucketTaggingRequest::DeleteBucketTaggingRequest()
    : S3Request(new DeleteBucketTaggingRequestPrivate(S3Request::DeleteBucketTaggingAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBucketTaggingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBucketTaggingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBucketTaggingRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketTaggingResponse(*this, reply);
}

/*!
 * \class QtAws::S3::DeleteBucketTaggingRequestPrivate
 * \brief The DeleteBucketTaggingRequestPrivate class provides private implementation for DeleteBucketTaggingRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketTaggingRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
DeleteBucketTaggingRequestPrivate::DeleteBucketTaggingRequestPrivate(
    const S3Request::Action action, DeleteBucketTaggingRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketTaggingRequest
 * class' copy constructor.
 */
DeleteBucketTaggingRequestPrivate::DeleteBucketTaggingRequestPrivate(
    const DeleteBucketTaggingRequestPrivate &other, DeleteBucketTaggingRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
