// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listthemeversionsrequest.h"
#include "listthemeversionsrequest_p.h"
#include "listthemeversionsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListThemeVersionsRequest
 * \brief The ListThemeVersionsRequest class provides an interface for QuickSight ListThemeVersions requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listThemeVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListThemeVersionsRequest::ListThemeVersionsRequest(const ListThemeVersionsRequest &other)
    : QuickSightRequest(new ListThemeVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListThemeVersionsRequest object.
 */
ListThemeVersionsRequest::ListThemeVersionsRequest()
    : QuickSightRequest(new ListThemeVersionsRequestPrivate(QuickSightRequest::ListThemeVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListThemeVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListThemeVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListThemeVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListThemeVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::ListThemeVersionsRequestPrivate
 * \brief The ListThemeVersionsRequestPrivate class provides private implementation for ListThemeVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListThemeVersionsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
ListThemeVersionsRequestPrivate::ListThemeVersionsRequestPrivate(
    const QuickSightRequest::Action action, ListThemeVersionsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListThemeVersionsRequest
 * class' copy constructor.
 */
ListThemeVersionsRequestPrivate::ListThemeVersionsRequestPrivate(
    const ListThemeVersionsRequestPrivate &other, ListThemeVersionsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
