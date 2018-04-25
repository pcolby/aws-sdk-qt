/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
