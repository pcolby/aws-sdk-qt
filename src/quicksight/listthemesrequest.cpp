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

#include "listthemesrequest.h"
#include "listthemesrequest_p.h"
#include "listthemesresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListThemesRequest
 * \brief The ListThemesRequest class provides an interface for QuickSight ListThemes requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listThemes
 */

/*!
 * Constructs a copy of \a other.
 */
ListThemesRequest::ListThemesRequest(const ListThemesRequest &other)
    : QuickSightRequest(new ListThemesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListThemesRequest object.
 */
ListThemesRequest::ListThemesRequest()
    : QuickSightRequest(new ListThemesRequestPrivate(QuickSightRequest::ListThemesAction, this))
{

}

/*!
 * \reimp
 */
bool ListThemesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListThemesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListThemesRequest::response(QNetworkReply * const reply) const
{
    return new ListThemesResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::ListThemesRequestPrivate
 * \brief The ListThemesRequestPrivate class provides private implementation for ListThemesRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListThemesRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
ListThemesRequestPrivate::ListThemesRequestPrivate(
    const QuickSightRequest::Action action, ListThemesRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListThemesRequest
 * class' copy constructor.
 */
ListThemesRequestPrivate::ListThemesRequestPrivate(
    const ListThemesRequestPrivate &other, ListThemesRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
