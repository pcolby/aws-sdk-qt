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

#include "updatedevicerequest.h"
#include "updatedevicerequest_p.h"
#include "updatedeviceresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::UpdateDeviceRequest
 *
 * \brief The UpdateDeviceRequest class encapsulates AlexaForBusiness UpdateDevice requests.
 *
 * \ingroup AlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need to manage Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice
 *  skills using the Alexa Skills Kit, and the Alexa for Business APIs, and you can make these available as private skills
 *  for your organization. Alexa for Business also makes it easy to voice-enable your products and services, providing
 *  context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::updateDevice
 */

/*!
 * @brief  Constructs a new UpdateDeviceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateDeviceRequest::UpdateDeviceRequest(const UpdateDeviceRequest &other)
    : AlexaForBusinessRequest(new UpdateDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateDeviceRequest object.
 */
UpdateDeviceRequest::UpdateDeviceRequest()
    : AlexaForBusinessRequest(new UpdateDeviceRequestPrivate(AlexaForBusinessRequest::UpdateDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDeviceRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateDeviceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateDeviceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDeviceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDeviceResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateDeviceRequestPrivate
 *
 * @brief  Private implementation for UpdateDeviceRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateDeviceRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public UpdateDeviceRequest instance.
 */
UpdateDeviceRequestPrivate::UpdateDeviceRequestPrivate(
    const AlexaForBusinessRequest::Action action, UpdateDeviceRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateDeviceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateDeviceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateDeviceRequest instance.
 */
UpdateDeviceRequestPrivate::UpdateDeviceRequestPrivate(
    const UpdateDeviceRequestPrivate &other, UpdateDeviceRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
