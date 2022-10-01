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

#include "listnamespacesrequest.h"
#include "listnamespacesrequest_p.h"
#include "listnamespacesresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListNamespacesRequest
 * \brief The ListNamespacesRequest class provides an interface for QuickSight ListNamespaces requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listNamespaces
 */

/*!
 * Constructs a copy of \a other.
 */
ListNamespacesRequest::ListNamespacesRequest(const ListNamespacesRequest &other)
    : QuickSightRequest(new ListNamespacesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListNamespacesRequest object.
 */
ListNamespacesRequest::ListNamespacesRequest()
    : QuickSightRequest(new ListNamespacesRequestPrivate(QuickSightRequest::ListNamespacesAction, this))
{

}

/*!
 * \reimp
 */
bool ListNamespacesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListNamespacesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNamespacesRequest::response(QNetworkReply * const reply) const
{
    return new ListNamespacesResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::ListNamespacesRequestPrivate
 * \brief The ListNamespacesRequestPrivate class provides private implementation for ListNamespacesRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListNamespacesRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
ListNamespacesRequestPrivate::ListNamespacesRequestPrivate(
    const QuickSightRequest::Action action, ListNamespacesRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListNamespacesRequest
 * class' copy constructor.
 */
ListNamespacesRequestPrivate::ListNamespacesRequestPrivate(
    const ListNamespacesRequestPrivate &other, ListNamespacesRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
