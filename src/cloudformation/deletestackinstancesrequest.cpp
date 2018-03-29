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

#include "deletestackinstancesrequest.h"
#include "deletestackinstancesrequest_p.h"
#include "deletestackinstancesresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/**
 * @class  DeleteStackInstancesRequest
 *
 * @brief  Implements CloudFormation DeleteStackInstances requests.
 *
 * @see    CloudFormationClient::deleteStackInstances
 */

/**
 * @brief  Constructs a new DeleteStackInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteStackInstancesRequest::DeleteStackInstancesRequest(const DeleteStackInstancesRequest &other)
    : CloudFormationRequest(new DeleteStackInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteStackInstancesRequest object.
 */
DeleteStackInstancesRequest::DeleteStackInstancesRequest()
    : CloudFormationRequest(new DeleteStackInstancesRequestPrivate(CloudFormationRequest::DeleteStackInstancesAction, this))
{

}

bool DeleteStackInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteStackInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteStackInstancesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStackInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStackInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteStackInstancesRequestPrivate
 *
 * @brief  Private implementation for DeleteStackInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteStackInstancesRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public DeleteStackInstancesRequest instance.
 */
DeleteStackInstancesRequestPrivate::DeleteStackInstancesRequestPrivate(
    const CloudFormationRequest::Action action, DeleteStackInstancesRequest * const q)
    : DeleteStackInstancesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteStackInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteStackInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteStackInstancesRequest instance.
 */
DeleteStackInstancesRequestPrivate::DeleteStackInstancesRequestPrivate(
    const DeleteStackInstancesRequestPrivate &other, DeleteStackInstancesRequest * const q)
    : DeleteStackInstancesPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
