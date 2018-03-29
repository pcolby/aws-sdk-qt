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

#include "listqueryexecutionsrequest.h"
#include "listqueryexecutionsrequest_p.h"
#include "listqueryexecutionsresponse.h"
#include "athenarequest_p.h"

namespace AWS {
namespace Athena {

/**
 * @class  ListQueryExecutionsRequest
 *
 * @brief  Implements Athena ListQueryExecutions requests.
 *
 * @see    AthenaClient::listQueryExecutions
 */

/**
 * @brief  Constructs a new ListQueryExecutionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListQueryExecutionsRequest::ListQueryExecutionsRequest(const ListQueryExecutionsRequest &other)
    : AthenaRequest(new ListQueryExecutionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListQueryExecutionsRequest object.
 */
ListQueryExecutionsRequest::ListQueryExecutionsRequest()
    : AthenaRequest(new ListQueryExecutionsRequestPrivate(AthenaRequest::ListQueryExecutionsAction, this))
{

}

bool ListQueryExecutionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListQueryExecutionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListQueryExecutionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AthenaClient::send
 */
AwsAbstractResponse * ListQueryExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new ListQueryExecutionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListQueryExecutionsRequestPrivate
 *
 * @brief  Private implementation for ListQueryExecutionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListQueryExecutionsRequestPrivate object.
 *
 * @param  action  Athena action being performed.
 * @param  q       Pointer to this object's public ListQueryExecutionsRequest instance.
 */
ListQueryExecutionsRequestPrivate::ListQueryExecutionsRequestPrivate(
    const AthenaRequest::Action action, ListQueryExecutionsRequest * const q)
    : ListQueryExecutionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListQueryExecutionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListQueryExecutionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListQueryExecutionsRequest instance.
 */
ListQueryExecutionsRequestPrivate::ListQueryExecutionsRequestPrivate(
    const ListQueryExecutionsRequestPrivate &other, ListQueryExecutionsRequest * const q)
    : ListQueryExecutionsPrivate(other, q)
{

}

} // namespace Athena
} // namespace AWS
