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

#include "liststackresourcesrequest.h"
#include "liststackresourcesrequest_p.h"
#include "liststackresourcesresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/**
 * @class  ListStackResourcesRequest
 *
 * @brief  Implements CloudFormation ListStackResources requests.
 *
 * @see    CloudFormationClient::listStackResources
 */

/**
 * @brief  Constructs a new ListStackResourcesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListStackResourcesRequest::ListStackResourcesRequest(const ListStackResourcesRequest &other)
    : CloudFormationRequest(new ListStackResourcesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListStackResourcesRequest object.
 */
ListStackResourcesRequest::ListStackResourcesRequest()
    : CloudFormationRequest(new ListStackResourcesRequestPrivate(CloudFormationRequest::ListStackResourcesAction, this))
{

}

bool ListStackResourcesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListStackResourcesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListStackResourcesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
AwsAbstractResponse * ListStackResourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListStackResourcesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListStackResourcesRequestPrivate
 *
 * @brief  Private implementation for ListStackResourcesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListStackResourcesRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public ListStackResourcesRequest instance.
 */
ListStackResourcesRequestPrivate::ListStackResourcesRequestPrivate(
    const CloudFormationRequest::Action action, ListStackResourcesRequest * const q)
    : ListStackResourcesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListStackResourcesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListStackResourcesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListStackResourcesRequest instance.
 */
ListStackResourcesRequestPrivate::ListStackResourcesRequestPrivate(
    const ListStackResourcesRequestPrivate &other, ListStackResourcesRequest * const q)
    : ListStackResourcesPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
