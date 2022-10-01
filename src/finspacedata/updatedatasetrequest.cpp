// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
