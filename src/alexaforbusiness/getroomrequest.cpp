/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getroomrequest.h"
#include "getroomrequest_p.h"
#include "getroomresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::GetRoomRequest
 * \brief The GetRoomRequest class provides an interface for AlexaForBusiness GetRoom requests.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business helps you use Alexa in your organization. Alexa for Business provides you with the tools to manage
 *  Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice skills using
 *  the Alexa Skills Kit and the Alexa for Business API operations. You can also make these available as private skills for
 *  your organization. Alexa for Business makes it efficient to voice-enable your products and services, thus providing
 *  context-aware voice experiences for your customers. Device makers building with the Alexa Voice Service (AVS) can create
 *  fully integrated solutions, register their products with Alexa for Business, and manage them as shared devices in their
 *  organization.
 *
 * \sa AlexaForBusinessClient::getRoom
 */

/*!
 * Constructs a copy of \a other.
 */
GetRoomRequest::GetRoomRequest(const GetRoomRequest &other)
    : AlexaForBusinessRequest(new GetRoomRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRoomRequest object.
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
 * Returns a GetRoomResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRoomRequest::response(QNetworkReply * const reply) const
{
    return new GetRoomResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::GetRoomRequestPrivate
 * \brief The GetRoomRequestPrivate class provides private implementation for GetRoomRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a GetRoomRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
GetRoomRequestPrivate::GetRoomRequestPrivate(
    const AlexaForBusinessRequest::Action action, GetRoomRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRoomRequest
 * class' copy constructor.
 */
GetRoomRequestPrivate::GetRoomRequestPrivate(
    const GetRoomRequestPrivate &other, GetRoomRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
