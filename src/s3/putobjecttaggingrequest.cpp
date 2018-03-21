/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putobjecttaggingrequest.h"
#include "putobjecttaggingrequest_p.h"
#include "putobjecttaggingresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  PutObjectTaggingRequest
 *
 * @brief  Implements S3 PutObjectTagging requests.
 *
 * @see    S3Client::putObjectTagging
 */

/**
 * @brief  Constructs a new PutObjectTaggingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutObjectTaggingResponse::PutObjectTaggingResponse(

/**
 * @brief  Constructs a new PutObjectTaggingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutObjectTaggingRequest::PutObjectTaggingRequest(const PutObjectTaggingRequest &other)
    : S3Request(new PutObjectTaggingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutObjectTaggingRequest object.
 */
PutObjectTaggingRequest::PutObjectTaggingRequest()
    : S3Request(new PutObjectTaggingRequestPrivate(S3Request::PutObjectTaggingAction, this))
{

}

bool PutObjectTaggingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutObjectTaggingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutObjectTaggingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * PutObjectTaggingRequest::response(QNetworkReply * const reply) const
{
    return new PutObjectTaggingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutObjectTaggingRequestPrivate
 *
 * @brief  Private implementation for PutObjectTaggingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutObjectTaggingRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public PutObjectTaggingRequest instance.
 */
PutObjectTaggingRequestPrivate::PutObjectTaggingRequestPrivate(
    const S3Request::Action action, PutObjectTaggingRequest * const q)
    : PutObjectTaggingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutObjectTaggingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutObjectTaggingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutObjectTaggingRequest instance.
 */
PutObjectTaggingRequestPrivate::PutObjectTaggingRequestPrivate(
    const PutObjectTaggingRequestPrivate &other, PutObjectTaggingRequest * const q)
    : PutObjectTaggingPrivate(other, q)
{

}

} // namespace S3
} // namespace AWS
