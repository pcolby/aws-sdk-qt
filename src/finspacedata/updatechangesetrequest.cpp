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

#include "updatechangesetrequest.h"
#include "updatechangesetrequest_p.h"
#include "updatechangesetresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::UpdateChangesetRequest
 * \brief The UpdateChangesetRequest class provides an interface for FinspaceData UpdateChangeset requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::updateChangeset
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateChangesetRequest::UpdateChangesetRequest(const UpdateChangesetRequest &other)
    : FinspaceDataRequest(new UpdateChangesetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateChangesetRequest object.
 */
UpdateChangesetRequest::UpdateChangesetRequest()
    : FinspaceDataRequest(new UpdateChangesetRequestPrivate(FinspaceDataRequest::UpdateChangesetAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateChangesetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateChangesetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateChangesetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateChangesetResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::UpdateChangesetRequestPrivate
 * \brief The UpdateChangesetRequestPrivate class provides private implementation for UpdateChangesetRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a UpdateChangesetRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
UpdateChangesetRequestPrivate::UpdateChangesetRequestPrivate(
    const FinspaceDataRequest::Action action, UpdateChangesetRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateChangesetRequest
 * class' copy constructor.
 */
UpdateChangesetRequestPrivate::UpdateChangesetRequestPrivate(
    const UpdateChangesetRequestPrivate &other, UpdateChangesetRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
