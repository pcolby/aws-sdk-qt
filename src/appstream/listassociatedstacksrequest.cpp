/*
    Copyright 2013-2020 Paul Colby

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

#include "listassociatedstacksrequest.h"
#include "listassociatedstacksrequest_p.h"
#include "listassociatedstacksresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::ListAssociatedStacksRequest
 * \brief The ListAssociatedStacksRequest class provides an interface for AppStream ListAssociatedStacks requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  This is the <i>Amazon AppStream 2.0 API Reference</i>. This documentation provides descriptions and syntax for each of
 *  the actions and data types in AppStream 2.0. AppStream 2.0 is a fully managed, secure application streaming service that
 *  lets you stream desktop applications to users without rewriting applications. AppStream 2.0 manages the AWS resources
 *  that are required to host and run your applications, scales automatically, and provides access to your users on
 * 
 *  demand>
 * 
 *  To learn more about AppStream 2.0, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/appstream2">Amazon AppStream 2.0 product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/appstream2">Amazon AppStream 2.0 documentation</a>
 *
 * \sa AppStreamClient::listAssociatedStacks
 */

/*!
 * Constructs a copy of \a other.
 */
ListAssociatedStacksRequest::ListAssociatedStacksRequest(const ListAssociatedStacksRequest &other)
    : AppStreamRequest(new ListAssociatedStacksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAssociatedStacksRequest object.
 */
ListAssociatedStacksRequest::ListAssociatedStacksRequest()
    : AppStreamRequest(new ListAssociatedStacksRequestPrivate(AppStreamRequest::ListAssociatedStacksAction, this))
{

}

/*!
 * \reimp
 */
bool ListAssociatedStacksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAssociatedStacksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAssociatedStacksRequest::response(QNetworkReply * const reply) const
{
    return new ListAssociatedStacksResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::ListAssociatedStacksRequestPrivate
 * \brief The ListAssociatedStacksRequestPrivate class provides private implementation for ListAssociatedStacksRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a ListAssociatedStacksRequestPrivate object for AppStream \a action,
 * with public implementation \a q.
 */
ListAssociatedStacksRequestPrivate::ListAssociatedStacksRequestPrivate(
    const AppStreamRequest::Action action, ListAssociatedStacksRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAssociatedStacksRequest
 * class' copy constructor.
 */
ListAssociatedStacksRequestPrivate::ListAssociatedStacksRequestPrivate(
    const ListAssociatedStacksRequestPrivate &other, ListAssociatedStacksRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
