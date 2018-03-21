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

#include "listclosedworkflowexecutionsrequest.h"
#include "listclosedworkflowexecutionsrequest_p.h"
#include "listclosedworkflowexecutionsresponse.h"
#include "swfrequest_p.h"

namespace AWS {
namespace SWF {

/**
 * @class  ListClosedWorkflowExecutionsRequest
 *
 * @brief  Implements SWF ListClosedWorkflowExecutions requests.
 *
 * @see    SWFClient::listClosedWorkflowExecutions
 */

/**
 * @brief  Constructs a new ListClosedWorkflowExecutionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListClosedWorkflowExecutionsRequest::ListClosedWorkflowExecutionsRequest(const ListClosedWorkflowExecutionsRequest &other)
    : SWFRequest(new ListClosedWorkflowExecutionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListClosedWorkflowExecutionsRequest object.
 */
ListClosedWorkflowExecutionsRequest::ListClosedWorkflowExecutionsRequest()
    : SWFRequest(new ListClosedWorkflowExecutionsRequestPrivate(SWFRequest::ListClosedWorkflowExecutionsAction, this))
{

}

bool ListClosedWorkflowExecutionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListClosedWorkflowExecutionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListClosedWorkflowExecutionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SWFClient::send
 */
AwsAbstractResponse * ListClosedWorkflowExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new ListClosedWorkflowExecutionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListClosedWorkflowExecutionsRequestPrivate
 *
 * @brief  Private implementation for ListClosedWorkflowExecutionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListClosedWorkflowExecutionsRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public ListClosedWorkflowExecutionsRequest instance.
 */
ListClosedWorkflowExecutionsRequestPrivate::ListClosedWorkflowExecutionsRequestPrivate(
    const SWFRequest::Action action, ListClosedWorkflowExecutionsRequest * const q)
    : ListClosedWorkflowExecutionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListClosedWorkflowExecutionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListClosedWorkflowExecutionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListClosedWorkflowExecutionsRequest instance.
 */
ListClosedWorkflowExecutionsRequestPrivate::ListClosedWorkflowExecutionsRequestPrivate(
    const ListClosedWorkflowExecutionsRequestPrivate &other, ListClosedWorkflowExecutionsRequest * const q)
    : ListClosedWorkflowExecutionsPrivate(other, q)
{

}

} // namespace SWF
} // namespace AWS
