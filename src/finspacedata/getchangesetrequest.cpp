// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
