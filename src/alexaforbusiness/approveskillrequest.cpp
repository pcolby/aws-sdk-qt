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

#include "approveskillrequest.h"
#include "approveskillrequest_p.h"
#include "approveskillresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::ApproveSkillRequest
 * \brief The ApproveSkillRequest class provides an interface for AlexaForBusiness ApproveSkill requests.
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
 * \sa AlexaForBusinessClient::approveSkill
 */

/*!
 * Constructs a copy of \a other.
 */
ApproveSkillRequest::ApproveSkillRequest(const ApproveSkillRequest &other)
    : AlexaForBusinessRequest(new ApproveSkillRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ApproveSkillRequest object.
 */
ApproveSkillRequest::ApproveSkillRequest()
    : AlexaForBusinessRequest(new ApproveSkillRequestPrivate(AlexaForBusinessRequest::ApproveSkillAction, this))
{

}

/*!
 * \reimp
 */
bool ApproveSkillRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ApproveSkillResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ApproveSkillRequest::response(QNetworkReply * const reply) const
{
    return new ApproveSkillResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::ApproveSkillRequestPrivate
 * \brief The ApproveSkillRequestPrivate class provides private implementation for ApproveSkillRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a ApproveSkillRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
ApproveSkillRequestPrivate::ApproveSkillRequestPrivate(
    const AlexaForBusinessRequest::Action action, ApproveSkillRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ApproveSkillRequest
 * class' copy constructor.
 */
ApproveSkillRequestPrivate::ApproveSkillRequestPrivate(
    const ApproveSkillRequestPrivate &other, ApproveSkillRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
