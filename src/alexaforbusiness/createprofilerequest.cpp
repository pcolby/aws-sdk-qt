// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createprofilerequest.h"
#include "createprofilerequest_p.h"
#include "createprofileresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::CreateProfileRequest
 * \brief The CreateProfileRequest class provides an interface for AlexaForBusiness CreateProfile requests.
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
 * \sa AlexaForBusinessClient::createProfile
 */

/*!
 * Constructs a copy of \a other.
 */
CreateProfileRequest::CreateProfileRequest(const CreateProfileRequest &other)
    : AlexaForBusinessRequest(new CreateProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateProfileRequest object.
 */
CreateProfileRequest::CreateProfileRequest()
    : AlexaForBusinessRequest(new CreateProfileRequestPrivate(AlexaForBusinessRequest::CreateProfileAction, this))
{

}

/*!
 * \reimp
 */
bool CreateProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateProfileRequest::response(QNetworkReply * const reply) const
{
    return new CreateProfileResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::CreateProfileRequestPrivate
 * \brief The CreateProfileRequestPrivate class provides private implementation for CreateProfileRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a CreateProfileRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
CreateProfileRequestPrivate::CreateProfileRequestPrivate(
    const AlexaForBusinessRequest::Action action, CreateProfileRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateProfileRequest
 * class' copy constructor.
 */
CreateProfileRequestPrivate::CreateProfileRequestPrivate(
    const CreateProfileRequestPrivate &other, CreateProfileRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
