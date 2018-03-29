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

#include "listqueryloggingconfigsrequest.h"
#include "listqueryloggingconfigsrequest_p.h"
#include "listqueryloggingconfigsresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/**
 * @class  ListQueryLoggingConfigsRequest
 *
 * @brief  Implements Route53 ListQueryLoggingConfigs requests.
 *
 * @see    Route53Client::listQueryLoggingConfigs
 */

/**
 * @brief  Constructs a new ListQueryLoggingConfigsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListQueryLoggingConfigsRequest::ListQueryLoggingConfigsRequest(const ListQueryLoggingConfigsRequest &other)
    : Route53Request(new ListQueryLoggingConfigsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListQueryLoggingConfigsRequest object.
 */
ListQueryLoggingConfigsRequest::ListQueryLoggingConfigsRequest()
    : Route53Request(new ListQueryLoggingConfigsRequestPrivate(Route53Request::ListQueryLoggingConfigsAction, this))
{

}

bool ListQueryLoggingConfigsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListQueryLoggingConfigsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListQueryLoggingConfigsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * ListQueryLoggingConfigsRequest::response(QNetworkReply * const reply) const
{
    return new ListQueryLoggingConfigsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListQueryLoggingConfigsRequestPrivate
 *
 * @brief  Private implementation for ListQueryLoggingConfigsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListQueryLoggingConfigsRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public ListQueryLoggingConfigsRequest instance.
 */
ListQueryLoggingConfigsRequestPrivate::ListQueryLoggingConfigsRequestPrivate(
    const Route53Request::Action action, ListQueryLoggingConfigsRequest * const q)
    : ListQueryLoggingConfigsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListQueryLoggingConfigsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListQueryLoggingConfigsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListQueryLoggingConfigsRequest instance.
 */
ListQueryLoggingConfigsRequestPrivate::ListQueryLoggingConfigsRequestPrivate(
    const ListQueryLoggingConfigsRequestPrivate &other, ListQueryLoggingConfigsRequest * const q)
    : ListQueryLoggingConfigsPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
