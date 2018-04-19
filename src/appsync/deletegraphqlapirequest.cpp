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

#include "deletegraphqlapirequest.h"
#include "deletegraphqlapirequest_p.h"
#include "deletegraphqlapiresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::DeleteGraphqlApiRequest
 * \brief The DeleteGraphqlApiRequest class provides an interface for AppSync DeleteGraphqlApi requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::deleteGraphqlApi
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteGraphqlApiRequest::DeleteGraphqlApiRequest(const DeleteGraphqlApiRequest &other)
    : AppSyncRequest(new DeleteGraphqlApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteGraphqlApiRequest object.
 */
DeleteGraphqlApiRequest::DeleteGraphqlApiRequest()
    : AppSyncRequest(new DeleteGraphqlApiRequestPrivate(AppSyncRequest::DeleteGraphqlApiAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteGraphqlApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteGraphqlApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteGraphqlApiRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGraphqlApiResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::DeleteGraphqlApiRequestPrivate
 * \brief The DeleteGraphqlApiRequestPrivate class provides private implementation for DeleteGraphqlApiRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 *
 * Constructs a DeleteGraphqlApiRequestPrivate object for AppSync \a action with,
 * public implementation \a q.
 */
DeleteGraphqlApiRequestPrivate::DeleteGraphqlApiRequestPrivate(
    const AppSyncRequest::Action action, DeleteGraphqlApiRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteGraphqlApiRequest
 * class' copy constructor.
 */
DeleteGraphqlApiRequestPrivate::DeleteGraphqlApiRequestPrivate(
    const DeleteGraphqlApiRequestPrivate &other, DeleteGraphqlApiRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
