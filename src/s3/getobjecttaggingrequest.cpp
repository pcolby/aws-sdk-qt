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

#include "getobjecttaggingrequest.h"
#include "getobjecttaggingrequest_p.h"
#include "getobjecttaggingresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  GetObjectTaggingRequest
 *
 * @brief  Implements S3 GetObjectTagging requests.
 *
 * @see    S3Client::getObjectTagging
 */

/**
 * @brief  Constructs a new GetObjectTaggingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetObjectTaggingRequest::GetObjectTaggingRequest(const GetObjectTaggingRequest &other)
    : S3Request(new GetObjectTaggingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetObjectTaggingRequest object.
 */
GetObjectTaggingRequest::GetObjectTaggingRequest()
    : S3Request(new GetObjectTaggingRequestPrivate(S3Request::GetObjectTaggingAction, this))
{

}

bool GetObjectTaggingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetObjectTaggingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetObjectTaggingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * GetObjectTaggingRequest::response(QNetworkReply * const reply) const
{
    return new GetObjectTaggingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetObjectTaggingRequestPrivate
 *
 * @brief  Private implementation for GetObjectTaggingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetObjectTaggingRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public GetObjectTaggingRequest instance.
 */
GetObjectTaggingRequestPrivate::GetObjectTaggingRequestPrivate(
    const S3Request::Action action, GetObjectTaggingRequest * const q)
    : GetObjectTaggingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetObjectTaggingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetObjectTaggingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetObjectTaggingRequest instance.
 */
GetObjectTaggingRequestPrivate::GetObjectTaggingRequestPrivate(
    const GetObjectTaggingRequestPrivate &other, GetObjectTaggingRequest * const q)
    : GetObjectTaggingPrivate(other, q)
{

}

} // namespace S3
} // namespace AWS
