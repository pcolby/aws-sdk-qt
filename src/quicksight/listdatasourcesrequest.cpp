// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatasourcesrequest.h"
#include "listdatasourcesrequest_p.h"
#include "listdatasourcesresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListDataSourcesRequest
 * \brief The ListDataSourcesRequest class provides an interface for QuickSight ListDataSources requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listDataSources
 */

/*!
 * Constructs a copy of \a other.
 */
ListDataSourcesRequest::ListDataSourcesRequest(const ListDataSourcesRequest &other)
    : QuickSightRequest(new ListDataSourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDataSourcesRequest object.
 */
ListDataSourcesRequest::ListDataSourcesRequest()
    : QuickSightRequest(new ListDataSourcesRequestPrivate(QuickSightRequest::ListDataSourcesAction, this))
{

}

/*!
 * \reimp
 */
bool ListDataSourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDataSourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDataSourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListDataSourcesResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::ListDataSourcesRequestPrivate
 * \brief The ListDataSourcesRequestPrivate class provides private implementation for ListDataSourcesRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListDataSourcesRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
ListDataSourcesRequestPrivate::ListDataSourcesRequestPrivate(
    const QuickSightRequest::Action action, ListDataSourcesRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDataSourcesRequest
 * class' copy constructor.
 */
ListDataSourcesRequestPrivate::ListDataSourcesRequestPrivate(
    const ListDataSourcesRequestPrivate &other, ListDataSourcesRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
