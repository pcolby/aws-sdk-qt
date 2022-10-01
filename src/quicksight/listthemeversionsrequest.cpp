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
