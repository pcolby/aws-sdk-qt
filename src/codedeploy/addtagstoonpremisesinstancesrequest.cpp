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

#include "addtagstoonpremisesinstancesrequest.h"
#include "addtagstoonpremisesinstancesrequest_p.h"
#include "addtagstoonpremisesinstancesresponse.h"
#include "codedeployrequest_p.h"

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  AddTagsToOnPremisesInstancesRequest
 *
 * @brief  Implements CodeDeploy AddTagsToOnPremisesInstances requests.
 *
 * @see    CodeDeployClient::addTagsToOnPremisesInstances
 */

/**
 * @brief  Constructs a new AddTagsToOnPremisesInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddTagsToOnPremisesInstancesRequest::AddTagsToOnPremisesInstancesRequest(const AddTagsToOnPremisesInstancesRequest &other)
    : CodeDeployRequest(new AddTagsToOnPremisesInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddTagsToOnPremisesInstancesRequest object.
 */
AddTagsToOnPremisesInstancesRequest::AddTagsToOnPremisesInstancesRequest()
    : CodeDeployRequest(new AddTagsToOnPremisesInstancesRequestPrivate(CodeDeployRequest::AddTagsToOnPremisesInstancesAction, this))
{

}

bool AddTagsToOnPremisesInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddTagsToOnPremisesInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddTagsToOnPremisesInstancesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
QtAws::Core::AwsAbstractResponse * AddTagsToOnPremisesInstancesRequest::response(QNetworkReply * const reply) const
{
    return new AddTagsToOnPremisesInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddTagsToOnPremisesInstancesRequestPrivate
 *
 * @brief  Private implementation for AddTagsToOnPremisesInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddTagsToOnPremisesInstancesRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public AddTagsToOnPremisesInstancesRequest instance.
 */
AddTagsToOnPremisesInstancesRequestPrivate::AddTagsToOnPremisesInstancesRequestPrivate(
    const CodeDeployRequest::Action action, AddTagsToOnPremisesInstancesRequest * const q)
    : CodeDeployRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddTagsToOnPremisesInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddTagsToOnPremisesInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddTagsToOnPremisesInstancesRequest instance.
 */
AddTagsToOnPremisesInstancesRequestPrivate::AddTagsToOnPremisesInstancesRequestPrivate(
    const AddTagsToOnPremisesInstancesRequestPrivate &other, AddTagsToOnPremisesInstancesRequest * const q)
    : CodeDeployRequestPrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace QtAws
