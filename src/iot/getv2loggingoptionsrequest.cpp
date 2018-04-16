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

#include "getv2loggingoptionsrequest.h"
#include "getv2loggingoptionsrequest_p.h"
#include "getv2loggingoptionsresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::GetV2LoggingOptionsRequest
 *
 * \brief The GetV2LoggingOptionsRequest class provides an interface for IoT GetV2LoggingOptions requests.
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
 * \sa IoTClient::getV2LoggingOptions
 */

/*!
 * @brief  Constructs a new GetV2LoggingOptionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetV2LoggingOptionsRequest::GetV2LoggingOptionsRequest(const GetV2LoggingOptionsRequest &other)
    : IoTRequest(new GetV2LoggingOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetV2LoggingOptionsRequest object.
 */
GetV2LoggingOptionsRequest::GetV2LoggingOptionsRequest()
    : IoTRequest(new GetV2LoggingOptionsRequestPrivate(IoTRequest::GetV2LoggingOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetV2LoggingOptionsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetV2LoggingOptionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetV2LoggingOptionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * GetV2LoggingOptionsRequest::response(QNetworkReply * const reply) const
{
    return new GetV2LoggingOptionsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetV2LoggingOptionsRequestPrivate
 *
 * @brief  Private implementation for GetV2LoggingOptionsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetV2LoggingOptionsRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public GetV2LoggingOptionsRequest instance.
 */
GetV2LoggingOptionsRequestPrivate::GetV2LoggingOptionsRequestPrivate(
    const IoTRequest::Action action, GetV2LoggingOptionsRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetV2LoggingOptionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetV2LoggingOptionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetV2LoggingOptionsRequest instance.
 */
GetV2LoggingOptionsRequestPrivate::GetV2LoggingOptionsRequestPrivate(
    const GetV2LoggingOptionsRequestPrivate &other, GetV2LoggingOptionsRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
