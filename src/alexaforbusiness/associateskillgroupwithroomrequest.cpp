/*
    Copyright 2013-2018 Paul Colby

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

#include "associateskillgroupwithroomrequest.h"
#include "associateskillgroupwithroomrequest_p.h"
#include "associateskillgroupwithroomresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::AssociateSkillGroupWithRoomRequest
 * \brief The AssociateSkillGroupWithRoomRequest class provides an interface for AlexaForBusiness AssociateSkillGroupWithRoom requests.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need for managing Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware
 *  voice skills using the Alexa Skills Kit and the Alexa for Business API operations. You can make also these available as
 *  private skills for your organization. Alexa for Business makes it easy to voice-enable your products and services,
 *  providing context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::associateSkillGroupWithRoom
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateSkillGroupWithRoomRequest::AssociateSkillGroupWithRoomRequest(const AssociateSkillGroupWithRoomRequest &other)
    : AlexaForBusinessRequest(new AssociateSkillGroupWithRoomRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateSkillGroupWithRoomRequest object.
 */
AssociateSkillGroupWithRoomRequest::AssociateSkillGroupWithRoomRequest()
    : AlexaForBusinessRequest(new AssociateSkillGroupWithRoomRequestPrivate(AlexaForBusinessRequest::AssociateSkillGroupWithRoomAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateSkillGroupWithRoomRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateSkillGroupWithRoomResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateSkillGroupWithRoomRequest::response(QNetworkReply * const reply) const
{
    return new AssociateSkillGroupWithRoomResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::AssociateSkillGroupWithRoomRequestPrivate
 * \brief The AssociateSkillGroupWithRoomRequestPrivate class provides private implementation for AssociateSkillGroupWithRoomRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a AssociateSkillGroupWithRoomRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
AssociateSkillGroupWithRoomRequestPrivate::AssociateSkillGroupWithRoomRequestPrivate(
    const AlexaForBusinessRequest::Action action, AssociateSkillGroupWithRoomRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateSkillGroupWithRoomRequest
 * class' copy constructor.
 */
AssociateSkillGroupWithRoomRequestPrivate::AssociateSkillGroupWithRoomRequestPrivate(
    const AssociateSkillGroupWithRoomRequestPrivate &other, AssociateSkillGroupWithRoomRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
