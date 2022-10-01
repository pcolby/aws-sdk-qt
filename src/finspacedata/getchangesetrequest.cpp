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

#include "getchangesetrequest.h"
#include "getchangesetrequest_p.h"
#include "getchangesetresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::GetChangesetRequest
 * \brief The GetChangesetRequest class provides an interface for FinspaceData GetChangeset requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::getChangeset
 */

/*!
 * Constructs a copy of \a other.
 */
GetChangesetRequest::GetChangesetRequest(const GetChangesetRequest &other)
    : FinspaceDataRequest(new GetChangesetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetChangesetRequest object.
 */
GetChangesetRequest::GetChangesetRequest()
    : FinspaceDataRequest(new GetChangesetRequestPrivate(FinspaceDataRequest::GetChangesetAction, this))
{

}

/*!
 * \reimp
 */
bool GetChangesetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetChangesetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetChangesetRequest::response(QNetworkReply * const reply) const
{
    return new GetChangesetResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::GetChangesetRequestPrivate
 * \brief The GetChangesetRequestPrivate class provides private implementation for GetChangesetRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a GetChangesetRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
GetChangesetRequestPrivate::GetChangesetRequestPrivate(
    const FinspaceDataRequest::Action action, GetChangesetRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetChangesetRequest
 * class' copy constructor.
 */
GetChangesetRequestPrivate::GetChangesetRequestPrivate(
    const GetChangesetRequestPrivate &other, GetChangesetRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
