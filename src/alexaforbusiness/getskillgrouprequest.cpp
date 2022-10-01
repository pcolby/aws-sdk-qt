// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getskillgrouprequest.h"
#include "getskillgrouprequest_p.h"
#include "getskillgroupresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::GetSkillGroupRequest
 * \brief The GetSkillGroupRequest class provides an interface for AlexaForBusiness GetSkillGroup requests.
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
 * \sa AlexaForBusinessClient::getSkillGroup
 */

/*!
 * Constructs a copy of \a other.
 */
GetSkillGroupRequest::GetSkillGroupRequest(const GetSkillGroupRequest &other)
    : AlexaForBusinessRequest(new GetSkillGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSkillGroupRequest object.
 */
GetSkillGroupRequest::GetSkillGroupRequest()
    : AlexaForBusinessRequest(new GetSkillGroupRequestPrivate(AlexaForBusinessRequest::GetSkillGroupAction, this))
{

}

/*!
 * \reimp
 */
bool GetSkillGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSkillGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSkillGroupRequest::response(QNetworkReply * const reply) const
{
    return new GetSkillGroupResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::GetSkillGroupRequestPrivate
 * \brief The GetSkillGroupRequestPrivate class provides private implementation for GetSkillGroupRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a GetSkillGroupRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
GetSkillGroupRequestPrivate::GetSkillGroupRequestPrivate(
    const AlexaForBusinessRequest::Action action, GetSkillGroupRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSkillGroupRequest
 * class' copy constructor.
 */
GetSkillGroupRequestPrivate::GetSkillGroupRequestPrivate(
    const GetSkillGroupRequestPrivate &other, GetSkillGroupRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
