// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateskillgroupfromroomrequest.h"
#include "disassociateskillgroupfromroomrequest_p.h"
#include "disassociateskillgroupfromroomresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DisassociateSkillGroupFromRoomRequest
 * \brief The DisassociateSkillGroupFromRoomRequest class provides an interface for AlexaForBusiness DisassociateSkillGroupFromRoom requests.
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
 * \sa AlexaForBusinessClient::disassociateSkillGroupFromRoom
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateSkillGroupFromRoomRequest::DisassociateSkillGroupFromRoomRequest(const DisassociateSkillGroupFromRoomRequest &other)
    : AlexaForBusinessRequest(new DisassociateSkillGroupFromRoomRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateSkillGroupFromRoomRequest object.
 */
DisassociateSkillGroupFromRoomRequest::DisassociateSkillGroupFromRoomRequest()
    : AlexaForBusinessRequest(new DisassociateSkillGroupFromRoomRequestPrivate(AlexaForBusinessRequest::DisassociateSkillGroupFromRoomAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateSkillGroupFromRoomRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateSkillGroupFromRoomResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateSkillGroupFromRoomRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateSkillGroupFromRoomResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::DisassociateSkillGroupFromRoomRequestPrivate
 * \brief The DisassociateSkillGroupFromRoomRequestPrivate class provides private implementation for DisassociateSkillGroupFromRoomRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DisassociateSkillGroupFromRoomRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
DisassociateSkillGroupFromRoomRequestPrivate::DisassociateSkillGroupFromRoomRequestPrivate(
    const AlexaForBusinessRequest::Action action, DisassociateSkillGroupFromRoomRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateSkillGroupFromRoomRequest
 * class' copy constructor.
 */
DisassociateSkillGroupFromRoomRequestPrivate::DisassociateSkillGroupFromRoomRequestPrivate(
    const DisassociateSkillGroupFromRoomRequestPrivate &other, DisassociateSkillGroupFromRoomRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
