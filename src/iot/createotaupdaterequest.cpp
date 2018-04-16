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

#include "createotaupdaterequest.h"
#include "createotaupdaterequest_p.h"
#include "createotaupdateresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::CreateOTAUpdateRequest
 *
 * \brief The CreateOTAUpdateRequest class encapsulates IoT CreateOTAUpdate requests.
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
 * \sa IoTClient::createOTAUpdate
 */

/*!
 * @brief  Constructs a new CreateOTAUpdateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateOTAUpdateRequest::CreateOTAUpdateRequest(const CreateOTAUpdateRequest &other)
    : IoTRequest(new CreateOTAUpdateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateOTAUpdateRequest object.
 */
CreateOTAUpdateRequest::CreateOTAUpdateRequest()
    : IoTRequest(new CreateOTAUpdateRequestPrivate(IoTRequest::CreateOTAUpdateAction, this))
{

}

/*!
 * \reimp
 */
bool CreateOTAUpdateRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateOTAUpdateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateOTAUpdateResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateOTAUpdateRequest::response(QNetworkReply * const reply) const
{
    return new CreateOTAUpdateResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateOTAUpdateRequestPrivate
 *
 * @brief  Private implementation for CreateOTAUpdateRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateOTAUpdateRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public CreateOTAUpdateRequest instance.
 */
CreateOTAUpdateRequestPrivate::CreateOTAUpdateRequestPrivate(
    const IoTRequest::Action action, CreateOTAUpdateRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateOTAUpdateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateOTAUpdateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateOTAUpdateRequest instance.
 */
CreateOTAUpdateRequestPrivate::CreateOTAUpdateRequestPrivate(
    const CreateOTAUpdateRequestPrivate &other, CreateOTAUpdateRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
