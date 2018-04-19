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

#include "createtyperequest.h"
#include "createtyperequest_p.h"
#include "createtyperesponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::CreateTypeRequest
 * \brief The CreateTypeRequest class provides an interface for AppSync CreateType requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::createType
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTypeRequest::CreateTypeRequest(const CreateTypeRequest &other)
    : AppSyncRequest(new CreateTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTypeRequest object.
 */
CreateTypeRequest::CreateTypeRequest()
    : AppSyncRequest(new CreateTypeRequestPrivate(AppSyncRequest::CreateTypeAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTypeRequest::response(QNetworkReply * const reply) const
{
    return new CreateTypeResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::CreateTypeRequestPrivate
 * \brief The CreateTypeRequestPrivate class provides private implementation for CreateTypeRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a CreateTypeRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
CreateTypeRequestPrivate::CreateTypeRequestPrivate(
    const AppSyncRequest::Action action, CreateTypeRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTypeRequest
 * class' copy constructor.
 */
CreateTypeRequestPrivate::CreateTypeRequestPrivate(
    const CreateTypeRequestPrivate &other, CreateTypeRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
