/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putbucketreplicationrequest.h"
#include "putbucketreplicationrequest_p.h"
#include "putbucketreplicationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketReplicationRequest
 *
 * \brief The PutBucketReplicationRequest class encapsulates S3 PutBucketReplication requests.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::putBucketReplication
 */

/*!
 * @brief  Constructs a new PutBucketReplicationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutBucketReplicationRequest::PutBucketReplicationRequest(const PutBucketReplicationRequest &other)
    : S3Request(new PutBucketReplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new PutBucketReplicationRequest object.
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
 * @brief  Construct an PutBucketReplicationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutBucketReplicationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketReplicationRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketReplicationResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  PutBucketReplicationRequestPrivate
 *
 * @brief  Private implementation for PutBucketReplicationRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutBucketReplicationRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public PutBucketReplicationRequest instance.
 */
PutBucketReplicationRequestPrivate::PutBucketReplicationRequestPrivate(
    const S3Request::Action action, PutBucketReplicationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new PutBucketReplicationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutBucketReplicationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutBucketReplicationRequest instance.
 */
PutBucketReplicationRequestPrivate::PutBucketReplicationRequestPrivate(
    const PutBucketReplicationRequestPrivate &other, PutBucketReplicationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
