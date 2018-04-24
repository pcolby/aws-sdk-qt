/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeauthorizerrequest.h"
#include "describeauthorizerrequest_p.h"
#include "describeauthorizerresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DescribeAuthorizerRequest
 * \brief The DescribeAuthorizerRequest class provides an interface for IoT DescribeAuthorizer requests.
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
 * \sa IoTClient::describeAuthorizer
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAuthorizerRequest::DescribeAuthorizerRequest(const DescribeAuthorizerRequest &other)
    : IoTRequest(new DescribeAuthorizerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAuthorizerRequest object.
 */
DescribeAuthorizerRequest::DescribeAuthorizerRequest()
    : IoTRequest(new DescribeAuthorizerRequestPrivate(IoTRequest::DescribeAuthorizerAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAuthorizerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAuthorizerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAuthorizerRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAuthorizerResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::DescribeAuthorizerRequestPrivate
 * \brief The DescribeAuthorizerRequestPrivate class provides private implementation for DescribeAuthorizerRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a DescribeAuthorizerRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
DescribeAuthorizerRequestPrivate::DescribeAuthorizerRequestPrivate(
    const IoTRequest::Action action, DescribeAuthorizerRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAuthorizerRequest
 * class' copy constructor.
 */
DescribeAuthorizerRequestPrivate::DescribeAuthorizerRequestPrivate(
    const DescribeAuthorizerRequestPrivate &other, DescribeAuthorizerRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
