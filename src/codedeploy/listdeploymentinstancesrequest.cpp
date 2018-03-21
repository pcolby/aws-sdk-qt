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

#include "listdeploymentinstancesrequest.h"
#include "listdeploymentinstancesrequest_p.h"
#include "listdeploymentinstancesresponse.h"
#include "codedeployrequest_p.h"

namespace AWS {
namespace CodeDeploy {

/**
 * @class  ListDeploymentInstancesRequest
 *
 * @brief  Implements CodeDeploy ListDeploymentInstances requests.
 *
 * @see    CodeDeployClient::listDeploymentInstances
 */

/**
 * @brief  Constructs a new ListDeploymentInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDeploymentInstancesResponse::ListDeploymentInstancesResponse(

/**
 * @brief  Constructs a new ListDeploymentInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListDeploymentInstancesRequest::ListDeploymentInstancesRequest(const ListDeploymentInstancesRequest &other)
    : CodeDeployRequest(new ListDeploymentInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListDeploymentInstancesRequest object.
 */
ListDeploymentInstancesRequest::ListDeploymentInstancesRequest()
    : CodeDeployRequest(new ListDeploymentInstancesRequestPrivate(CodeDeployRequest::ListDeploymentInstancesAction, this))
{

}

bool ListDeploymentInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListDeploymentInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListDeploymentInstancesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
AwsAbstractResponse * ListDeploymentInstancesRequest::response(QNetworkReply * const reply) const
{
    return new ListDeploymentInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListDeploymentInstancesRequestPrivate
 *
 * @brief  Private implementation for ListDeploymentInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDeploymentInstancesRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public ListDeploymentInstancesRequest instance.
 */
ListDeploymentInstancesRequestPrivate::ListDeploymentInstancesRequestPrivate(
    const CodeDeployRequest::Action action, ListDeploymentInstancesRequest * const q)
    : ListDeploymentInstancesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListDeploymentInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListDeploymentInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListDeploymentInstancesRequest instance.
 */
ListDeploymentInstancesRequestPrivate::ListDeploymentInstancesRequestPrivate(
    const ListDeploymentInstancesRequestPrivate &other, ListDeploymentInstancesRequest * const q)
    : ListDeploymentInstancesPrivate(other, q)
{

}
