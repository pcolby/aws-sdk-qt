// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketreplicationrequest.h"
#include "putbucketreplicationrequest_p.h"
#include "putbucketreplicationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketReplicationRequest
 * \brief The PutBucketReplicationRequest class provides an interface for S3 PutBucketReplication requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketReplication
 */

/*!
 * Constructs a copy of \a other.
 */
PutBucketReplicationRequest::PutBucketReplicationRequest(const PutBucketReplicationRequest &other)
    : S3Request(new PutBucketReplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBucketReplicationRequest object.
 */
PutBucketReplicationRequest::PutBucketReplicationRequest()
    : S3Request(new PutBucketReplicationRequestPrivate(S3Request::PutBucketReplicationAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketReplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBucketReplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketReplicationRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketReplicationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutBucketReplicationRequestPrivate
 * \brief The PutBucketReplicationRequestPrivate class provides private implementation for PutBucketReplicationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketReplicationRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutBucketReplicationRequestPrivate::PutBucketReplicationRequestPrivate(
    const S3Request::Action action, PutBucketReplicationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBucketReplicationRequest
 * class' copy constructor.
 */
PutBucketReplicationRequestPrivate::PutBucketReplicationRequestPrivate(
    const PutBucketReplicationRequestPrivate &other, PutBucketReplicationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
