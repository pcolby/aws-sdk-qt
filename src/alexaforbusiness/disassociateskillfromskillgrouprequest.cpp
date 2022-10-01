// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateskillfromskillgrouprequest.h"
#include "disassociateskillfromskillgrouprequest_p.h"
#include "disassociateskillfromskillgroupresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DisassociateSkillFromSkillGroupRequest
 * \brief The DisassociateSkillFromSkillGroupRequest class provides an interface for AlexaForBusiness DisassociateSkillFromSkillGroup requests.
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
 * \sa AlexaForBusinessClient::disassociateSkillFromSkillGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateSkillFromSkillGroupRequest::DisassociateSkillFromSkillGroupRequest(const DisassociateSkillFromSkillGroupRequest &other)
    : AlexaForBusinessRequest(new DisassociateSkillFromSkillGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateSkillFromSkillGroupRequest object.
 */
DisassociateSkillFromSkillGroupRequest::DisassociateSkillFromSkillGroupRequest()
    : AlexaForBusinessRequest(new DisassociateSkillFromSkillGroupRequestPrivate(AlexaForBusinessRequest::DisassociateSkillFromSkillGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateSkillFromSkillGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateSkillFromSkillGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateSkillFromSkillGroupRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateSkillFromSkillGroupResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::DisassociateSkillFromSkillGroupRequestPrivate
 * \brief The DisassociateSkillFromSkillGroupRequestPrivate class provides private implementation for DisassociateSkillFromSkillGroupRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DisassociateSkillFromSkillGroupRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
DisassociateSkillFromSkillGroupRequestPrivate::DisassociateSkillFromSkillGroupRequestPrivate(
    const AlexaForBusinessRequest::Action action, DisassociateSkillFromSkillGroupRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateSkillFromSkillGroupRequest
 * class' copy constructor.
 */
DisassociateSkillFromSkillGroupRequestPrivate::DisassociateSkillFromSkillGroupRequestPrivate(
    const DisassociateSkillFromSkillGroupRequestPrivate &other, DisassociateSkillFromSkillGroupRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
