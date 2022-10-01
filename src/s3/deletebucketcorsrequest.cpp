// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebucketcorsrequest.h"
#include "deletebucketcorsrequest_p.h"
#include "deletebucketcorsresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketCorsRequest
 * \brief The DeleteBucketCorsRequest class provides an interface for S3 DeleteBucketCors requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketCors
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBucketCorsRequest::DeleteBucketCorsRequest(const DeleteBucketCorsRequest &other)
    : S3Request(new DeleteBucketCorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBucketCorsRequest object.
 */
DeleteBucketCorsRequest::DeleteBucketCorsRequest()
    : S3Request(new DeleteBucketCorsRequestPrivate(S3Request::DeleteBucketCorsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBucketCorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBucketCorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBucketCorsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketCorsResponse(*this, reply);
}

/*!
 * \class QtAws::S3::DeleteBucketCorsRequestPrivate
 * \brief The DeleteBucketCorsRequestPrivate class provides private implementation for DeleteBucketCorsRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketCorsRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
DeleteBucketCorsRequestPrivate::DeleteBucketCorsRequestPrivate(
    const S3Request::Action action, DeleteBucketCorsRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketCorsRequest
 * class' copy constructor.
 */
DeleteBucketCorsRequestPrivate::DeleteBucketCorsRequestPrivate(
    const DeleteBucketCorsRequestPrivate &other, DeleteBucketCorsRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
