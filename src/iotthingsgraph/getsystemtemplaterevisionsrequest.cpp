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

#include "getsystemtemplaterevisionsrequest.h"
#include "getsystemtemplaterevisionsrequest_p.h"
#include "getsystemtemplaterevisionsresponse.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::GetSystemTemplateRevisionsRequest
 * \brief The GetSystemTemplateRevisionsRequest class provides an interface for IoTThingsGraph GetSystemTemplateRevisions requests.
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
 * \sa IoTThingsGraphClient::getSystemTemplateRevisions
 */

/*!
 * Constructs a copy of \a other.
 */
GetSystemTemplateRevisionsRequest::GetSystemTemplateRevisionsRequest(const GetSystemTemplateRevisionsRequest &other)
    : IoTThingsGraphRequest(new GetSystemTemplateRevisionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSystemTemplateRevisionsRequest object.
 */
GetSystemTemplateRevisionsRequest::GetSystemTemplateRevisionsRequest()
    : IoTThingsGraphRequest(new GetSystemTemplateRevisionsRequestPrivate(IoTThingsGraphRequest::GetSystemTemplateRevisionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetSystemTemplateRevisionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSystemTemplateRevisionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSystemTemplateRevisionsRequest::response(QNetworkReply * const reply) const
{
    return new GetSystemTemplateRevisionsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTThingsGraph::GetSystemTemplateRevisionsRequestPrivate
 * \brief The GetSystemTemplateRevisionsRequestPrivate class provides private implementation for GetSystemTemplateRevisionsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a GetSystemTemplateRevisionsRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
GetSystemTemplateRevisionsRequestPrivate::GetSystemTemplateRevisionsRequestPrivate(
    const IoTThingsGraphRequest::Action action, GetSystemTemplateRevisionsRequest * const q)
    : IoTThingsGraphRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSystemTemplateRevisionsRequest
 * class' copy constructor.
 */
GetSystemTemplateRevisionsRequestPrivate::GetSystemTemplateRevisionsRequestPrivate(
    const GetSystemTemplateRevisionsRequestPrivate &other, GetSystemTemplateRevisionsRequest * const q)
    : IoTThingsGraphRequestPrivate(other, q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
