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

#include "disassociateapirequest.h"
#include "disassociateapirequest_p.h"
#include "disassociateapiresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::DisassociateApiRequest
 * \brief The DisassociateApiRequest class provides an interface for AppSync DisassociateApi requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::disassociateApi
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateApiRequest::DisassociateApiRequest(const DisassociateApiRequest &other)
    : AppSyncRequest(new DisassociateApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateApiRequest object.
 */
DisassociateApiRequest::DisassociateApiRequest()
    : AppSyncRequest(new DisassociateApiRequestPrivate(AppSyncRequest::DisassociateApiAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateApiRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateApiResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::DisassociateApiRequestPrivate
 * \brief The DisassociateApiRequestPrivate class provides private implementation for DisassociateApiRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a DisassociateApiRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
DisassociateApiRequestPrivate::DisassociateApiRequestPrivate(
    const AppSyncRequest::Action action, DisassociateApiRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateApiRequest
 * class' copy constructor.
 */
DisassociateApiRequestPrivate::DisassociateApiRequestPrivate(
    const DisassociateApiRequestPrivate &other, DisassociateApiRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
