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

#include "deleteresolverrequest.h"
#include "deleteresolverrequest_p.h"
#include "deleteresolverresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::DeleteResolverRequest
 *
 * \brief The DeleteResolverRequest class encapsulates AppSync DeleteResolver requests.
 *
 * \ingroup AppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::deleteResolver
 */

/*!
 * @brief  Constructs a new DeleteResolverRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteResolverRequest::DeleteResolverRequest(const DeleteResolverRequest &other)
    : AppSyncRequest(new DeleteResolverRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteResolverRequest object.
 */
DeleteResolverRequest::DeleteResolverRequest()
    : AppSyncRequest(new DeleteResolverRequestPrivate(AppSyncRequest::DeleteResolverAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteResolverRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteResolverResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteResolverResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AppSyncClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteResolverRequest::response(QNetworkReply * const reply) const
{
    return new DeleteResolverResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteResolverRequestPrivate
 *
 * @brief  Private implementation for DeleteResolverRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteResolverRequestPrivate object.
 *
 * @param  action  AppSync action being performed.
 * @param  q       Pointer to this object's public DeleteResolverRequest instance.
 */
DeleteResolverRequestPrivate::DeleteResolverRequestPrivate(
    const AppSyncRequest::Action action, DeleteResolverRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteResolverRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteResolverRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteResolverRequest instance.
 */
DeleteResolverRequestPrivate::DeleteResolverRequestPrivate(
    const DeleteResolverRequestPrivate &other, DeleteResolverRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
