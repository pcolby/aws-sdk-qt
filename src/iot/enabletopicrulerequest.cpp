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

#include "enabletopicrulerequest.h"
#include "enabletopicrulerequest_p.h"
#include "enabletopicruleresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::EnableTopicRuleRequest
 * \brief The EnableTopicRuleRequest class provides an interface for IoT EnableTopicRule requests.
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
 * \sa IoTClient::enableTopicRule
 */

/*!
 * Constructs a copy of \a other.
 */
EnableTopicRuleRequest::EnableTopicRuleRequest(const EnableTopicRuleRequest &other)
    : IoTRequest(new EnableTopicRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EnableTopicRuleRequest object.
 */
EnableTopicRuleRequest::EnableTopicRuleRequest()
    : IoTRequest(new EnableTopicRuleRequestPrivate(IoTRequest::EnableTopicRuleAction, this))
{

}

/*!
 * \reimp
 */
bool EnableTopicRuleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EnableTopicRuleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableTopicRuleRequest::response(QNetworkReply * const reply) const
{
    return new EnableTopicRuleResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::EnableTopicRuleRequestPrivate
 * \brief The EnableTopicRuleRequestPrivate class provides private implementation for EnableTopicRuleRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a EnableTopicRuleRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
EnableTopicRuleRequestPrivate::EnableTopicRuleRequestPrivate(
    const IoTRequest::Action action, EnableTopicRuleRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EnableTopicRuleRequest
 * class' copy constructor.
 */
EnableTopicRuleRequestPrivate::EnableTopicRuleRequestPrivate(
    const EnableTopicRuleRequestPrivate &other, EnableTopicRuleRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
