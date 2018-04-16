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

#include "listresolversrequest.h"
#include "listresolversrequest_p.h"
#include "listresolversresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::ListResolversRequest
 *
 * \brief The ListResolversRequest class encapsulates AppSync ListResolvers requests.
 *
 * \ingroup AppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::listResolvers
 */

/*!
 * @brief  Constructs a new ListResolversRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListResolversRequest::ListResolversRequest(const ListResolversRequest &other)
    : AppSyncRequest(new ListResolversRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListResolversRequest object.
 */
ListResolversRequest::ListResolversRequest()
    : AppSyncRequest(new ListResolversRequestPrivate(AppSyncRequest::ListResolversAction, this))
{

}

/*!
 * \reimp
 */
bool ListResolversRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListResolversResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListResolversResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AppSyncClient::send
 */
QtAws::Core::AwsAbstractResponse * ListResolversRequest::response(QNetworkReply * const reply) const
{
    return new ListResolversResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListResolversRequestPrivate
 *
 * @brief  Private implementation for ListResolversRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListResolversRequestPrivate object.
 *
 * @param  action  AppSync action being performed.
 * @param  q       Pointer to this object's public ListResolversRequest instance.
 */
ListResolversRequestPrivate::ListResolversRequestPrivate(
    const AppSyncRequest::Action action, ListResolversRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListResolversRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListResolversRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListResolversRequest instance.
 */
ListResolversRequestPrivate::ListResolversRequestPrivate(
    const ListResolversRequestPrivate &other, ListResolversRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
