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

#include "createplacementgrouprequest.h"
#include "createplacementgrouprequest_p.h"
#include "createplacementgroupresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  CreatePlacementGroupRequest
 *
 * @brief  Implements EC2 CreatePlacementGroup requests.
 *
 * @see    EC2Client::createPlacementGroup
 */

/**
 * @brief  Constructs a new CreatePlacementGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreatePlacementGroupResponse::CreatePlacementGroupResponse(

/**
 * @brief  Constructs a new CreatePlacementGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreatePlacementGroupRequest::CreatePlacementGroupRequest(const CreatePlacementGroupRequest &other)
    : EC2Request(new CreatePlacementGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreatePlacementGroupRequest object.
 */
CreatePlacementGroupRequest::CreatePlacementGroupRequest()
    : EC2Request(new CreatePlacementGroupRequestPrivate(EC2Request::CreatePlacementGroupAction, this))
{

}

bool CreatePlacementGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreatePlacementGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreatePlacementGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * CreatePlacementGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreatePlacementGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreatePlacementGroupRequestPrivate
 *
 * @brief  Private implementation for CreatePlacementGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePlacementGroupRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CreatePlacementGroupRequest instance.
 */
CreatePlacementGroupRequestPrivate::CreatePlacementGroupRequestPrivate(
    const EC2Request::Action action, CreatePlacementGroupRequest * const q)
    : CreatePlacementGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreatePlacementGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreatePlacementGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreatePlacementGroupRequest instance.
 */
CreatePlacementGroupRequestPrivate::CreatePlacementGroupRequestPrivate(
    const CreatePlacementGroupRequestPrivate &other, CreatePlacementGroupRequest * const q)
    : CreatePlacementGroupPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
