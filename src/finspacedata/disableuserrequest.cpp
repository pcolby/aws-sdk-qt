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

#include "disableuserrequest.h"
#include "disableuserrequest_p.h"
#include "disableuserresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::DisableUserRequest
 * \brief The DisableUserRequest class provides an interface for FinspaceData DisableUser requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::disableUser
 */

/*!
 * Constructs a copy of \a other.
 */
DisableUserRequest::DisableUserRequest(const DisableUserRequest &other)
    : FinspaceDataRequest(new DisableUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisableUserRequest object.
 */
DisableUserRequest::DisableUserRequest()
    : FinspaceDataRequest(new DisableUserRequestPrivate(FinspaceDataRequest::DisableUserAction, this))
{

}

/*!
 * \reimp
 */
bool DisableUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisableUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableUserRequest::response(QNetworkReply * const reply) const
{
    return new DisableUserResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::DisableUserRequestPrivate
 * \brief The DisableUserRequestPrivate class provides private implementation for DisableUserRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a DisableUserRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
DisableUserRequestPrivate::DisableUserRequestPrivate(
    const FinspaceDataRequest::Action action, DisableUserRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisableUserRequest
 * class' copy constructor.
 */
DisableUserRequestPrivate::DisableUserRequestPrivate(
    const DisableUserRequestPrivate &other, DisableUserRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
