// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchflowexecutionsrequest.h"
#include "searchflowexecutionsrequest_p.h"
#include "searchflowexecutionsresponse.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::SearchFlowExecutionsRequest
 * \brief The SearchFlowExecutionsRequest class provides an interface for IoTThingsGraph SearchFlowExecutions requests.
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
 * \sa IoTThingsGraphClient::searchFlowExecutions
 */

/*!
 * Constructs a copy of \a other.
 */
SearchFlowExecutionsRequest::SearchFlowExecutionsRequest(const SearchFlowExecutionsRequest &other)
    : IoTThingsGraphRequest(new SearchFlowExecutionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchFlowExecutionsRequest object.
 */
SearchFlowExecutionsRequest::SearchFlowExecutionsRequest()
    : IoTThingsGraphRequest(new SearchFlowExecutionsRequestPrivate(IoTThingsGraphRequest::SearchFlowExecutionsAction, this))
{

}

/*!
 * \reimp
 */
bool SearchFlowExecutionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchFlowExecutionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchFlowExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new SearchFlowExecutionsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTThingsGraph::SearchFlowExecutionsRequestPrivate
 * \brief The SearchFlowExecutionsRequestPrivate class provides private implementation for SearchFlowExecutionsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a SearchFlowExecutionsRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
SearchFlowExecutionsRequestPrivate::SearchFlowExecutionsRequestPrivate(
    const IoTThingsGraphRequest::Action action, SearchFlowExecutionsRequest * const q)
    : IoTThingsGraphRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchFlowExecutionsRequest
 * class' copy constructor.
 */
SearchFlowExecutionsRequestPrivate::SearchFlowExecutionsRequestPrivate(
    const SearchFlowExecutionsRequestPrivate &other, SearchFlowExecutionsRequest * const q)
    : IoTThingsGraphRequestPrivate(other, q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
