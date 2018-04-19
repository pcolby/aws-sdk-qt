/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listeventsubscriptionsrequest.h"
#include "listeventsubscriptionsrequest_p.h"
#include "listeventsubscriptionsresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::ListEventSubscriptionsRequest
 * \brief The ListEventSubscriptionsRequest class provides an interface for Inspector ListEventSubscriptions requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::listEventSubscriptions
 */

/*!
 * Constructs a copy of \a other.
 */
ListEventSubscriptionsRequest::ListEventSubscriptionsRequest(const ListEventSubscriptionsRequest &other)
    : InspectorRequest(new ListEventSubscriptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEventSubscriptionsRequest object.
 */
ListEventSubscriptionsRequest::ListEventSubscriptionsRequest()
    : InspectorRequest(new ListEventSubscriptionsRequestPrivate(InspectorRequest::ListEventSubscriptionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListEventSubscriptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEventSubscriptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEventSubscriptionsRequest::response(QNetworkReply * const reply) const
{
    return new ListEventSubscriptionsResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::ListEventSubscriptionsRequestPrivate
 * \brief The ListEventSubscriptionsRequestPrivate class provides private implementation for ListEventSubscriptionsRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a ListEventSubscriptionsRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
ListEventSubscriptionsRequestPrivate::ListEventSubscriptionsRequestPrivate(
    const InspectorRequest::Action action, ListEventSubscriptionsRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEventSubscriptionsRequest
 * class' copy constructor.
 */
ListEventSubscriptionsRequestPrivate::ListEventSubscriptionsRequestPrivate(
    const ListEventSubscriptionsRequestPrivate &other, ListEventSubscriptionsRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
