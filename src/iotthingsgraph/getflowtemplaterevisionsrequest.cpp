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

#include "getflowtemplaterevisionsrequest.h"
#include "getflowtemplaterevisionsrequest_p.h"
#include "getflowtemplaterevisionsresponse.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::GetFlowTemplateRevisionsRequest
 * \brief The GetFlowTemplateRevisionsRequest class provides an interface for IoTThingsGraph GetFlowTemplateRevisions requests.
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
 * \sa IoTThingsGraphClient::getFlowTemplateRevisions
 */

/*!
 * Constructs a copy of \a other.
 */
GetFlowTemplateRevisionsRequest::GetFlowTemplateRevisionsRequest(const GetFlowTemplateRevisionsRequest &other)
    : IoTThingsGraphRequest(new GetFlowTemplateRevisionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFlowTemplateRevisionsRequest object.
 */
GetFlowTemplateRevisionsRequest::GetFlowTemplateRevisionsRequest()
    : IoTThingsGraphRequest(new GetFlowTemplateRevisionsRequestPrivate(IoTThingsGraphRequest::GetFlowTemplateRevisionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetFlowTemplateRevisionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFlowTemplateRevisionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFlowTemplateRevisionsRequest::response(QNetworkReply * const reply) const
{
    return new GetFlowTemplateRevisionsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTThingsGraph::GetFlowTemplateRevisionsRequestPrivate
 * \brief The GetFlowTemplateRevisionsRequestPrivate class provides private implementation for GetFlowTemplateRevisionsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a GetFlowTemplateRevisionsRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
GetFlowTemplateRevisionsRequestPrivate::GetFlowTemplateRevisionsRequestPrivate(
    const IoTThingsGraphRequest::Action action, GetFlowTemplateRevisionsRequest * const q)
    : IoTThingsGraphRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFlowTemplateRevisionsRequest
 * class' copy constructor.
 */
GetFlowTemplateRevisionsRequestPrivate::GetFlowTemplateRevisionsRequestPrivate(
    const GetFlowTemplateRevisionsRequestPrivate &other, GetFlowTemplateRevisionsRequest * const q)
    : IoTThingsGraphRequestPrivate(other, q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
