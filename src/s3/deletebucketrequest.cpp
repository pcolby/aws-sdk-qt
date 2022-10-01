// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebucketrequest.h"
#include "deletebucketrequest_p.h"
#include "deletebucketresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketRequest
 * \brief The DeleteBucketRequest class provides an interface for S3 DeleteBucket requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucket
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBucketRequest::DeleteBucketRequest(const DeleteBucketRequest &other)
    : S3Request(new DeleteBucketRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBucketRequest object.
 */
DeleteBucketRequest::DeleteBucketRequest()
    : S3Request(new DeleteBucketRequestPrivate(S3Request::DeleteBucketAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBucketRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBucketResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBucketRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketResponse(*this, reply);
}

/*!
 * \class QtAws::S3::DeleteBucketRequestPrivate
 * \brief The DeleteBucketRequestPrivate class provides private implementation for DeleteBucketRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
DeleteBucketRequestPrivate::DeleteBucketRequestPrivate(
    const S3Request::Action action, DeleteBucketRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketRequest
 * class' copy constructor.
 */
DeleteBucketRequestPrivate::DeleteBucketRequestPrivate(
    const DeleteBucketRequestPrivate &other, DeleteBucketRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
