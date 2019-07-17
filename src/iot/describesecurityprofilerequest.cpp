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

#include "describesecurityprofilerequest.h"
#include "describesecurityprofilerequest_p.h"
#include "describesecurityprofileresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DescribeSecurityProfileRequest
 * \brief The DescribeSecurityProfileRequest class provides an interface for IoT DescribeSecurityProfile requests.
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
 * \sa IoTClient::describeSecurityProfile
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSecurityProfileRequest::DescribeSecurityProfileRequest(const DescribeSecurityProfileRequest &other)
    : IoTRequest(new DescribeSecurityProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSecurityProfileRequest object.
 */
DescribeSecurityProfileRequest::DescribeSecurityProfileRequest()
    : IoTRequest(new DescribeSecurityProfileRequestPrivate(IoTRequest::DescribeSecurityProfileAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSecurityProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSecurityProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSecurityProfileRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSecurityProfileResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::DescribeSecurityProfileRequestPrivate
 * \brief The DescribeSecurityProfileRequestPrivate class provides private implementation for DescribeSecurityProfileRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a DescribeSecurityProfileRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
DescribeSecurityProfileRequestPrivate::DescribeSecurityProfileRequestPrivate(
    const IoTRequest::Action action, DescribeSecurityProfileRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSecurityProfileRequest
 * class' copy constructor.
 */
DescribeSecurityProfileRequestPrivate::DescribeSecurityProfileRequestPrivate(
    const DescribeSecurityProfileRequestPrivate &other, DescribeSecurityProfileRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
