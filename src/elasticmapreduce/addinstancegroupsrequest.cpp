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

#include "addinstancegroupsrequest.h"
#include "addinstancegroupsrequest_p.h"
#include "addinstancegroupsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/**
 * @class  AddInstanceGroupsRequest
 *
 * @brief  Implements EMR AddInstanceGroups requests.
 *
 * @see    EMRClient::addInstanceGroups
 */

/**
 * @brief  Constructs a new AddInstanceGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddInstanceGroupsRequest::AddInstanceGroupsRequest(const AddInstanceGroupsRequest &other)
    : EMRRequest(new AddInstanceGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddInstanceGroupsRequest object.
 */
AddInstanceGroupsRequest::AddInstanceGroupsRequest()
    : EMRRequest(new AddInstanceGroupsRequestPrivate(EMRRequest::AddInstanceGroupsAction, this))
{

}

bool AddInstanceGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddInstanceGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddInstanceGroupsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EMRClient::send
 */
AwsAbstractResponse * AddInstanceGroupsRequest::response(QNetworkReply * const reply) const
{
    return new AddInstanceGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddInstanceGroupsRequestPrivate
 *
 * @brief  Private implementation for AddInstanceGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddInstanceGroupsRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public AddInstanceGroupsRequest instance.
 */
AddInstanceGroupsRequestPrivate::AddInstanceGroupsRequestPrivate(
    const EMRRequest::Action action, AddInstanceGroupsRequest * const q)
    : AddInstanceGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddInstanceGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddInstanceGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddInstanceGroupsRequest instance.
 */
AddInstanceGroupsRequestPrivate::AddInstanceGroupsRequestPrivate(
    const AddInstanceGroupsRequestPrivate &other, AddInstanceGroupsRequest * const q)
    : AddInstanceGroupsPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
