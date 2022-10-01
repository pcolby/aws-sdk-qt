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

#include "updatedatasetrequest.h"
#include "updatedatasetrequest_p.h"
#include "updatedatasetresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::UpdateDatasetRequest
 * \brief The UpdateDatasetRequest class provides an interface for FinspaceData UpdateDataset requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::updateDataset
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDatasetRequest::UpdateDatasetRequest(const UpdateDatasetRequest &other)
    : FinspaceDataRequest(new UpdateDatasetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDatasetRequest object.
 */
UpdateDatasetRequest::UpdateDatasetRequest()
    : FinspaceDataRequest(new UpdateDatasetRequestPrivate(FinspaceDataRequest::UpdateDatasetAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDatasetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDatasetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDatasetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDatasetResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::UpdateDatasetRequestPrivate
 * \brief The UpdateDatasetRequestPrivate class provides private implementation for UpdateDatasetRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a UpdateDatasetRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
UpdateDatasetRequestPrivate::UpdateDatasetRequestPrivate(
    const FinspaceDataRequest::Action action, UpdateDatasetRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDatasetRequest
 * class' copy constructor.
 */
UpdateDatasetRequestPrivate::UpdateDatasetRequestPrivate(
    const UpdateDatasetRequestPrivate &other, UpdateDatasetRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
