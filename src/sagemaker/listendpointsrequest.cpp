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

#include "listendpointsrequest.h"
#include "listendpointsrequest_p.h"
#include "listendpointsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/**
 * @class  ListEndpointsRequest
 *
 * @brief  Implements SageMaker ListEndpoints requests.
 *
 * @see    SageMakerClient::listEndpoints
 */

/**
 * @brief  Constructs a new ListEndpointsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListEndpointsRequest::ListEndpointsRequest(const ListEndpointsRequest &other)
    : SageMakerRequest(new ListEndpointsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListEndpointsRequest object.
 */
ListEndpointsRequest::ListEndpointsRequest()
    : SageMakerRequest(new ListEndpointsRequestPrivate(SageMakerRequest::ListEndpointsAction, this))
{

}

bool ListEndpointsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListEndpointsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListEndpointsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEndpointsRequest::response(QNetworkReply * const reply) const
{
    return new ListEndpointsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListEndpointsRequestPrivate
 *
 * @brief  Private implementation for ListEndpointsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListEndpointsRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public ListEndpointsRequest instance.
 */
ListEndpointsRequestPrivate::ListEndpointsRequestPrivate(
    const SageMakerRequest::Action action, ListEndpointsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListEndpointsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListEndpointsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListEndpointsRequest instance.
 */
ListEndpointsRequestPrivate::ListEndpointsRequestPrivate(
    const ListEndpointsRequestPrivate &other, ListEndpointsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
