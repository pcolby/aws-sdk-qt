// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebucketreplicationrequest.h"
#include "deletebucketreplicationrequest_p.h"
#include "deletebucketreplicationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketReplicationRequest
 * \brief The DeleteBucketReplicationRequest class provides an interface for S3 DeleteBucketReplication requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketReplication
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBucketReplicationRequest::DeleteBucketReplicationRequest(const DeleteBucketReplicationRequest &other)
    : S3Request(new DeleteBucketReplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBucketReplicationRequest object.
 */
DeleteBucketReplicationRequest::DeleteBucketReplicationRequest()
    : S3Request(new DeleteBucketReplicationRequestPrivate(S3Request::DeleteBucketReplicationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBucketReplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBucketReplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBucketReplicationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketReplicationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::DeleteBucketReplicationRequestPrivate
 * \brief The DeleteBucketReplicationRequestPrivate class provides private implementation for DeleteBucketReplicationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketReplicationRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
DeleteBucketReplicationRequestPrivate::DeleteBucketReplicationRequestPrivate(
    const S3Request::Action action, DeleteBucketReplicationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketReplicationRequest
 * class' copy constructor.
 */
DeleteBucketReplicationRequestPrivate::DeleteBucketReplicationRequestPrivate(
    const DeleteBucketReplicationRequestPrivate &other, DeleteBucketReplicationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
