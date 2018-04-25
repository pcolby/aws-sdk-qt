/*
    Copyright 2013-2018 Paul Colby

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

#include "createresolverrequest.h"
#include "createresolverrequest_p.h"
#include "createresolverresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::CreateResolverRequest
 * \brief The CreateResolverRequest class provides an interface for AppSync CreateResolver requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::createResolver
 */

/*!
 * Constructs a copy of \a other.
 */
CreateResolverRequest::CreateResolverRequest(const CreateResolverRequest &other)
    : AppSyncRequest(new CreateResolverRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateResolverRequest object.
 */
CreateResolverRequest::CreateResolverRequest()
    : AppSyncRequest(new CreateResolverRequestPrivate(AppSyncRequest::CreateResolverAction, this))
{

}

/*!
 * \reimp
 */
bool CreateResolverRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateResolverResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateResolverRequest::response(QNetworkReply * const reply) const
{
    return new CreateResolverResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::CreateResolverRequestPrivate
 * \brief The CreateResolverRequestPrivate class provides private implementation for CreateResolverRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a CreateResolverRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
CreateResolverRequestPrivate::CreateResolverRequestPrivate(
    const AppSyncRequest::Action action, CreateResolverRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateResolverRequest
 * class' copy constructor.
 */
CreateResolverRequestPrivate::CreateResolverRequestPrivate(
    const CreateResolverRequestPrivate &other, CreateResolverRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
