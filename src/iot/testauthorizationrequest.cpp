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

#include "testauthorizationrequest.h"
#include "testauthorizationrequest_p.h"
#include "testauthorizationresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::TestAuthorizationRequest
 * \brief The TestAuthorizationRequest class provides an interface for IoT TestAuthorization requests.
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
 * \sa IoTClient::testAuthorization
 */

/*!
 * Constructs a copy of \a other.
 */
TestAuthorizationRequest::TestAuthorizationRequest(const TestAuthorizationRequest &other)
    : IoTRequest(new TestAuthorizationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TestAuthorizationRequest object.
 */
TestAuthorizationRequest::TestAuthorizationRequest()
    : IoTRequest(new TestAuthorizationRequestPrivate(IoTRequest::TestAuthorizationAction, this))
{

}

/*!
 * \reimp
 */
bool TestAuthorizationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TestAuthorizationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TestAuthorizationRequest::response(QNetworkReply * const reply) const
{
    return new TestAuthorizationResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::TestAuthorizationRequestPrivate
 * \brief The TestAuthorizationRequestPrivate class provides private implementation for TestAuthorizationRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a TestAuthorizationRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
TestAuthorizationRequestPrivate::TestAuthorizationRequestPrivate(
    const IoTRequest::Action action, TestAuthorizationRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TestAuthorizationRequest
 * class' copy constructor.
 */
TestAuthorizationRequestPrivate::TestAuthorizationRequestPrivate(
    const TestAuthorizationRequestPrivate &other, TestAuthorizationRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
