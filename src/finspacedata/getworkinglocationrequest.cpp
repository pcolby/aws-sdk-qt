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

#include "getworkinglocationrequest.h"
#include "getworkinglocationrequest_p.h"
#include "getworkinglocationresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::GetWorkingLocationRequest
 * \brief The GetWorkingLocationRequest class provides an interface for FinspaceData GetWorkingLocation requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::getWorkingLocation
 */

/*!
 * Constructs a copy of \a other.
 */
GetWorkingLocationRequest::GetWorkingLocationRequest(const GetWorkingLocationRequest &other)
    : FinspaceDataRequest(new GetWorkingLocationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetWorkingLocationRequest object.
 */
GetWorkingLocationRequest::GetWorkingLocationRequest()
    : FinspaceDataRequest(new GetWorkingLocationRequestPrivate(FinspaceDataRequest::GetWorkingLocationAction, this))
{

}

/*!
 * \reimp
 */
bool GetWorkingLocationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetWorkingLocationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetWorkingLocationRequest::response(QNetworkReply * const reply) const
{
    return new GetWorkingLocationResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::GetWorkingLocationRequestPrivate
 * \brief The GetWorkingLocationRequestPrivate class provides private implementation for GetWorkingLocationRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a GetWorkingLocationRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
GetWorkingLocationRequestPrivate::GetWorkingLocationRequestPrivate(
    const FinspaceDataRequest::Action action, GetWorkingLocationRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetWorkingLocationRequest
 * class' copy constructor.
 */
GetWorkingLocationRequestPrivate::GetWorkingLocationRequestPrivate(
    const GetWorkingLocationRequestPrivate &other, GetWorkingLocationRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
