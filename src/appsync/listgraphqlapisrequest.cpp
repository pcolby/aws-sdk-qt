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

#include "listgraphqlapisrequest.h"
#include "listgraphqlapisrequest_p.h"
#include "listgraphqlapisresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/**
 * @class  ListGraphqlApisRequest
 *
 * @brief  Implements AppSync ListGraphqlApis requests.
 *
 * @see    AppSyncClient::listGraphqlApis
 */

/**
 * @brief  Constructs a new ListGraphqlApisRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListGraphqlApisRequest::ListGraphqlApisRequest(const ListGraphqlApisRequest &other)
    : AppSyncRequest(new ListGraphqlApisRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListGraphqlApisRequest object.
 */
ListGraphqlApisRequest::ListGraphqlApisRequest()
    : AppSyncRequest(new ListGraphqlApisRequestPrivate(AppSyncRequest::ListGraphqlApisAction, this))
{

}

bool ListGraphqlApisRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListGraphqlApisResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListGraphqlApisResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AppSyncClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGraphqlApisRequest::response(QNetworkReply * const reply) const
{
    return new ListGraphqlApisResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListGraphqlApisRequestPrivate
 *
 * @brief  Private implementation for ListGraphqlApisRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGraphqlApisRequestPrivate object.
 *
 * @param  action  AppSync action being performed.
 * @param  q       Pointer to this object's public ListGraphqlApisRequest instance.
 */
ListGraphqlApisRequestPrivate::ListGraphqlApisRequestPrivate(
    const AppSyncRequest::Action action, ListGraphqlApisRequest * const q)
    : ListGraphqlApisPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListGraphqlApisRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListGraphqlApisRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListGraphqlApisRequest instance.
 */
ListGraphqlApisRequestPrivate::ListGraphqlApisRequestPrivate(
    const ListGraphqlApisRequestPrivate &other, ListGraphqlApisRequest * const q)
    : ListGraphqlApisPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
