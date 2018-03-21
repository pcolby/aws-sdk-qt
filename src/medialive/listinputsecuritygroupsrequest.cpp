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

#include "listinputsecuritygroupsrequest.h"
#include "listinputsecuritygroupsrequest_p.h"
#include "listinputsecuritygroupsresponse.h"
#include "medialiverequest_p.h"

namespace AWS {
namespace MediaLive {

/**
 * @class  ListInputSecurityGroupsRequest
 *
 * @brief  Implements MediaLive ListInputSecurityGroups requests.
 *
 * @see    MediaLiveClient::listInputSecurityGroups
 */

/**
 * @brief  Constructs a new ListInputSecurityGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListInputSecurityGroupsResponse::ListInputSecurityGroupsResponse(

/**
 * @brief  Constructs a new ListInputSecurityGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListInputSecurityGroupsRequest::ListInputSecurityGroupsRequest(const ListInputSecurityGroupsRequest &other)
    : MediaLiveRequest(new ListInputSecurityGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListInputSecurityGroupsRequest object.
 */
ListInputSecurityGroupsRequest::ListInputSecurityGroupsRequest()
    : MediaLiveRequest(new ListInputSecurityGroupsRequestPrivate(MediaLiveRequest::ListInputSecurityGroupsAction, this))
{

}

bool ListInputSecurityGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListInputSecurityGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListInputSecurityGroupsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaLiveClient::send
 */
AwsAbstractResponse * ListInputSecurityGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListInputSecurityGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListInputSecurityGroupsRequestPrivate
 *
 * @brief  Private implementation for ListInputSecurityGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListInputSecurityGroupsRequestPrivate object.
 *
 * @param  action  MediaLive action being performed.
 * @param  q       Pointer to this object's public ListInputSecurityGroupsRequest instance.
 */
ListInputSecurityGroupsRequestPrivate::ListInputSecurityGroupsRequestPrivate(
    const MediaLiveRequest::Action action, ListInputSecurityGroupsRequest * const q)
    : ListInputSecurityGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListInputSecurityGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListInputSecurityGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListInputSecurityGroupsRequest instance.
 */
ListInputSecurityGroupsRequestPrivate::ListInputSecurityGroupsRequestPrivate(
    const ListInputSecurityGroupsRequestPrivate &other, ListInputSecurityGroupsRequest * const q)
    : ListInputSecurityGroupsPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace AWS
