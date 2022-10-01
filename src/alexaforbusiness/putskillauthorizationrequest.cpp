// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putskillauthorizationrequest.h"
#include "putskillauthorizationrequest_p.h"
#include "putskillauthorizationresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::PutSkillAuthorizationRequest
 * \brief The PutSkillAuthorizationRequest class provides an interface for AlexaForBusiness PutSkillAuthorization requests.
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
 * \sa AlexaForBusinessClient::putSkillAuthorization
 */

/*!
 * Constructs a copy of \a other.
 */
PutSkillAuthorizationRequest::PutSkillAuthorizationRequest(const PutSkillAuthorizationRequest &other)
    : AlexaForBusinessRequest(new PutSkillAuthorizationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutSkillAuthorizationRequest object.
 */
PutSkillAuthorizationRequest::PutSkillAuthorizationRequest()
    : AlexaForBusinessRequest(new PutSkillAuthorizationRequestPrivate(AlexaForBusinessRequest::PutSkillAuthorizationAction, this))
{

}

/*!
 * \reimp
 */
bool PutSkillAuthorizationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutSkillAuthorizationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutSkillAuthorizationRequest::response(QNetworkReply * const reply) const
{
    return new PutSkillAuthorizationResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::PutSkillAuthorizationRequestPrivate
 * \brief The PutSkillAuthorizationRequestPrivate class provides private implementation for PutSkillAuthorizationRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a PutSkillAuthorizationRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
PutSkillAuthorizationRequestPrivate::PutSkillAuthorizationRequestPrivate(
    const AlexaForBusinessRequest::Action action, PutSkillAuthorizationRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutSkillAuthorizationRequest
 * class' copy constructor.
 */
PutSkillAuthorizationRequestPrivate::PutSkillAuthorizationRequestPrivate(
    const PutSkillAuthorizationRequestPrivate &other, PutSkillAuthorizationRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
