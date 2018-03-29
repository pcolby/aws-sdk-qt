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

#include "getobjectaclrequest.h"
#include "getobjectaclrequest_p.h"
#include "getobjectaclresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  GetObjectAclRequest
 *
 * @brief  Implements S3 GetObjectAcl requests.
 *
 * @see    S3Client::getObjectAcl
 */

/**
 * @brief  Constructs a new GetObjectAclRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetObjectAclRequest::GetObjectAclRequest(const GetObjectAclRequest &other)
    : S3Request(new GetObjectAclRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetObjectAclRequest object.
 */
GetObjectAclRequest::GetObjectAclRequest()
    : S3Request(new GetObjectAclRequestPrivate(S3Request::GetObjectAclAction, this))
{

}

bool GetObjectAclRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetObjectAclResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetObjectAclResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * GetObjectAclRequest::response(QNetworkReply * const reply) const
{
    return new GetObjectAclResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetObjectAclRequestPrivate
 *
 * @brief  Private implementation for GetObjectAclRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetObjectAclRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public GetObjectAclRequest instance.
 */
GetObjectAclRequestPrivate::GetObjectAclRequestPrivate(
    const S3Request::Action action, GetObjectAclRequest * const q)
    : GetObjectAclPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetObjectAclRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetObjectAclRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetObjectAclRequest instance.
 */
GetObjectAclRequestPrivate::GetObjectAclRequestPrivate(
    const GetObjectAclRequestPrivate &other, GetObjectAclRequest * const q)
    : GetObjectAclPrivate(other, q)
{

}

} // namespace S3
} // namespace AWS
