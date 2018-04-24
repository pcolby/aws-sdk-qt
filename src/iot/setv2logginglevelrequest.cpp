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

#include "setv2logginglevelrequest.h"
#include "setv2logginglevelrequest_p.h"
#include "setv2logginglevelresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::SetV2LoggingLevelRequest
 * \brief The SetV2LoggingLevelRequest class provides an interface for IoT SetV2LoggingLevel requests.
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
 * \sa IoTClient::setV2LoggingLevel
 */

/*!
 * Constructs a copy of \a other.
 */
SetV2LoggingLevelRequest::SetV2LoggingLevelRequest(const SetV2LoggingLevelRequest &other)
    : IoTRequest(new SetV2LoggingLevelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SetV2LoggingLevelRequest object.
 */
SetV2LoggingLevelRequest::SetV2LoggingLevelRequest()
    : IoTRequest(new SetV2LoggingLevelRequestPrivate(IoTRequest::SetV2LoggingLevelAction, this))
{

}

/*!
 * \reimp
 */
bool SetV2LoggingLevelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SetV2LoggingLevelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SetV2LoggingLevelRequest::response(QNetworkReply * const reply) const
{
    return new SetV2LoggingLevelResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::SetV2LoggingLevelRequestPrivate
 * \brief The SetV2LoggingLevelRequestPrivate class provides private implementation for SetV2LoggingLevelRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a SetV2LoggingLevelRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
SetV2LoggingLevelRequestPrivate::SetV2LoggingLevelRequestPrivate(
    const IoTRequest::Action action, SetV2LoggingLevelRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SetV2LoggingLevelRequest
 * class' copy constructor.
 */
SetV2LoggingLevelRequestPrivate::SetV2LoggingLevelRequestPrivate(
    const SetV2LoggingLevelRequestPrivate &other, SetV2LoggingLevelRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
