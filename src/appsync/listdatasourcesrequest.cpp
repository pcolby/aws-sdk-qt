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

#include "listdatasourcesrequest.h"
#include "listdatasourcesrequest_p.h"
#include "listdatasourcesresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::ListDataSourcesRequest
 *
 * \brief The ListDataSourcesRequest class provides an interface for AppSync ListDataSources requests.
 *
 * \ingroup AppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::listDataSources
 */

/*!
 * @brief  Constructs a new ListDataSourcesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListDataSourcesRequest::ListDataSourcesRequest(const ListDataSourcesRequest &other)
    : AppSyncRequest(new ListDataSourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListDataSourcesRequest object.
 */
ListDataSourcesRequest::ListDataSourcesRequest()
    : AppSyncRequest(new ListDataSourcesRequestPrivate(AppSyncRequest::ListDataSourcesAction, this))
{

}

/*!
 * \reimp
 */
bool ListDataSourcesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListDataSourcesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListDataSourcesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AppSyncClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDataSourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListDataSourcesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListDataSourcesRequestPrivate
 *
 * @brief  Private implementation for ListDataSourcesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListDataSourcesRequestPrivate object.
 *
 * @param  action  AppSync action being performed.
 * @param  q       Pointer to this object's public ListDataSourcesRequest instance.
 */
ListDataSourcesRequestPrivate::ListDataSourcesRequestPrivate(
    const AppSyncRequest::Action action, ListDataSourcesRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListDataSourcesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListDataSourcesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListDataSourcesRequest instance.
 */
ListDataSourcesRequestPrivate::ListDataSourcesRequestPrivate(
    const ListDataSourcesRequestPrivate &other, ListDataSourcesRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
