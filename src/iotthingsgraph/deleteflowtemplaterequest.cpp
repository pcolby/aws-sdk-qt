/*
    Copyright 2013-2019 Paul Colby

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

#include "deleteflowtemplaterequest.h"
#include "deleteflowtemplaterequest_p.h"
#include "deleteflowtemplateresponse.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::DeleteFlowTemplateRequest
 * \brief The DeleteFlowTemplateRequest class provides an interface for IoTThingsGraph DeleteFlowTemplate requests.
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
 * \sa IoTThingsGraphClient::deleteFlowTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFlowTemplateRequest::DeleteFlowTemplateRequest(const DeleteFlowTemplateRequest &other)
    : IoTThingsGraphRequest(new DeleteFlowTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFlowTemplateRequest object.
 */
DeleteFlowTemplateRequest::DeleteFlowTemplateRequest()
    : IoTThingsGraphRequest(new DeleteFlowTemplateRequestPrivate(IoTThingsGraphRequest::DeleteFlowTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFlowTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFlowTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFlowTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFlowTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::IoTThingsGraph::DeleteFlowTemplateRequestPrivate
 * \brief The DeleteFlowTemplateRequestPrivate class provides private implementation for DeleteFlowTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a DeleteFlowTemplateRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
DeleteFlowTemplateRequestPrivate::DeleteFlowTemplateRequestPrivate(
    const IoTThingsGraphRequest::Action action, DeleteFlowTemplateRequest * const q)
    : IoTThingsGraphRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFlowTemplateRequest
 * class' copy constructor.
 */
DeleteFlowTemplateRequestPrivate::DeleteFlowTemplateRequestPrivate(
    const DeleteFlowTemplateRequestPrivate &other, DeleteFlowTemplateRequest * const q)
    : IoTThingsGraphRequestPrivate(other, q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
