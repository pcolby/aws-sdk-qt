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

#include "getuserrequest.h"
#include "getuserrequest_p.h"
#include "getuserresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::GetUserRequest
 * \brief The GetUserRequest class provides an interface for FinspaceData GetUser requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::getUser
 */

/*!
 * Constructs a copy of \a other.
 */
GetUserRequest::GetUserRequest(const GetUserRequest &other)
    : FinspaceDataRequest(new GetUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUserRequest object.
 */
GetUserRequest::GetUserRequest()
    : FinspaceDataRequest(new GetUserRequestPrivate(FinspaceDataRequest::GetUserAction, this))
{

}

/*!
 * \reimp
 */
bool GetUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUserRequest::response(QNetworkReply * const reply) const
{
    return new GetUserResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::GetUserRequestPrivate
 * \brief The GetUserRequestPrivate class provides private implementation for GetUserRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a GetUserRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
GetUserRequestPrivate::GetUserRequestPrivate(
    const FinspaceDataRequest::Action action, GetUserRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUserRequest
 * class' copy constructor.
 */
GetUserRequestPrivate::GetUserRequestPrivate(
    const GetUserRequestPrivate &other, GetUserRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
