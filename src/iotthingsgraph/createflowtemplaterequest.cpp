/*
    Copyright 2013-2021 Paul Colby

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

#include "createflowtemplaterequest.h"
#include "createflowtemplaterequest_p.h"
#include "createflowtemplateresponse.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::CreateFlowTemplateRequest
 * \brief The CreateFlowTemplateRequest class provides an interface for IoTThingsGraph CreateFlowTemplate requests.
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
 * \sa IoTThingsGraphClient::createFlowTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFlowTemplateRequest::CreateFlowTemplateRequest(const CreateFlowTemplateRequest &other)
    : IoTThingsGraphRequest(new CreateFlowTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFlowTemplateRequest object.
 */
CreateFlowTemplateRequest::CreateFlowTemplateRequest()
    : IoTThingsGraphRequest(new CreateFlowTemplateRequestPrivate(IoTThingsGraphRequest::CreateFlowTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFlowTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFlowTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFlowTemplateRequest::response(QNetworkReply * const reply) const
{
    return new CreateFlowTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::IoTThingsGraph::CreateFlowTemplateRequestPrivate
 * \brief The CreateFlowTemplateRequestPrivate class provides private implementation for CreateFlowTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a CreateFlowTemplateRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
CreateFlowTemplateRequestPrivate::CreateFlowTemplateRequestPrivate(
    const IoTThingsGraphRequest::Action action, CreateFlowTemplateRequest * const q)
    : IoTThingsGraphRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFlowTemplateRequest
 * class' copy constructor.
 */
CreateFlowTemplateRequestPrivate::CreateFlowTemplateRequestPrivate(
    const CreateFlowTemplateRequestPrivate &other, CreateFlowTemplateRequest * const q)
    : IoTThingsGraphRequestPrivate(other, q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
