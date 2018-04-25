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

#include "putroomskillparameterrequest.h"
#include "putroomskillparameterrequest_p.h"
#include "putroomskillparameterresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::PutRoomSkillParameterRequest
 * \brief The PutRoomSkillParameterRequest class provides an interface for AlexaForBusiness PutRoomSkillParameter requests.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need to manage Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice
 *  skills using the Alexa Skills Kit, and the Alexa for Business APIs, and you can make these available as private skills
 *  for your organization. Alexa for Business also makes it easy to voice-enable your products and services, providing
 *  context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::putRoomSkillParameter
 */

/*!
 * Constructs a copy of \a other.
 */
PutRoomSkillParameterRequest::PutRoomSkillParameterRequest(const PutRoomSkillParameterRequest &other)
    : AlexaForBusinessRequest(new PutRoomSkillParameterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutRoomSkillParameterRequest object.
 */
PutRoomSkillParameterRequest::PutRoomSkillParameterRequest()
    : AlexaForBusinessRequest(new PutRoomSkillParameterRequestPrivate(AlexaForBusinessRequest::PutRoomSkillParameterAction, this))
{

}

/*!
 * \reimp
 */
bool PutRoomSkillParameterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutRoomSkillParameterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutRoomSkillParameterRequest::response(QNetworkReply * const reply) const
{
    return new PutRoomSkillParameterResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::PutRoomSkillParameterRequestPrivate
 * \brief The PutRoomSkillParameterRequestPrivate class provides private implementation for PutRoomSkillParameterRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a PutRoomSkillParameterRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
PutRoomSkillParameterRequestPrivate::PutRoomSkillParameterRequestPrivate(
    const AlexaForBusinessRequest::Action action, PutRoomSkillParameterRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutRoomSkillParameterRequest
 * class' copy constructor.
 */
PutRoomSkillParameterRequestPrivate::PutRoomSkillParameterRequestPrivate(
    const PutRoomSkillParameterRequestPrivate &other, PutRoomSkillParameterRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
