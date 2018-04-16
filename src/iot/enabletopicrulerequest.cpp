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
 *
 * \brief The EnableTopicRuleRequest class provides an interface for IoT EnableTopicRule requests.
 *
 * \ingroup IoT
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
 * \sa IoTClient::enableTopicRule
 */

/*!
 * @brief  Constructs a new EnableTopicRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EnableTopicRuleRequest::EnableTopicRuleRequest(const EnableTopicRuleRequest &other)
    : IoTRequest(new EnableTopicRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new EnableTopicRuleRequest object.
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
 * @brief  Construct an EnableTopicRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EnableTopicRuleResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableTopicRuleRequest::response(QNetworkReply * const reply) const
{
    return new EnableTopicRuleResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  EnableTopicRuleRequestPrivate
 *
 * @brief  Private implementation for EnableTopicRuleRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new EnableTopicRuleRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public EnableTopicRuleRequest instance.
 */
EnableTopicRuleRequestPrivate::EnableTopicRuleRequestPrivate(
    const IoTRequest::Action action, EnableTopicRuleRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new EnableTopicRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EnableTopicRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EnableTopicRuleRequest instance.
 */
EnableTopicRuleRequestPrivate::EnableTopicRuleRequestPrivate(
    const EnableTopicRuleRequestPrivate &other, EnableTopicRuleRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
