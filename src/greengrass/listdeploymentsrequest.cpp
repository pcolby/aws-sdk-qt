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

#include "listdeploymentsrequest.h"
#include "listdeploymentsrequest_p.h"
#include "listdeploymentsresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  ListDeploymentsRequest
 *
 * @brief  Implements Greengrass ListDeployments requests.
 *
 * @see    GreengrassClient::listDeployments
 */

/**
 * @brief  Constructs a new ListDeploymentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDeploymentsResponse::ListDeploymentsResponse(

/**
 * @brief  Constructs a new ListDeploymentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListDeploymentsRequest::ListDeploymentsRequest(const ListDeploymentsRequest &other)
    : GreengrassRequest(new ListDeploymentsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListDeploymentsRequest object.
 */
ListDeploymentsRequest::ListDeploymentsRequest()
    : GreengrassRequest(new ListDeploymentsRequestPrivate(GreengrassRequest::ListDeploymentsAction, this))
{

}

bool ListDeploymentsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListDeploymentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListDeploymentsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * ListDeploymentsRequest::response(QNetworkReply * const reply) const
{
    return new ListDeploymentsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListDeploymentsRequestPrivate
 *
 * @brief  Private implementation for ListDeploymentsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDeploymentsRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public ListDeploymentsRequest instance.
 */
ListDeploymentsRequestPrivate::ListDeploymentsRequestPrivate(
    const GreengrassRequest::Action action, ListDeploymentsRequest * const q)
    : ListDeploymentsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListDeploymentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListDeploymentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListDeploymentsRequest instance.
 */
ListDeploymentsRequestPrivate::ListDeploymentsRequestPrivate(
    const ListDeploymentsRequestPrivate &other, ListDeploymentsRequest * const q)
    : ListDeploymentsPrivate(other, q)
{

}
