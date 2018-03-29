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

#include "deletestacksetrequest.h"
#include "deletestacksetrequest_p.h"
#include "deletestacksetresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/**
 * @class  DeleteStackSetRequest
 *
 * @brief  Implements CloudFormation DeleteStackSet requests.
 *
 * @see    CloudFormationClient::deleteStackSet
 */

/**
 * @brief  Constructs a new DeleteStackSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteStackSetRequest::DeleteStackSetRequest(const DeleteStackSetRequest &other)
    : CloudFormationRequest(new DeleteStackSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteStackSetRequest object.
 */
DeleteStackSetRequest::DeleteStackSetRequest()
    : CloudFormationRequest(new DeleteStackSetRequestPrivate(CloudFormationRequest::DeleteStackSetAction, this))
{

}

bool DeleteStackSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteStackSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteStackSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
AwsAbstractResponse * DeleteStackSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStackSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteStackSetRequestPrivate
 *
 * @brief  Private implementation for DeleteStackSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteStackSetRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public DeleteStackSetRequest instance.
 */
DeleteStackSetRequestPrivate::DeleteStackSetRequestPrivate(
    const CloudFormationRequest::Action action, DeleteStackSetRequest * const q)
    : DeleteStackSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteStackSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteStackSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteStackSetRequest instance.
 */
DeleteStackSetRequestPrivate::DeleteStackSetRequestPrivate(
    const DeleteStackSetRequestPrivate &other, DeleteStackSetRequest * const q)
    : DeleteStackSetPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
