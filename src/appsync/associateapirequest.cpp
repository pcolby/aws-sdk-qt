/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "associateapirequest.h"
#include "associateapirequest_p.h"
#include "associateapiresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::AssociateApiRequest
 * \brief The AssociateApiRequest class provides an interface for AppSync AssociateApi requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::associateApi
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateApiRequest::AssociateApiRequest(const AssociateApiRequest &other)
    : AppSyncRequest(new AssociateApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateApiRequest object.
 */
AssociateApiRequest::AssociateApiRequest()
    : AppSyncRequest(new AssociateApiRequestPrivate(AppSyncRequest::AssociateApiAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateApiRequest::response(QNetworkReply * const reply) const
{
    return new AssociateApiResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::AssociateApiRequestPrivate
 * \brief The AssociateApiRequestPrivate class provides private implementation for AssociateApiRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a AssociateApiRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
AssociateApiRequestPrivate::AssociateApiRequestPrivate(
    const AppSyncRequest::Action action, AssociateApiRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateApiRequest
 * class' copy constructor.
 */
AssociateApiRequestPrivate::AssociateApiRequestPrivate(
    const AssociateApiRequestPrivate &other, AssociateApiRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
