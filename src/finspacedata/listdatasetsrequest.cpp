// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatasetsrequest.h"
#include "listdatasetsrequest_p.h"
#include "listdatasetsresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::ListDatasetsRequest
 * \brief The ListDatasetsRequest class provides an interface for FinspaceData ListDatasets requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::listDatasets
 */

/*!
 * Constructs a copy of \a other.
 */
ListDatasetsRequest::ListDatasetsRequest(const ListDatasetsRequest &other)
    : FinspaceDataRequest(new ListDatasetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDatasetsRequest object.
 */
ListDatasetsRequest::ListDatasetsRequest()
    : FinspaceDataRequest(new ListDatasetsRequestPrivate(FinspaceDataRequest::ListDatasetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDatasetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDatasetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDatasetsRequest::response(QNetworkReply * const reply) const
{
    return new ListDatasetsResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::ListDatasetsRequestPrivate
 * \brief The ListDatasetsRequestPrivate class provides private implementation for ListDatasetsRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a ListDatasetsRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
ListDatasetsRequestPrivate::ListDatasetsRequestPrivate(
    const FinspaceDataRequest::Action action, ListDatasetsRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDatasetsRequest
 * class' copy constructor.
 */
ListDatasetsRequestPrivate::ListDatasetsRequestPrivate(
    const ListDatasetsRequestPrivate &other, ListDatasetsRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
