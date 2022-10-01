// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listchangesetsrequest.h"
#include "listchangesetsrequest_p.h"
#include "listchangesetsresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::ListChangesetsRequest
 * \brief The ListChangesetsRequest class provides an interface for FinspaceData ListChangesets requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::listChangesets
 */

/*!
 * Constructs a copy of \a other.
 */
ListChangesetsRequest::ListChangesetsRequest(const ListChangesetsRequest &other)
    : FinspaceDataRequest(new ListChangesetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListChangesetsRequest object.
 */
ListChangesetsRequest::ListChangesetsRequest()
    : FinspaceDataRequest(new ListChangesetsRequestPrivate(FinspaceDataRequest::ListChangesetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListChangesetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListChangesetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListChangesetsRequest::response(QNetworkReply * const reply) const
{
    return new ListChangesetsResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::ListChangesetsRequestPrivate
 * \brief The ListChangesetsRequestPrivate class provides private implementation for ListChangesetsRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a ListChangesetsRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
ListChangesetsRequestPrivate::ListChangesetsRequestPrivate(
    const FinspaceDataRequest::Action action, ListChangesetsRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListChangesetsRequest
 * class' copy constructor.
 */
ListChangesetsRequestPrivate::ListChangesetsRequestPrivate(
    const ListChangesetsRequestPrivate &other, ListChangesetsRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
