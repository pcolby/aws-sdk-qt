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

#include "listv2logginglevelsrequest.h"
#include "listv2logginglevelsrequest_p.h"
#include "listv2logginglevelsresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::ListV2LoggingLevelsRequest
 *
 * \brief The ListV2LoggingLevelsRequest class provides an interface for IoT ListV2LoggingLevels requests.
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
 * \sa IoTClient::listV2LoggingLevels
 */

/*!
 * @brief  Constructs a new ListV2LoggingLevelsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListV2LoggingLevelsRequest::ListV2LoggingLevelsRequest(const ListV2LoggingLevelsRequest &other)
    : IoTRequest(new ListV2LoggingLevelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListV2LoggingLevelsRequest object.
 */
ListV2LoggingLevelsRequest::ListV2LoggingLevelsRequest()
    : IoTRequest(new ListV2LoggingLevelsRequestPrivate(IoTRequest::ListV2LoggingLevelsAction, this))
{

}

/*!
 * \reimp
 */
bool ListV2LoggingLevelsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListV2LoggingLevelsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListV2LoggingLevelsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * ListV2LoggingLevelsRequest::response(QNetworkReply * const reply) const
{
    return new ListV2LoggingLevelsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListV2LoggingLevelsRequestPrivate
 *
 * @brief  Private implementation for ListV2LoggingLevelsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListV2LoggingLevelsRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ListV2LoggingLevelsRequest instance.
 */
ListV2LoggingLevelsRequestPrivate::ListV2LoggingLevelsRequestPrivate(
    const IoTRequest::Action action, ListV2LoggingLevelsRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListV2LoggingLevelsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListV2LoggingLevelsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListV2LoggingLevelsRequest instance.
 */
ListV2LoggingLevelsRequestPrivate::ListV2LoggingLevelsRequestPrivate(
    const ListV2LoggingLevelsRequestPrivate &other, ListV2LoggingLevelsRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
