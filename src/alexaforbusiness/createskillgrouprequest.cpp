// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createskillgrouprequest.h"
#include "createskillgrouprequest_p.h"
#include "createskillgroupresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::CreateSkillGroupRequest
 * \brief The CreateSkillGroupRequest class provides an interface for AlexaForBusiness CreateSkillGroup requests.
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
 * \sa AlexaForBusinessClient::createSkillGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSkillGroupRequest::CreateSkillGroupRequest(const CreateSkillGroupRequest &other)
    : AlexaForBusinessRequest(new CreateSkillGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSkillGroupRequest object.
 */
CreateSkillGroupRequest::CreateSkillGroupRequest()
    : AlexaForBusinessRequest(new CreateSkillGroupRequestPrivate(AlexaForBusinessRequest::CreateSkillGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSkillGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSkillGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSkillGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateSkillGroupResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::CreateSkillGroupRequestPrivate
 * \brief The CreateSkillGroupRequestPrivate class provides private implementation for CreateSkillGroupRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a CreateSkillGroupRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
CreateSkillGroupRequestPrivate::CreateSkillGroupRequestPrivate(
    const AlexaForBusinessRequest::Action action, CreateSkillGroupRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSkillGroupRequest
 * class' copy constructor.
 */
CreateSkillGroupRequestPrivate::CreateSkillGroupRequestPrivate(
    const CreateSkillGroupRequestPrivate &other, CreateSkillGroupRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
