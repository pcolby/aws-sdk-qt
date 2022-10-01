// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "subscribetoeventrequest.h"
#include "subscribetoeventrequest_p.h"
#include "subscribetoeventresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::SubscribeToEventRequest
 * \brief The SubscribeToEventRequest class provides an interface for Inspector SubscribeToEvent requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::subscribeToEvent
 */

/*!
 * Constructs a copy of \a other.
 */
SubscribeToEventRequest::SubscribeToEventRequest(const SubscribeToEventRequest &other)
    : InspectorRequest(new SubscribeToEventRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SubscribeToEventRequest object.
 */
SubscribeToEventRequest::SubscribeToEventRequest()
    : InspectorRequest(new SubscribeToEventRequestPrivate(InspectorRequest::SubscribeToEventAction, this))
{

}

/*!
 * \reimp
 */
bool SubscribeToEventRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SubscribeToEventResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SubscribeToEventRequest::response(QNetworkReply * const reply) const
{
    return new SubscribeToEventResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::SubscribeToEventRequestPrivate
 * \brief The SubscribeToEventRequestPrivate class provides private implementation for SubscribeToEventRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a SubscribeToEventRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
SubscribeToEventRequestPrivate::SubscribeToEventRequestPrivate(
    const InspectorRequest::Action action, SubscribeToEventRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SubscribeToEventRequest
 * class' copy constructor.
 */
SubscribeToEventRequestPrivate::SubscribeToEventRequestPrivate(
    const SubscribeToEventRequestPrivate &other, SubscribeToEventRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
