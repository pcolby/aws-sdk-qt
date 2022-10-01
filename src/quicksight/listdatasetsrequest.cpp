// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatasetsrequest.h"
#include "listdatasetsrequest_p.h"
#include "listdatasetsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListDataSetsRequest
 * \brief The ListDataSetsRequest class provides an interface for QuickSight ListDataSets requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listDataSets
 */

/*!
 * Constructs a copy of \a other.
 */
ListDataSetsRequest::ListDataSetsRequest(const ListDataSetsRequest &other)
    : QuickSightRequest(new ListDataSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDataSetsRequest object.
 */
ListDataSetsRequest::ListDataSetsRequest()
    : QuickSightRequest(new ListDataSetsRequestPrivate(QuickSightRequest::ListDataSetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDataSetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDataSetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDataSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListDataSetsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::ListDataSetsRequestPrivate
 * \brief The ListDataSetsRequestPrivate class provides private implementation for ListDataSetsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListDataSetsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
ListDataSetsRequestPrivate::ListDataSetsRequestPrivate(
    const QuickSightRequest::Action action, ListDataSetsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDataSetsRequest
 * class' copy constructor.
 */
ListDataSetsRequestPrivate::ListDataSetsRequestPrivate(
    const ListDataSetsRequestPrivate &other, ListDataSetsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
