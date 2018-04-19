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
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need to manage Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice
 *  skills using the Alexa Skills Kit, and the Alexa for Business APIs, and you can make these available as private skills
 *  for your organization. Alexa for Business also makes it easy to voice-enable your products and services, providing
 *  context-aware voice experiences for your
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
