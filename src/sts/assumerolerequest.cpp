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

#include "assumerolerequest.h"
#include "assumerolerequest_p.h"
#include "assumeroleresponse.h"
#include "stsrequest_p.h"

namespace AWS {
namespace STS {

/**
 * @class  AssumeRoleRequest
 *
 * @brief  Implements STS AssumeRole requests.
 *
 * @see    STSClient::assumeRole
 */

/**
 * @brief  Constructs a new AssumeRoleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssumeRoleResponse::AssumeRoleResponse(

/**
 * @brief  Constructs a new AssumeRoleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssumeRoleRequest::AssumeRoleRequest(const AssumeRoleRequest &other)
    : STSRequest(new AssumeRoleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssumeRoleRequest object.
 */
AssumeRoleRequest::AssumeRoleRequest()
    : STSRequest(new AssumeRoleRequestPrivate(STSRequest::AssumeRoleAction, this))
{

}

bool AssumeRoleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssumeRoleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssumeRoleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  STSClient::send
 */
AwsAbstractResponse * AssumeRoleRequest::response(QNetworkReply * const reply) const
{
    return new AssumeRoleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssumeRoleRequestPrivate
 *
 * @brief  Private implementation for AssumeRoleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssumeRoleRequestPrivate object.
 *
 * @param  action  STS action being performed.
 * @param  q       Pointer to this object's public AssumeRoleRequest instance.
 */
AssumeRoleRequestPrivate::AssumeRoleRequestPrivate(
    const STSRequest::Action action, AssumeRoleRequest * const q)
    : AssumeRolePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssumeRoleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssumeRoleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssumeRoleRequest instance.
 */
AssumeRoleRequestPrivate::AssumeRoleRequestPrivate(
    const AssumeRoleRequestPrivate &other, AssumeRoleRequest * const q)
    : AssumeRolePrivate(other, q)
{

}

} // namespace STS
} // namespace AWS
