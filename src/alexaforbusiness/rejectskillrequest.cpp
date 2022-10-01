// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rejectskillrequest.h"
#include "rejectskillrequest_p.h"
#include "rejectskillresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::RejectSkillRequest
 * \brief The RejectSkillRequest class provides an interface for AlexaForBusiness RejectSkill requests.
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
 * \sa AlexaForBusinessClient::rejectSkill
 */

/*!
 * Constructs a copy of \a other.
 */
RejectSkillRequest::RejectSkillRequest(const RejectSkillRequest &other)
    : AlexaForBusinessRequest(new RejectSkillRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RejectSkillRequest object.
 */
RejectSkillRequest::RejectSkillRequest()
    : AlexaForBusinessRequest(new RejectSkillRequestPrivate(AlexaForBusinessRequest::RejectSkillAction, this))
{

}

/*!
 * \reimp
 */
bool RejectSkillRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RejectSkillResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RejectSkillRequest::response(QNetworkReply * const reply) const
{
    return new RejectSkillResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::RejectSkillRequestPrivate
 * \brief The RejectSkillRequestPrivate class provides private implementation for RejectSkillRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a RejectSkillRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
RejectSkillRequestPrivate::RejectSkillRequestPrivate(
    const AlexaForBusinessRequest::Action action, RejectSkillRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RejectSkillRequest
 * class' copy constructor.
 */
RejectSkillRequestPrivate::RejectSkillRequestPrivate(
    const RejectSkillRequestPrivate &other, RejectSkillRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
