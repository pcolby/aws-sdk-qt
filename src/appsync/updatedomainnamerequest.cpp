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

#include "updatedomainnamerequest.h"
#include "updatedomainnamerequest_p.h"
#include "updatedomainnameresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::UpdateDomainNameRequest
 * \brief The UpdateDomainNameRequest class provides an interface for AppSync UpdateDomainName requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::updateDomainName
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDomainNameRequest::UpdateDomainNameRequest(const UpdateDomainNameRequest &other)
    : AppSyncRequest(new UpdateDomainNameRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDomainNameRequest object.
 */
UpdateDomainNameRequest::UpdateDomainNameRequest()
    : AppSyncRequest(new UpdateDomainNameRequestPrivate(AppSyncRequest::UpdateDomainNameAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDomainNameRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDomainNameResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDomainNameRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDomainNameResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::UpdateDomainNameRequestPrivate
 * \brief The UpdateDomainNameRequestPrivate class provides private implementation for UpdateDomainNameRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a UpdateDomainNameRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
UpdateDomainNameRequestPrivate::UpdateDomainNameRequestPrivate(
    const AppSyncRequest::Action action, UpdateDomainNameRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDomainNameRequest
 * class' copy constructor.
 */
UpdateDomainNameRequestPrivate::UpdateDomainNameRequestPrivate(
    const UpdateDomainNameRequestPrivate &other, UpdateDomainNameRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
