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

#include "listeventsourcemappingsrequest.h"
#include "listeventsourcemappingsrequest_p.h"
#include "listeventsourcemappingsresponse.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/**
 * @class  ListEventSourceMappingsRequest
 *
 * @brief  Implements Lambda ListEventSourceMappings requests.
 *
 * @see    LambdaClient::listEventSourceMappings
 */

/**
 * @brief  Constructs a new ListEventSourceMappingsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListEventSourceMappingsRequest::ListEventSourceMappingsRequest(const ListEventSourceMappingsRequest &other)
    : LambdaRequest(new ListEventSourceMappingsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListEventSourceMappingsRequest object.
 */
ListEventSourceMappingsRequest::ListEventSourceMappingsRequest()
    : LambdaRequest(new ListEventSourceMappingsRequestPrivate(LambdaRequest::ListEventSourceMappingsAction, this))
{

}

bool ListEventSourceMappingsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListEventSourceMappingsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListEventSourceMappingsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LambdaClient::send
 */
AwsAbstractResponse * ListEventSourceMappingsRequest::response(QNetworkReply * const reply) const
{
    return new ListEventSourceMappingsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListEventSourceMappingsRequestPrivate
 *
 * @brief  Private implementation for ListEventSourceMappingsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListEventSourceMappingsRequestPrivate object.
 *
 * @param  action  Lambda action being performed.
 * @param  q       Pointer to this object's public ListEventSourceMappingsRequest instance.
 */
ListEventSourceMappingsRequestPrivate::ListEventSourceMappingsRequestPrivate(
    const LambdaRequest::Action action, ListEventSourceMappingsRequest * const q)
    : ListEventSourceMappingsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListEventSourceMappingsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListEventSourceMappingsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListEventSourceMappingsRequest instance.
 */
ListEventSourceMappingsRequestPrivate::ListEventSourceMappingsRequestPrivate(
    const ListEventSourceMappingsRequestPrivate &other, ListEventSourceMappingsRequest * const q)
    : ListEventSourceMappingsPrivate(other, q)
{

}

} // namespace Lambda
} // namespace QtAws
