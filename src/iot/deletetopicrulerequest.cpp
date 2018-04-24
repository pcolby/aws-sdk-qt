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

#include "deletetopicrulerequest.h"
#include "deletetopicrulerequest_p.h"
#include "deletetopicruleresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DeleteTopicRuleRequest
 * \brief The DeleteTopicRuleRequest class provides an interface for IoT DeleteTopicRule requests.
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
 * \sa IoTClient::deleteTopicRule
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTopicRuleRequest::DeleteTopicRuleRequest(const DeleteTopicRuleRequest &other)
    : IoTRequest(new DeleteTopicRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTopicRuleRequest object.
 */
DeleteTopicRuleRequest::DeleteTopicRuleRequest()
    : IoTRequest(new DeleteTopicRuleRequestPrivate(IoTRequest::DeleteTopicRuleAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTopicRuleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTopicRuleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTopicRuleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTopicRuleResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::DeleteTopicRuleRequestPrivate
 * \brief The DeleteTopicRuleRequestPrivate class provides private implementation for DeleteTopicRuleRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a DeleteTopicRuleRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
DeleteTopicRuleRequestPrivate::DeleteTopicRuleRequestPrivate(
    const IoTRequest::Action action, DeleteTopicRuleRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTopicRuleRequest
 * class' copy constructor.
 */
DeleteTopicRuleRequestPrivate::DeleteTopicRuleRequestPrivate(
    const DeleteTopicRuleRequestPrivate &other, DeleteTopicRuleRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
