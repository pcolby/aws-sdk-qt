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

#include "listthingregistrationtaskreportsrequest.h"
#include "listthingregistrationtaskreportsrequest_p.h"
#include "listthingregistrationtaskreportsresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::ListThingRegistrationTaskReportsRequest
 * \brief The ListThingRegistrationTaskReportsRequest class provides an interface for IoT ListThingRegistrationTaskReports requests.
 *
 * \inmodule QtAwsIoT
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT provides secure, bi-directional communication between Internet-connected devices (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. You can discover your custom IoT-Data endpoint to communicate
 *  with, configure rules for data processing and integration with other services, organize resources associated with each
 *  device (Registry), configure logging, and create and manage policies and credentials to authenticate
 * 
 *  devices>
 * 
 *  For more information about how AWS IoT works, see the <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 * 
 *  Guide</a>>
 * 
 *  For information about how to use the credentials provider for AWS IoT, see <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/authorizing-direct-aws.html">Authorizing Direct Calls to AWS
 *
 * \sa IoTClient::listThingRegistrationTaskReports
 */

/*!
 * Constructs a copy of \a other.
 */
ListThingRegistrationTaskReportsRequest::ListThingRegistrationTaskReportsRequest(const ListThingRegistrationTaskReportsRequest &other)
    : IoTRequest(new ListThingRegistrationTaskReportsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListThingRegistrationTaskReportsRequest object.
 */
ListThingRegistrationTaskReportsRequest::ListThingRegistrationTaskReportsRequest()
    : IoTRequest(new ListThingRegistrationTaskReportsRequestPrivate(IoTRequest::ListThingRegistrationTaskReportsAction, this))
{

}

/*!
 * \reimp
 */
bool ListThingRegistrationTaskReportsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListThingRegistrationTaskReportsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListThingRegistrationTaskReportsRequest::response(QNetworkReply * const reply) const
{
    return new ListThingRegistrationTaskReportsResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::ListThingRegistrationTaskReportsRequestPrivate
 * \brief The ListThingRegistrationTaskReportsRequestPrivate class provides private implementation for ListThingRegistrationTaskReportsRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a ListThingRegistrationTaskReportsRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
ListThingRegistrationTaskReportsRequestPrivate::ListThingRegistrationTaskReportsRequestPrivate(
    const IoTRequest::Action action, ListThingRegistrationTaskReportsRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListThingRegistrationTaskReportsRequest
 * class' copy constructor.
 */
ListThingRegistrationTaskReportsRequestPrivate::ListThingRegistrationTaskReportsRequestPrivate(
    const ListThingRegistrationTaskReportsRequestPrivate &other, ListThingRegistrationTaskReportsRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
