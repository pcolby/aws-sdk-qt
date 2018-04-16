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

#include "listtypesrequest.h"
#include "listtypesrequest_p.h"
#include "listtypesresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::ListTypesRequest
 *
 * \brief The ListTypesRequest class provides an interface for AppSync ListTypes requests.
 *
 * \ingroup AppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::listTypes
 */

/*!
 * @brief  Constructs a new ListTypesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTypesRequest::ListTypesRequest(const ListTypesRequest &other)
    : AppSyncRequest(new ListTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListTypesRequest object.
 */
ListTypesRequest::ListTypesRequest()
    : AppSyncRequest(new ListTypesRequestPrivate(AppSyncRequest::ListTypesAction, this))
{

}

/*!
 * \reimp
 */
bool ListTypesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListTypesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTypesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AppSyncClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTypesRequest::response(QNetworkReply * const reply) const
{
    return new ListTypesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListTypesRequestPrivate
 *
 * @brief  Private implementation for ListTypesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListTypesRequestPrivate object.
 *
 * @param  action  AppSync action being performed.
 * @param  q       Pointer to this object's public ListTypesRequest instance.
 */
ListTypesRequestPrivate::ListTypesRequestPrivate(
    const AppSyncRequest::Action action, ListTypesRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListTypesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTypesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTypesRequest instance.
 */
ListTypesRequestPrivate::ListTypesRequestPrivate(
    const ListTypesRequestPrivate &other, ListTypesRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
