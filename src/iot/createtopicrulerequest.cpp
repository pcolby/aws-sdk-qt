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

#include "createtopicrulerequest.h"
#include "createtopicrulerequest_p.h"
#include "createtopicruleresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::CreateTopicRuleRequest
 * \brief The CreateTopicRuleRequest class provides an interface for IoT CreateTopicRule requests.
 *
 * \inmodule QtAwsIoT
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT provides secure, bi-directional communication between Internet-connected things (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. You can discover your custom IoT-Data endpoint to communicate
 *  with, configure rules for data processing and integration with other services, organize resources associated with each
 *  thing (Thing Registry), configure logging, and create and manage policies and credentials to authenticate
 * 
 *  things>
 * 
 *  For more information about how AWS IoT works, see the <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 *
 * \sa IoTClient::createTopicRule
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTopicRuleRequest::CreateTopicRuleRequest(const CreateTopicRuleRequest &other)
    : IoTRequest(new CreateTopicRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTopicRuleRequest object.
 */
CreateTopicRuleRequest::CreateTopicRuleRequest()
    : IoTRequest(new CreateTopicRuleRequestPrivate(IoTRequest::CreateTopicRuleAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTopicRuleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTopicRuleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTopicRuleRequest::response(QNetworkReply * const reply) const
{
    return new CreateTopicRuleResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::CreateTopicRuleRequestPrivate
 * \brief The CreateTopicRuleRequestPrivate class provides private implementation for CreateTopicRuleRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a CreateTopicRuleRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
CreateTopicRuleRequestPrivate::CreateTopicRuleRequestPrivate(
    const IoTRequest::Action action, CreateTopicRuleRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTopicRuleRequest
 * class' copy constructor.
 */
CreateTopicRuleRequestPrivate::CreateTopicRuleRequestPrivate(
    const CreateTopicRuleRequestPrivate &other, CreateTopicRuleRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
