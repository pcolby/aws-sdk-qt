// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describenamespacerequest.h"
#include "describenamespacerequest_p.h"
#include "describenamespaceresponse.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::DescribeNamespaceRequest
 * \brief The DescribeNamespaceRequest class provides an interface for IoTThingsGraph DescribeNamespace requests.
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
 * \sa IoTThingsGraphClient::describeNamespace
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeNamespaceRequest::DescribeNamespaceRequest(const DescribeNamespaceRequest &other)
    : IoTThingsGraphRequest(new DescribeNamespaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeNamespaceRequest object.
 */
DescribeNamespaceRequest::DescribeNamespaceRequest()
    : IoTThingsGraphRequest(new DescribeNamespaceRequestPrivate(IoTThingsGraphRequest::DescribeNamespaceAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeNamespaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeNamespaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeNamespaceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeNamespaceResponse(*this, reply);
}

/*!
 * \class QtAws::IoTThingsGraph::DescribeNamespaceRequestPrivate
 * \brief The DescribeNamespaceRequestPrivate class provides private implementation for DescribeNamespaceRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a DescribeNamespaceRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
DescribeNamespaceRequestPrivate::DescribeNamespaceRequestPrivate(
    const IoTThingsGraphRequest::Action action, DescribeNamespaceRequest * const q)
    : IoTThingsGraphRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeNamespaceRequest
 * class' copy constructor.
 */
DescribeNamespaceRequestPrivate::DescribeNamespaceRequestPrivate(
    const DescribeNamespaceRequestPrivate &other, DescribeNamespaceRequest * const q)
    : IoTThingsGraphRequestPrivate(other, q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
