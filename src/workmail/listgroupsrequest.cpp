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

#include "listgroupsrequest.h"
#include "listgroupsrequest_p.h"
#include "listgroupsresponse.h"
#include "workmailrequest_p.h"

namespace QtAws {
namespace WorkMail {

/**
 * @class  ListGroupsRequest
 *
 * @brief  Implements WorkMail ListGroups requests.
 *
 * @see    WorkMailClient::listGroups
 */

/**
 * @brief  Constructs a new ListGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListGroupsRequest::ListGroupsRequest(const ListGroupsRequest &other)
    : WorkMailRequest(new ListGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListGroupsRequest object.
 */
ListGroupsRequest::ListGroupsRequest()
    : WorkMailRequest(new ListGroupsRequestPrivate(WorkMailRequest::ListGroupsAction, this))
{

}

bool ListGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListGroupsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WorkMailClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListGroupsRequestPrivate
 *
 * @brief  Private implementation for ListGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGroupsRequestPrivate object.
 *
 * @param  action  WorkMail action being performed.
 * @param  q       Pointer to this object's public ListGroupsRequest instance.
 */
ListGroupsRequestPrivate::ListGroupsRequestPrivate(
    const WorkMailRequest::Action action, ListGroupsRequest * const q)
    : WorkMailRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListGroupsRequest instance.
 */
ListGroupsRequestPrivate::ListGroupsRequestPrivate(
    const ListGroupsRequestPrivate &other, ListGroupsRequest * const q)
    : WorkMailRequestPrivate(other, q)
{

}

} // namespace WorkMail
} // namespace QtAws
