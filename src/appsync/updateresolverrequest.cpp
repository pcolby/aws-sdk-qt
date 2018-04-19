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

#include "updateresolverrequest.h"
#include "updateresolverrequest_p.h"
#include "updateresolverresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::UpdateResolverRequest
 * \brief The UpdateResolverRequest class provides an interface for AppSync UpdateResolver requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::updateResolver
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateResolverRequest::UpdateResolverRequest(const UpdateResolverRequest &other)
    : AppSyncRequest(new UpdateResolverRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateResolverRequest object.
 */
UpdateResolverRequest::UpdateResolverRequest()
    : AppSyncRequest(new UpdateResolverRequestPrivate(AppSyncRequest::UpdateResolverAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateResolverRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateResolverResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateResolverRequest::response(QNetworkReply * const reply) const
{
    return new UpdateResolverResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::UpdateResolverRequestPrivate
 * \brief The UpdateResolverRequestPrivate class provides private implementation for UpdateResolverRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a UpdateResolverRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
UpdateResolverRequestPrivate::UpdateResolverRequestPrivate(
    const AppSyncRequest::Action action, UpdateResolverRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateResolverRequest
 * class' copy constructor.
 */
UpdateResolverRequestPrivate::UpdateResolverRequestPrivate(
    const UpdateResolverRequestPrivate &other, UpdateResolverRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
