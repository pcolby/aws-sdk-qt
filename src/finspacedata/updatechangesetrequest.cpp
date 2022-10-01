// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
