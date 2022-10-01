// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Alexa for Business helps you use Alexa in your organization. Alexa for Business provides you with the tools to manage
 *  Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice skills using
 *  the Alexa Skills Kit and the Alexa for Business API operations. You can also make these available as private skills for
 *  your organization. Alexa for Business makes it efficient to voice-enable your products and services, thus providing
 *  context-aware voice experiences for your customers. Device makers building with the Alexa Voice Service (AVS) can create
 *  fully integrated solutions, register their products with Alexa for Business, and manage them as shared devices in their
 *  organization.
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
