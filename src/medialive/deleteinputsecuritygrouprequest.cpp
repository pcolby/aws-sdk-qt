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

#include "deleteinputsecuritygrouprequest.h"
#include "deleteinputsecuritygrouprequest_p.h"
#include "deleteinputsecuritygroupresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/**
 * @class  DeleteInputSecurityGroupRequest
 *
 * @brief  Implements MediaLive DeleteInputSecurityGroup requests.
 *
 * @see    MediaLiveClient::deleteInputSecurityGroup
 */

/**
 * @brief  Constructs a new DeleteInputSecurityGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteInputSecurityGroupRequest::DeleteInputSecurityGroupRequest(const DeleteInputSecurityGroupRequest &other)
    : MediaLiveRequest(new DeleteInputSecurityGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteInputSecurityGroupRequest object.
 */
DeleteInputSecurityGroupRequest::DeleteInputSecurityGroupRequest()
    : MediaLiveRequest(new DeleteInputSecurityGroupRequestPrivate(MediaLiveRequest::DeleteInputSecurityGroupAction, this))
{

}

bool DeleteInputSecurityGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteInputSecurityGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteInputSecurityGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaLiveClient::send
 */
AwsAbstractResponse * DeleteInputSecurityGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInputSecurityGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteInputSecurityGroupRequestPrivate
 *
 * @brief  Private implementation for DeleteInputSecurityGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteInputSecurityGroupRequestPrivate object.
 *
 * @param  action  MediaLive action being performed.
 * @param  q       Pointer to this object's public DeleteInputSecurityGroupRequest instance.
 */
DeleteInputSecurityGroupRequestPrivate::DeleteInputSecurityGroupRequestPrivate(
    const MediaLiveRequest::Action action, DeleteInputSecurityGroupRequest * const q)
    : DeleteInputSecurityGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteInputSecurityGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteInputSecurityGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteInputSecurityGroupRequest instance.
 */
DeleteInputSecurityGroupRequestPrivate::DeleteInputSecurityGroupRequestPrivate(
    const DeleteInputSecurityGroupRequestPrivate &other, DeleteInputSecurityGroupRequest * const q)
    : DeleteInputSecurityGroupPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
