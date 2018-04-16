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

#include "getroomrequest.h"
#include "getroomrequest_p.h"
#include "getroomresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::GetRoomRequest
 *
 * \brief The GetRoomRequest class provides an interface for AlexaForBusiness GetRoom requests.
 *
 * \ingroup AlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need to manage Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice
 *  skills using the Alexa Skills Kit, and the Alexa for Business APIs, and you can make these available as private skills
 *  for your organization. Alexa for Business also makes it easy to voice-enable your products and services, providing
 *  context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::getRoom
 */

/*!
 * @brief  Constructs a new GetRoomRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetRoomRequest::GetRoomRequest(const GetRoomRequest &other)
    : AlexaForBusinessRequest(new GetRoomRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetRoomRequest object.
 */
GetRoomRequest::GetRoomRequest()
    : AlexaForBusinessRequest(new GetRoomRequestPrivate(AlexaForBusinessRequest::GetRoomAction, this))
{

}

/*!
 * \reimp
 */
bool GetRoomRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetRoomResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetRoomResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRoomRequest::response(QNetworkReply * const reply) const
{
    return new GetRoomResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetRoomRequestPrivate
 *
 * @brief  Private implementation for GetRoomRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetRoomRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public GetRoomRequest instance.
 */
GetRoomRequestPrivate::GetRoomRequestPrivate(
    const AlexaForBusinessRequest::Action action, GetRoomRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetRoomRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetRoomRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetRoomRequest instance.
 */
GetRoomRequestPrivate::GetRoomRequestPrivate(
    const GetRoomRequestPrivate &other, GetRoomRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
