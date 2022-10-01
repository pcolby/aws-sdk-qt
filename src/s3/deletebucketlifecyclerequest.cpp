// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebucketlifecyclerequest.h"
#include "deletebucketlifecyclerequest_p.h"
#include "deletebucketlifecycleresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketLifecycleRequest
 * \brief The DeleteBucketLifecycleRequest class provides an interface for S3 DeleteBucketLifecycle requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketLifecycle
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBucketLifecycleRequest::DeleteBucketLifecycleRequest(const DeleteBucketLifecycleRequest &other)
    : S3Request(new DeleteBucketLifecycleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBucketLifecycleRequest object.
 */
DeleteBucketLifecycleRequest::DeleteBucketLifecycleRequest()
    : S3Request(new DeleteBucketLifecycleRequestPrivate(S3Request::DeleteBucketLifecycleAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBucketLifecycleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBucketLifecycleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBucketLifecycleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketLifecycleResponse(*this, reply);
}

/*!
 * \class QtAws::S3::DeleteBucketLifecycleRequestPrivate
 * \brief The DeleteBucketLifecycleRequestPrivate class provides private implementation for DeleteBucketLifecycleRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketLifecycleRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
DeleteBucketLifecycleRequestPrivate::DeleteBucketLifecycleRequestPrivate(
    const S3Request::Action action, DeleteBucketLifecycleRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketLifecycleRequest
 * class' copy constructor.
 */
DeleteBucketLifecycleRequestPrivate::DeleteBucketLifecycleRequestPrivate(
    const DeleteBucketLifecycleRequestPrivate &other, DeleteBucketLifecycleRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
