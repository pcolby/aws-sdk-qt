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

#include "setv2loggingoptionsrequest.h"
#include "setv2loggingoptionsrequest_p.h"
#include "setv2loggingoptionsresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::SetV2LoggingOptionsRequest
 *
 * \brief The SetV2LoggingOptionsRequest class provides an interface for IoT SetV2LoggingOptions requests.
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
 * \sa IoTClient::setV2LoggingOptions
 */

/*!
 * @brief  Constructs a new SetV2LoggingOptionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetV2LoggingOptionsRequest::SetV2LoggingOptionsRequest(const SetV2LoggingOptionsRequest &other)
    : IoTRequest(new SetV2LoggingOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new SetV2LoggingOptionsRequest object.
 */
SetV2LoggingOptionsRequest::SetV2LoggingOptionsRequest()
    : IoTRequest(new SetV2LoggingOptionsRequestPrivate(IoTRequest::SetV2LoggingOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool SetV2LoggingOptionsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an SetV2LoggingOptionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetV2LoggingOptionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * SetV2LoggingOptionsRequest::response(QNetworkReply * const reply) const
{
    return new SetV2LoggingOptionsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  SetV2LoggingOptionsRequestPrivate
 *
 * @brief  Private implementation for SetV2LoggingOptionsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SetV2LoggingOptionsRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public SetV2LoggingOptionsRequest instance.
 */
SetV2LoggingOptionsRequestPrivate::SetV2LoggingOptionsRequestPrivate(
    const IoTRequest::Action action, SetV2LoggingOptionsRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new SetV2LoggingOptionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetV2LoggingOptionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetV2LoggingOptionsRequest instance.
 */
SetV2LoggingOptionsRequestPrivate::SetV2LoggingOptionsRequestPrivate(
    const SetV2LoggingOptionsRequestPrivate &other, SetV2LoggingOptionsRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
