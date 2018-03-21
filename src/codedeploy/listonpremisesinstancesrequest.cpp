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

#include "listonpremisesinstancesrequest.h"
#include "listonpremisesinstancesrequest_p.h"
#include "listonpremisesinstancesresponse.h"
#include "codedeployrequest_p.h"

namespace AWS {
namespace CodeDeploy {

/**
 * @class  ListOnPremisesInstancesRequest
 *
 * @brief  Implements CodeDeploy ListOnPremisesInstances requests.
 *
 * @see    CodeDeployClient::listOnPremisesInstances
 */

/**
 * @brief  Constructs a new ListOnPremisesInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListOnPremisesInstancesResponse::ListOnPremisesInstancesResponse(

/**
 * @brief  Constructs a new ListOnPremisesInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListOnPremisesInstancesRequest::ListOnPremisesInstancesRequest(const ListOnPremisesInstancesRequest &other)
    : CodeDeployRequest(new ListOnPremisesInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListOnPremisesInstancesRequest object.
 */
ListOnPremisesInstancesRequest::ListOnPremisesInstancesRequest()
    : CodeDeployRequest(new ListOnPremisesInstancesRequestPrivate(CodeDeployRequest::ListOnPremisesInstancesAction, this))
{

}

bool ListOnPremisesInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListOnPremisesInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListOnPremisesInstancesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
AwsAbstractResponse * ListOnPremisesInstancesRequest::response(QNetworkReply * const reply) const
{
    return new ListOnPremisesInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListOnPremisesInstancesRequestPrivate
 *
 * @brief  Private implementation for ListOnPremisesInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListOnPremisesInstancesRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public ListOnPremisesInstancesRequest instance.
 */
ListOnPremisesInstancesRequestPrivate::ListOnPremisesInstancesRequestPrivate(
    const CodeDeployRequest::Action action, ListOnPremisesInstancesRequest * const q)
    : ListOnPremisesInstancesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListOnPremisesInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListOnPremisesInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListOnPremisesInstancesRequest instance.
 */
ListOnPremisesInstancesRequestPrivate::ListOnPremisesInstancesRequestPrivate(
    const ListOnPremisesInstancesRequestPrivate &other, ListOnPremisesInstancesRequest * const q)
    : ListOnPremisesInstancesPrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace AWS
