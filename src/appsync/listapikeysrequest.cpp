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

#include "listapikeysrequest.h"
#include "listapikeysrequest_p.h"
#include "listapikeysresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::ListApiKeysRequest
 *
 * \brief The ListApiKeysRequest class provides an interface for AppSync ListApiKeys requests.
 *
 * \ingroup AppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::listApiKeys
 */

/*!
 * @brief  Constructs a new ListApiKeysRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListApiKeysRequest::ListApiKeysRequest(const ListApiKeysRequest &other)
    : AppSyncRequest(new ListApiKeysRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListApiKeysRequest object.
 */
ListApiKeysRequest::ListApiKeysRequest()
    : AppSyncRequest(new ListApiKeysRequestPrivate(AppSyncRequest::ListApiKeysAction, this))
{

}

/*!
 * \reimp
 */
bool ListApiKeysRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListApiKeysResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListApiKeysResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AppSyncClient::send
 */
QtAws::Core::AwsAbstractResponse * ListApiKeysRequest::response(QNetworkReply * const reply) const
{
    return new ListApiKeysResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListApiKeysRequestPrivate
 *
 * @brief  Private implementation for ListApiKeysRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListApiKeysRequestPrivate object.
 *
 * @param  action  AppSync action being performed.
 * @param  q       Pointer to this object's public ListApiKeysRequest instance.
 */
ListApiKeysRequestPrivate::ListApiKeysRequestPrivate(
    const AppSyncRequest::Action action, ListApiKeysRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListApiKeysRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListApiKeysRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListApiKeysRequest instance.
 */
ListApiKeysRequestPrivate::ListApiKeysRequestPrivate(
    const ListApiKeysRequestPrivate &other, ListApiKeysRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
