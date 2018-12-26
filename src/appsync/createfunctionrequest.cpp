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

#include "createfunctionrequest.h"
#include "createfunctionrequest_p.h"
#include "createfunctionresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::CreateFunctionRequest
 * \brief The CreateFunctionRequest class provides an interface for AppSync CreateFunction requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::createFunction
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFunctionRequest::CreateFunctionRequest(const CreateFunctionRequest &other)
    : AppSyncRequest(new CreateFunctionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFunctionRequest object.
 */
CreateFunctionRequest::CreateFunctionRequest()
    : AppSyncRequest(new CreateFunctionRequestPrivate(AppSyncRequest::CreateFunctionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFunctionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFunctionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFunctionRequest::response(QNetworkReply * const reply) const
{
    return new CreateFunctionResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::CreateFunctionRequestPrivate
 * \brief The CreateFunctionRequestPrivate class provides private implementation for CreateFunctionRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a CreateFunctionRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
CreateFunctionRequestPrivate::CreateFunctionRequestPrivate(
    const AppSyncRequest::Action action, CreateFunctionRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFunctionRequest
 * class' copy constructor.
 */
CreateFunctionRequestPrivate::CreateFunctionRequestPrivate(
    const CreateFunctionRequestPrivate &other, CreateFunctionRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
