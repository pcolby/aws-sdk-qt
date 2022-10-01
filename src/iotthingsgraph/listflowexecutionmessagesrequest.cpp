// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listflowexecutionmessagesrequest.h"
#include "listflowexecutionmessagesrequest_p.h"
#include "listflowexecutionmessagesresponse.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::ListFlowExecutionMessagesRequest
 * \brief The ListFlowExecutionMessagesRequest class provides an interface for IoTThingsGraph ListFlowExecutionMessages requests.
 *
 * \inmodule QtAwsIoTThingsGraph
 *
 *  <fullname>AWS IoT Things Graph</fullname>
 * 
 *  AWS IoT Things Graph provides an integrated set of tools that enable developers to connect devices and services that use
 *  different standards, such as units of measure and communication protocols. AWS IoT Things Graph makes it possible to
 *  build IoT applications with little to no code by connecting devices and services and defining how they interact at an
 *  abstract
 * 
 *  level>
 * 
 *  For more information about how AWS IoT Things Graph works, see the <a
 *  href="https://docs.aws.amazon.com/thingsgraph/latest/ug/iot-tg-whatis.html">User
 * 
 *  Guide</a>>
 * 
 *  The AWS IoT Things Graph service is
 *
 * \sa IoTThingsGraphClient::listFlowExecutionMessages
 */

/*!
 * Constructs a copy of \a other.
 */
ListFlowExecutionMessagesRequest::ListFlowExecutionMessagesRequest(const ListFlowExecutionMessagesRequest &other)
    : IoTThingsGraphRequest(new ListFlowExecutionMessagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFlowExecutionMessagesRequest object.
 */
ListFlowExecutionMessagesRequest::ListFlowExecutionMessagesRequest()
    : IoTThingsGraphRequest(new ListFlowExecutionMessagesRequestPrivate(IoTThingsGraphRequest::ListFlowExecutionMessagesAction, this))
{

}

/*!
 * \reimp
 */
bool ListFlowExecutionMessagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFlowExecutionMessagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFlowExecutionMessagesRequest::response(QNetworkReply * const reply) const
{
    return new ListFlowExecutionMessagesResponse(*this, reply);
}

/*!
 * \class QtAws::IoTThingsGraph::ListFlowExecutionMessagesRequestPrivate
 * \brief The ListFlowExecutionMessagesRequestPrivate class provides private implementation for ListFlowExecutionMessagesRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a ListFlowExecutionMessagesRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
ListFlowExecutionMessagesRequestPrivate::ListFlowExecutionMessagesRequestPrivate(
    const IoTThingsGraphRequest::Action action, ListFlowExecutionMessagesRequest * const q)
    : IoTThingsGraphRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFlowExecutionMessagesRequest
 * class' copy constructor.
 */
ListFlowExecutionMessagesRequestPrivate::ListFlowExecutionMessagesRequestPrivate(
    const ListFlowExecutionMessagesRequestPrivate &other, ListFlowExecutionMessagesRequest * const q)
    : IoTThingsGraphRequestPrivate(other, q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
