// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateskillfromusersrequest.h"
#include "disassociateskillfromusersrequest_p.h"
#include "disassociateskillfromusersresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DisassociateSkillFromUsersRequest
 * \brief The DisassociateSkillFromUsersRequest class provides an interface for AlexaForBusiness DisassociateSkillFromUsers requests.
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
 * \sa AlexaForBusinessClient::disassociateSkillFromUsers
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateSkillFromUsersRequest::DisassociateSkillFromUsersRequest(const DisassociateSkillFromUsersRequest &other)
    : AlexaForBusinessRequest(new DisassociateSkillFromUsersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateSkillFromUsersRequest object.
 */
DisassociateSkillFromUsersRequest::DisassociateSkillFromUsersRequest()
    : AlexaForBusinessRequest(new DisassociateSkillFromUsersRequestPrivate(AlexaForBusinessRequest::DisassociateSkillFromUsersAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateSkillFromUsersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateSkillFromUsersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateSkillFromUsersRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateSkillFromUsersResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::DisassociateSkillFromUsersRequestPrivate
 * \brief The DisassociateSkillFromUsersRequestPrivate class provides private implementation for DisassociateSkillFromUsersRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DisassociateSkillFromUsersRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
DisassociateSkillFromUsersRequestPrivate::DisassociateSkillFromUsersRequestPrivate(
    const AlexaForBusinessRequest::Action action, DisassociateSkillFromUsersRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateSkillFromUsersRequest
 * class' copy constructor.
 */
DisassociateSkillFromUsersRequestPrivate::DisassociateSkillFromUsersRequestPrivate(
    const DisassociateSkillFromUsersRequestPrivate &other, DisassociateSkillFromUsersRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
