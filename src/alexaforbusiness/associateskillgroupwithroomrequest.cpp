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

#include "associateskillgroupwithroomrequest.h"
#include "associateskillgroupwithroomrequest_p.h"
#include "associateskillgroupwithroomresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::AssociateSkillGroupWithRoomRequest
 *
 * \brief The AssociateSkillGroupWithRoomRequest class encapsulates AlexaForBusiness AssociateSkillGroupWithRoom requests.
 *
 * \ingroup AlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need to manage Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice
 *  skills using the Alexa Skills Kit, and the Alexa for Business APIs, and you can make these available as private skills
 *  for your organization. Alexa for Business also makes it easy to voice-enable your products and services, providing
 *  context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::associateSkillGroupWithRoom
 */

/*!
 * @brief  Constructs a new AssociateSkillGroupWithRoomRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateSkillGroupWithRoomRequest::AssociateSkillGroupWithRoomRequest(const AssociateSkillGroupWithRoomRequest &other)
    : AlexaForBusinessRequest(new AssociateSkillGroupWithRoomRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new AssociateSkillGroupWithRoomRequest object.
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
 * @brief  Construct an AssociateSkillGroupWithRoomResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateSkillGroupWithRoomResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateSkillGroupWithRoomRequest::response(QNetworkReply * const reply) const
{
    return new AssociateSkillGroupWithRoomResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  AssociateSkillGroupWithRoomRequestPrivate
 *
 * @brief  Private implementation for AssociateSkillGroupWithRoomRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AssociateSkillGroupWithRoomRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public AssociateSkillGroupWithRoomRequest instance.
 */
AssociateSkillGroupWithRoomRequestPrivate::AssociateSkillGroupWithRoomRequestPrivate(
    const AlexaForBusinessRequest::Action action, AssociateSkillGroupWithRoomRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new AssociateSkillGroupWithRoomRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateSkillGroupWithRoomRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateSkillGroupWithRoomRequest instance.
 */
AssociateSkillGroupWithRoomRequestPrivate::AssociateSkillGroupWithRoomRequestPrivate(
    const AssociateSkillGroupWithRoomRequestPrivate &other, AssociateSkillGroupWithRoomRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
