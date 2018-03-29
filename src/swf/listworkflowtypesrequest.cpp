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

#include "listworkflowtypesrequest.h"
#include "listworkflowtypesrequest_p.h"
#include "listworkflowtypesresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace SWF {

/**
 * @class  ListWorkflowTypesRequest
 *
 * @brief  Implements SWF ListWorkflowTypes requests.
 *
 * @see    SWFClient::listWorkflowTypes
 */

/**
 * @brief  Constructs a new ListWorkflowTypesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListWorkflowTypesRequest::ListWorkflowTypesRequest(const ListWorkflowTypesRequest &other)
    : SWFRequest(new ListWorkflowTypesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListWorkflowTypesRequest object.
 */
ListWorkflowTypesRequest::ListWorkflowTypesRequest()
    : SWFRequest(new ListWorkflowTypesRequestPrivate(SWFRequest::ListWorkflowTypesAction, this))
{

}

bool ListWorkflowTypesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListWorkflowTypesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListWorkflowTypesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SWFClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWorkflowTypesRequest::response(QNetworkReply * const reply) const
{
    return new ListWorkflowTypesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListWorkflowTypesRequestPrivate
 *
 * @brief  Private implementation for ListWorkflowTypesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListWorkflowTypesRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public ListWorkflowTypesRequest instance.
 */
ListWorkflowTypesRequestPrivate::ListWorkflowTypesRequestPrivate(
    const SWFRequest::Action action, ListWorkflowTypesRequest * const q)
    : ListWorkflowTypesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListWorkflowTypesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListWorkflowTypesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListWorkflowTypesRequest instance.
 */
ListWorkflowTypesRequestPrivate::ListWorkflowTypesRequestPrivate(
    const ListWorkflowTypesRequestPrivate &other, ListWorkflowTypesRequest * const q)
    : ListWorkflowTypesPrivate(other, q)
{

}

} // namespace SWF
} // namespace QtAws
