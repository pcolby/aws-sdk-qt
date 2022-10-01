// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletenamespacerequest.h"
#include "deletenamespacerequest_p.h"
#include "deletenamespaceresponse.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::DeleteNamespaceRequest
 * \brief The DeleteNamespaceRequest class provides an interface for IoTThingsGraph DeleteNamespace requests.
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
 * \sa IoTThingsGraphClient::deleteNamespace
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteNamespaceRequest::DeleteNamespaceRequest(const DeleteNamespaceRequest &other)
    : IoTThingsGraphRequest(new DeleteNamespaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteNamespaceRequest object.
 */
DeleteNamespaceRequest::DeleteNamespaceRequest()
    : IoTThingsGraphRequest(new DeleteNamespaceRequestPrivate(IoTThingsGraphRequest::DeleteNamespaceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteNamespaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteNamespaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteNamespaceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteNamespaceResponse(*this, reply);
}

/*!
 * \class QtAws::IoTThingsGraph::DeleteNamespaceRequestPrivate
 * \brief The DeleteNamespaceRequestPrivate class provides private implementation for DeleteNamespaceRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a DeleteNamespaceRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
DeleteNamespaceRequestPrivate::DeleteNamespaceRequestPrivate(
    const IoTThingsGraphRequest::Action action, DeleteNamespaceRequest * const q)
    : IoTThingsGraphRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteNamespaceRequest
 * class' copy constructor.
 */
DeleteNamespaceRequestPrivate::DeleteNamespaceRequestPrivate(
    const DeleteNamespaceRequestPrivate &other, DeleteNamespaceRequest * const q)
    : IoTThingsGraphRequestPrivate(other, q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
