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

#include "listnamedqueriesrequest.h"
#include "listnamedqueriesrequest_p.h"
#include "listnamedqueriesresponse.h"
#include "athenarequest_p.h"

namespace QtAws {
namespace Athena {

/**
 * @class  ListNamedQueriesRequest
 *
 * @brief  Implements Athena ListNamedQueries requests.
 *
 * @see    AthenaClient::listNamedQueries
 */

/**
 * @brief  Constructs a new ListNamedQueriesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListNamedQueriesRequest::ListNamedQueriesRequest(const ListNamedQueriesRequest &other)
    : AthenaRequest(new ListNamedQueriesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListNamedQueriesRequest object.
 */
ListNamedQueriesRequest::ListNamedQueriesRequest()
    : AthenaRequest(new ListNamedQueriesRequestPrivate(AthenaRequest::ListNamedQueriesAction, this))
{

}

bool ListNamedQueriesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListNamedQueriesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListNamedQueriesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AthenaClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNamedQueriesRequest::response(QNetworkReply * const reply) const
{
    return new ListNamedQueriesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListNamedQueriesRequestPrivate
 *
 * @brief  Private implementation for ListNamedQueriesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListNamedQueriesRequestPrivate object.
 *
 * @param  action  Athena action being performed.
 * @param  q       Pointer to this object's public ListNamedQueriesRequest instance.
 */
ListNamedQueriesRequestPrivate::ListNamedQueriesRequestPrivate(
    const AthenaRequest::Action action, ListNamedQueriesRequest * const q)
    : AthenaRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListNamedQueriesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListNamedQueriesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListNamedQueriesRequest instance.
 */
ListNamedQueriesRequestPrivate::ListNamedQueriesRequestPrivate(
    const ListNamedQueriesRequestPrivate &other, ListNamedQueriesRequest * const q)
    : AthenaRequestPrivate(other, q)
{

}

} // namespace Athena
} // namespace QtAws
