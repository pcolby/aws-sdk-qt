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

#include "getdomainnamerequest.h"
#include "getdomainnamerequest_p.h"
#include "getdomainnameresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::GetDomainNameRequest
 * \brief The GetDomainNameRequest class provides an interface for AppSync GetDomainName requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::getDomainName
 */

/*!
 * Constructs a copy of \a other.
 */
GetDomainNameRequest::GetDomainNameRequest(const GetDomainNameRequest &other)
    : AppSyncRequest(new GetDomainNameRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDomainNameRequest object.
 */
GetDomainNameRequest::GetDomainNameRequest()
    : AppSyncRequest(new GetDomainNameRequestPrivate(AppSyncRequest::GetDomainNameAction, this))
{

}

/*!
 * \reimp
 */
bool GetDomainNameRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDomainNameResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDomainNameRequest::response(QNetworkReply * const reply) const
{
    return new GetDomainNameResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::GetDomainNameRequestPrivate
 * \brief The GetDomainNameRequestPrivate class provides private implementation for GetDomainNameRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a GetDomainNameRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
GetDomainNameRequestPrivate::GetDomainNameRequestPrivate(
    const AppSyncRequest::Action action, GetDomainNameRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDomainNameRequest
 * class' copy constructor.
 */
GetDomainNameRequestPrivate::GetDomainNameRequestPrivate(
    const GetDomainNameRequestPrivate &other, GetDomainNameRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
