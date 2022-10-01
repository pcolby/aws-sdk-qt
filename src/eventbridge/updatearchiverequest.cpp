// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatearchiverequest.h"
#include "updatearchiverequest_p.h"
#include "updatearchiveresponse.h"
#include "eventbridgerequest_p.h"

namespace QtAws {
namespace EventBridge {

/*!
 * \class QtAws::EventBridge::UpdateArchiveRequest
 * \brief The UpdateArchiveRequest class provides an interface for EventBridge UpdateArchive requests.
 *
 * \inmodule QtAwsEventBridge
 *
 *  Amazon EventBridge helps you to respond to state changes in your Amazon Web Services resources. When your resources
 *  change state, they automatically send events to an event stream. You can create rules that match selected events in the
 *  stream and route them to targets to take action. You can also use rules to take action on a predetermined schedule. For
 *  example, you can configure rules
 * 
 *  to> <ul> <li>
 * 
 *  Automatically invoke an Lambda function to update DNS entries when an event notifies you that Amazon EC2 instance enters
 *  the running
 * 
 *  state> </li> <li>
 * 
 *  Direct specific API records from CloudTrail to an Amazon Kinesis data stream for detailed analysis of potential security
 *  or availability
 * 
 *  risks> </li> <li>
 * 
 *  Periodically invoke a built-in target to create a snapshot of an Amazon EBS
 * 
 *  volume> </li> </ul>
 * 
 *  For more information about the features of Amazon EventBridge, see the <a
 *  href="https://docs.aws.amazon.com/eventbridge/latest/userguide">Amazon EventBridge User
 *
 * \sa EventBridgeClient::updateArchive
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateArchiveRequest::UpdateArchiveRequest(const UpdateArchiveRequest &other)
    : EventBridgeRequest(new UpdateArchiveRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateArchiveRequest object.
 */
UpdateArchiveRequest::UpdateArchiveRequest()
    : EventBridgeRequest(new UpdateArchiveRequestPrivate(EventBridgeRequest::UpdateArchiveAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateArchiveRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateArchiveResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateArchiveRequest::response(QNetworkReply * const reply) const
{
    return new UpdateArchiveResponse(*this, reply);
}

/*!
 * \class QtAws::EventBridge::UpdateArchiveRequestPrivate
 * \brief The UpdateArchiveRequestPrivate class provides private implementation for UpdateArchiveRequest.
 * \internal
 *
 * \inmodule QtAwsEventBridge
 */

/*!
 * Constructs a UpdateArchiveRequestPrivate object for EventBridge \a action,
 * with public implementation \a q.
 */
UpdateArchiveRequestPrivate::UpdateArchiveRequestPrivate(
    const EventBridgeRequest::Action action, UpdateArchiveRequest * const q)
    : EventBridgeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateArchiveRequest
 * class' copy constructor.
 */
UpdateArchiveRequestPrivate::UpdateArchiveRequestPrivate(
    const UpdateArchiveRequestPrivate &other, UpdateArchiveRequest * const q)
    : EventBridgeRequestPrivate(other, q)
{

}

} // namespace EventBridge
} // namespace QtAws
