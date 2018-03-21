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

#include "describeinputsecuritygrouprequest.h"
#include "describeinputsecuritygrouprequest_p.h"
#include "describeinputsecuritygroupresponse.h"
#include "medialiverequest_p.h"

namespace AWS {
namespace MediaLive {

/**
 * @class  DescribeInputSecurityGroupRequest
 *
 * @brief  Implements MediaLive DescribeInputSecurityGroup requests.
 *
 * @see    MediaLiveClient::describeInputSecurityGroup
 */

/**
 * @brief  Constructs a new DescribeInputSecurityGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeInputSecurityGroupResponse::DescribeInputSecurityGroupResponse(

/**
 * @brief  Constructs a new DescribeInputSecurityGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeInputSecurityGroupRequest::DescribeInputSecurityGroupRequest(const DescribeInputSecurityGroupRequest &other)
    : MediaLiveRequest(new DescribeInputSecurityGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeInputSecurityGroupRequest object.
 */
DescribeInputSecurityGroupRequest::DescribeInputSecurityGroupRequest()
    : MediaLiveRequest(new DescribeInputSecurityGroupRequestPrivate(MediaLiveRequest::DescribeInputSecurityGroupAction, this))
{

}

bool DescribeInputSecurityGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeInputSecurityGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeInputSecurityGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaLiveClient::send
 */
AwsAbstractResponse * DescribeInputSecurityGroupRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInputSecurityGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeInputSecurityGroupRequestPrivate
 *
 * @brief  Private implementation for DescribeInputSecurityGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInputSecurityGroupRequestPrivate object.
 *
 * @param  action  MediaLive action being performed.
 * @param  q       Pointer to this object's public DescribeInputSecurityGroupRequest instance.
 */
DescribeInputSecurityGroupRequestPrivate::DescribeInputSecurityGroupRequestPrivate(
    const MediaLiveRequest::Action action, DescribeInputSecurityGroupRequest * const q)
    : DescribeInputSecurityGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInputSecurityGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeInputSecurityGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeInputSecurityGroupRequest instance.
 */
DescribeInputSecurityGroupRequestPrivate::DescribeInputSecurityGroupRequestPrivate(
    const DescribeInputSecurityGroupRequestPrivate &other, DescribeInputSecurityGroupRequest * const q)
    : DescribeInputSecurityGroupPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace AWS
