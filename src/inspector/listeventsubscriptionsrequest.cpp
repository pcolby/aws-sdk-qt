// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
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
