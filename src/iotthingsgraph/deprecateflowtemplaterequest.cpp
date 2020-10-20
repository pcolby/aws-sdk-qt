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

#include "deprecateflowtemplaterequest.h"
#include "deprecateflowtemplaterequest_p.h"
#include "deprecateflowtemplateresponse.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::DeprecateFlowTemplateRequest
 * \brief The DeprecateFlowTemplateRequest class provides an interface for IoTThingsGraph DeprecateFlowTemplate requests.
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
 * \sa IoTThingsGraphClient::deprecateFlowTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeprecateFlowTemplateRequest::DeprecateFlowTemplateRequest(const DeprecateFlowTemplateRequest &other)
    : IoTThingsGraphRequest(new DeprecateFlowTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeprecateFlowTemplateRequest object.
 */
DeprecateFlowTemplateRequest::DeprecateFlowTemplateRequest()
    : IoTThingsGraphRequest(new DeprecateFlowTemplateRequestPrivate(IoTThingsGraphRequest::DeprecateFlowTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DeprecateFlowTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeprecateFlowTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeprecateFlowTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeprecateFlowTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::IoTThingsGraph::DeprecateFlowTemplateRequestPrivate
 * \brief The DeprecateFlowTemplateRequestPrivate class provides private implementation for DeprecateFlowTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a DeprecateFlowTemplateRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
DeprecateFlowTemplateRequestPrivate::DeprecateFlowTemplateRequestPrivate(
    const IoTThingsGraphRequest::Action action, DeprecateFlowTemplateRequest * const q)
    : IoTThingsGraphRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeprecateFlowTemplateRequest
 * class' copy constructor.
 */
DeprecateFlowTemplateRequestPrivate::DeprecateFlowTemplateRequestPrivate(
    const DeprecateFlowTemplateRequestPrivate &other, DeprecateFlowTemplateRequest * const q)
    : IoTThingsGraphRequestPrivate(other, q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
