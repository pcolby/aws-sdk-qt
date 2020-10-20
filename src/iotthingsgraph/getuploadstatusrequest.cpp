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

#include "getuploadstatusrequest.h"
#include "getuploadstatusrequest_p.h"
#include "getuploadstatusresponse.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::GetUploadStatusRequest
 * \brief The GetUploadStatusRequest class provides an interface for IoTThingsGraph GetUploadStatus requests.
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
 * \sa IoTThingsGraphClient::getUploadStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetUploadStatusRequest::GetUploadStatusRequest(const GetUploadStatusRequest &other)
    : IoTThingsGraphRequest(new GetUploadStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUploadStatusRequest object.
 */
GetUploadStatusRequest::GetUploadStatusRequest()
    : IoTThingsGraphRequest(new GetUploadStatusRequestPrivate(IoTThingsGraphRequest::GetUploadStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetUploadStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUploadStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUploadStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetUploadStatusResponse(*this, reply);
}

/*!
 * \class QtAws::IoTThingsGraph::GetUploadStatusRequestPrivate
 * \brief The GetUploadStatusRequestPrivate class provides private implementation for GetUploadStatusRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a GetUploadStatusRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
GetUploadStatusRequestPrivate::GetUploadStatusRequestPrivate(
    const IoTThingsGraphRequest::Action action, GetUploadStatusRequest * const q)
    : IoTThingsGraphRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUploadStatusRequest
 * class' copy constructor.
 */
GetUploadStatusRequestPrivate::GetUploadStatusRequestPrivate(
    const GetUploadStatusRequestPrivate &other, GetUploadStatusRequest * const q)
    : IoTThingsGraphRequestPrivate(other, q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
