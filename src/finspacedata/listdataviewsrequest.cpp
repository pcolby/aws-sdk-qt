// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdataviewsrequest.h"
#include "listdataviewsrequest_p.h"
#include "listdataviewsresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::ListDataViewsRequest
 * \brief The ListDataViewsRequest class provides an interface for FinspaceData ListDataViews requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::listDataViews
 */

/*!
 * Constructs a copy of \a other.
 */
ListDataViewsRequest::ListDataViewsRequest(const ListDataViewsRequest &other)
    : FinspaceDataRequest(new ListDataViewsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDataViewsRequest object.
 */
ListDataViewsRequest::ListDataViewsRequest()
    : FinspaceDataRequest(new ListDataViewsRequestPrivate(FinspaceDataRequest::ListDataViewsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDataViewsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDataViewsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDataViewsRequest::response(QNetworkReply * const reply) const
{
    return new ListDataViewsResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::ListDataViewsRequestPrivate
 * \brief The ListDataViewsRequestPrivate class provides private implementation for ListDataViewsRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a ListDataViewsRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
ListDataViewsRequestPrivate::ListDataViewsRequestPrivate(
    const FinspaceDataRequest::Action action, ListDataViewsRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDataViewsRequest
 * class' copy constructor.
 */
ListDataViewsRequestPrivate::ListDataViewsRequestPrivate(
    const ListDataViewsRequestPrivate &other, ListDataViewsRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
