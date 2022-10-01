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

#include "createdomainnamerequest.h"
#include "createdomainnamerequest_p.h"
#include "createdomainnameresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::CreateDomainNameRequest
 * \brief The CreateDomainNameRequest class provides an interface for AppSync CreateDomainName requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::createDomainName
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDomainNameRequest::CreateDomainNameRequest(const CreateDomainNameRequest &other)
    : AppSyncRequest(new CreateDomainNameRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDomainNameRequest object.
 */
CreateDomainNameRequest::CreateDomainNameRequest()
    : AppSyncRequest(new CreateDomainNameRequestPrivate(AppSyncRequest::CreateDomainNameAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDomainNameRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDomainNameResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDomainNameRequest::response(QNetworkReply * const reply) const
{
    return new CreateDomainNameResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::CreateDomainNameRequestPrivate
 * \brief The CreateDomainNameRequestPrivate class provides private implementation for CreateDomainNameRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a CreateDomainNameRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
CreateDomainNameRequestPrivate::CreateDomainNameRequestPrivate(
    const AppSyncRequest::Action action, CreateDomainNameRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDomainNameRequest
 * class' copy constructor.
 */
CreateDomainNameRequestPrivate::CreateDomainNameRequestPrivate(
    const CreateDomainNameRequestPrivate &other, CreateDomainNameRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
