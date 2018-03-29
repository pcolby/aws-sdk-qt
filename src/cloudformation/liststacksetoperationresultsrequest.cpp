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

#include "liststacksetoperationresultsrequest.h"
#include "liststacksetoperationresultsrequest_p.h"
#include "liststacksetoperationresultsresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/**
 * @class  ListStackSetOperationResultsRequest
 *
 * @brief  Implements CloudFormation ListStackSetOperationResults requests.
 *
 * @see    CloudFormationClient::listStackSetOperationResults
 */

/**
 * @brief  Constructs a new ListStackSetOperationResultsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListStackSetOperationResultsRequest::ListStackSetOperationResultsRequest(const ListStackSetOperationResultsRequest &other)
    : CloudFormationRequest(new ListStackSetOperationResultsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListStackSetOperationResultsRequest object.
 */
ListStackSetOperationResultsRequest::ListStackSetOperationResultsRequest()
    : CloudFormationRequest(new ListStackSetOperationResultsRequestPrivate(CloudFormationRequest::ListStackSetOperationResultsAction, this))
{

}

bool ListStackSetOperationResultsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListStackSetOperationResultsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListStackSetOperationResultsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStackSetOperationResultsRequest::response(QNetworkReply * const reply) const
{
    return new ListStackSetOperationResultsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListStackSetOperationResultsRequestPrivate
 *
 * @brief  Private implementation for ListStackSetOperationResultsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListStackSetOperationResultsRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public ListStackSetOperationResultsRequest instance.
 */
ListStackSetOperationResultsRequestPrivate::ListStackSetOperationResultsRequestPrivate(
    const CloudFormationRequest::Action action, ListStackSetOperationResultsRequest * const q)
    : ListStackSetOperationResultsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListStackSetOperationResultsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListStackSetOperationResultsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListStackSetOperationResultsRequest instance.
 */
ListStackSetOperationResultsRequestPrivate::ListStackSetOperationResultsRequestPrivate(
    const ListStackSetOperationResultsRequestPrivate &other, ListStackSetOperationResultsRequest * const q)
    : ListStackSetOperationResultsPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
