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

#include "deletebillinggrouprequest.h"
#include "deletebillinggrouprequest_p.h"
#include "deletebillinggroupresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DeleteBillingGroupRequest
 * \brief The DeleteBillingGroupRequest class provides an interface for IoT DeleteBillingGroup requests.
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
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 * 
 *  Guide</a>>
 * 
 *  For information about how to use the credentials provider for AWS IoT, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/authorizing-direct-aws.html">Authorizing Direct Calls to AWS
 *
 * \sa IoTClient::deleteBillingGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBillingGroupRequest::DeleteBillingGroupRequest(const DeleteBillingGroupRequest &other)
    : IoTRequest(new DeleteBillingGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBillingGroupRequest object.
 */
DeleteBillingGroupRequest::DeleteBillingGroupRequest()
    : IoTRequest(new DeleteBillingGroupRequestPrivate(IoTRequest::DeleteBillingGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBillingGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBillingGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBillingGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBillingGroupResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::DeleteBillingGroupRequestPrivate
 * \brief The DeleteBillingGroupRequestPrivate class provides private implementation for DeleteBillingGroupRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a DeleteBillingGroupRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
DeleteBillingGroupRequestPrivate::DeleteBillingGroupRequestPrivate(
    const IoTRequest::Action action, DeleteBillingGroupRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBillingGroupRequest
 * class' copy constructor.
 */
DeleteBillingGroupRequestPrivate::DeleteBillingGroupRequestPrivate(
    const DeleteBillingGroupRequestPrivate &other, DeleteBillingGroupRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
