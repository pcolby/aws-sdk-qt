// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconferenceproviderrequest.h"
#include "createconferenceproviderrequest_p.h"
#include "createconferenceproviderresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::CreateConferenceProviderRequest
 * \brief The CreateConferenceProviderRequest class provides an interface for AlexaForBusiness CreateConferenceProvider requests.
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
 * \sa AlexaForBusinessClient::createConferenceProvider
 */

/*!
 * Constructs a copy of \a other.
 */
CreateConferenceProviderRequest::CreateConferenceProviderRequest(const CreateConferenceProviderRequest &other)
    : AlexaForBusinessRequest(new CreateConferenceProviderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateConferenceProviderRequest object.
 */
CreateConferenceProviderRequest::CreateConferenceProviderRequest()
    : AlexaForBusinessRequest(new CreateConferenceProviderRequestPrivate(AlexaForBusinessRequest::CreateConferenceProviderAction, this))
{

}

/*!
 * \reimp
 */
bool CreateConferenceProviderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateConferenceProviderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateConferenceProviderRequest::response(QNetworkReply * const reply) const
{
    return new CreateConferenceProviderResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::CreateConferenceProviderRequestPrivate
 * \brief The CreateConferenceProviderRequestPrivate class provides private implementation for CreateConferenceProviderRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a CreateConferenceProviderRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
CreateConferenceProviderRequestPrivate::CreateConferenceProviderRequestPrivate(
    const AlexaForBusinessRequest::Action action, CreateConferenceProviderRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateConferenceProviderRequest
 * class' copy constructor.
 */
CreateConferenceProviderRequestPrivate::CreateConferenceProviderRequestPrivate(
    const CreateConferenceProviderRequestPrivate &other, CreateConferenceProviderRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
