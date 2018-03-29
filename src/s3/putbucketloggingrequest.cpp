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

#include "putbucketloggingrequest.h"
#include "putbucketloggingrequest_p.h"
#include "putbucketloggingresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/**
 * @class  PutBucketLoggingRequest
 *
 * @brief  Implements S3 PutBucketLogging requests.
 *
 * @see    S3Client::putBucketLogging
 */

/**
 * @brief  Constructs a new PutBucketLoggingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutBucketLoggingRequest::PutBucketLoggingRequest(const PutBucketLoggingRequest &other)
    : S3Request(new PutBucketLoggingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutBucketLoggingRequest object.
 */
PutBucketLoggingRequest::PutBucketLoggingRequest()
    : S3Request(new PutBucketLoggingRequestPrivate(S3Request::PutBucketLoggingAction, this))
{

}

bool PutBucketLoggingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutBucketLoggingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutBucketLoggingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * PutBucketLoggingRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketLoggingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutBucketLoggingRequestPrivate
 *
 * @brief  Private implementation for PutBucketLoggingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketLoggingRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public PutBucketLoggingRequest instance.
 */
PutBucketLoggingRequestPrivate::PutBucketLoggingRequestPrivate(
    const S3Request::Action action, PutBucketLoggingRequest * const q)
    : PutBucketLoggingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketLoggingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutBucketLoggingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutBucketLoggingRequest instance.
 */
PutBucketLoggingRequestPrivate::PutBucketLoggingRequestPrivate(
    const PutBucketLoggingRequestPrivate &other, PutBucketLoggingRequest * const q)
    : PutBucketLoggingPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
