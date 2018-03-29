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

#include "liststacksetoperationsrequest.h"
#include "liststacksetoperationsrequest_p.h"
#include "liststacksetoperationsresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/**
 * @class  ListStackSetOperationsRequest
 *
 * @brief  Implements CloudFormation ListStackSetOperations requests.
 *
 * @see    CloudFormationClient::listStackSetOperations
 */

/**
 * @brief  Constructs a new ListStackSetOperationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListStackSetOperationsRequest::ListStackSetOperationsRequest(const ListStackSetOperationsRequest &other)
    : CloudFormationRequest(new ListStackSetOperationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListStackSetOperationsRequest object.
 */
ListStackSetOperationsRequest::ListStackSetOperationsRequest()
    : CloudFormationRequest(new ListStackSetOperationsRequestPrivate(CloudFormationRequest::ListStackSetOperationsAction, this))
{

}

bool ListStackSetOperationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListStackSetOperationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListStackSetOperationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
AwsAbstractResponse * ListStackSetOperationsRequest::response(QNetworkReply * const reply) const
{
    return new ListStackSetOperationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListStackSetOperationsRequestPrivate
 *
 * @brief  Private implementation for ListStackSetOperationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListStackSetOperationsRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public ListStackSetOperationsRequest instance.
 */
ListStackSetOperationsRequestPrivate::ListStackSetOperationsRequestPrivate(
    const CloudFormationRequest::Action action, ListStackSetOperationsRequest * const q)
    : ListStackSetOperationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListStackSetOperationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListStackSetOperationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListStackSetOperationsRequest instance.
 */
ListStackSetOperationsRequestPrivate::ListStackSetOperationsRequestPrivate(
    const ListStackSetOperationsRequestPrivate &other, ListStackSetOperationsRequest * const q)
    : ListStackSetOperationsPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
