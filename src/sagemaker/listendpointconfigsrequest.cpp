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

#include "listendpointconfigsrequest.h"
#include "listendpointconfigsrequest_p.h"
#include "listendpointconfigsresponse.h"
#include "sagemakerrequest_p.h"

namespace AWS {
namespace SageMaker {

/**
 * @class  ListEndpointConfigsRequest
 *
 * @brief  Implements SageMaker ListEndpointConfigs requests.
 *
 * @see    SageMakerClient::listEndpointConfigs
 */

/**
 * @brief  Constructs a new ListEndpointConfigsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListEndpointConfigsResponse::ListEndpointConfigsResponse(

/**
 * @brief  Constructs a new ListEndpointConfigsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListEndpointConfigsRequest::ListEndpointConfigsRequest(const ListEndpointConfigsRequest &other)
    : SageMakerRequest(new ListEndpointConfigsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListEndpointConfigsRequest object.
 */
ListEndpointConfigsRequest::ListEndpointConfigsRequest()
    : SageMakerRequest(new ListEndpointConfigsRequestPrivate(SageMakerRequest::ListEndpointConfigsAction, this))
{

}

bool ListEndpointConfigsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListEndpointConfigsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListEndpointConfigsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
AwsAbstractResponse * ListEndpointConfigsRequest::response(QNetworkReply * const reply) const
{
    return new ListEndpointConfigsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListEndpointConfigsRequestPrivate
 *
 * @brief  Private implementation for ListEndpointConfigsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListEndpointConfigsRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public ListEndpointConfigsRequest instance.
 */
ListEndpointConfigsRequestPrivate::ListEndpointConfigsRequestPrivate(
    const SageMakerRequest::Action action, ListEndpointConfigsRequest * const q)
    : ListEndpointConfigsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListEndpointConfigsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListEndpointConfigsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListEndpointConfigsRequest instance.
 */
ListEndpointConfigsRequestPrivate::ListEndpointConfigsRequestPrivate(
    const ListEndpointConfigsRequestPrivate &other, ListEndpointConfigsRequest * const q)
    : ListEndpointConfigsPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace AWS
