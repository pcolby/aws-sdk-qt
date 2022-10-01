// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createnetworkprofilerequest.h"
#include "createnetworkprofilerequest_p.h"
#include "createnetworkprofileresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::CreateNetworkProfileRequest
 * \brief The CreateNetworkProfileRequest class provides an interface for AlexaForBusiness CreateNetworkProfile requests.
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
 * \sa AlexaForBusinessClient::createNetworkProfile
 */

/*!
 * Constructs a copy of \a other.
 */
CreateNetworkProfileRequest::CreateNetworkProfileRequest(const CreateNetworkProfileRequest &other)
    : AlexaForBusinessRequest(new CreateNetworkProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateNetworkProfileRequest object.
 */
CreateNetworkProfileRequest::CreateNetworkProfileRequest()
    : AlexaForBusinessRequest(new CreateNetworkProfileRequestPrivate(AlexaForBusinessRequest::CreateNetworkProfileAction, this))
{

}

/*!
 * \reimp
 */
bool CreateNetworkProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateNetworkProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateNetworkProfileRequest::response(QNetworkReply * const reply) const
{
    return new CreateNetworkProfileResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::CreateNetworkProfileRequestPrivate
 * \brief The CreateNetworkProfileRequestPrivate class provides private implementation for CreateNetworkProfileRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a CreateNetworkProfileRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
CreateNetworkProfileRequestPrivate::CreateNetworkProfileRequestPrivate(
    const AlexaForBusinessRequest::Action action, CreateNetworkProfileRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateNetworkProfileRequest
 * class' copy constructor.
 */
CreateNetworkProfileRequestPrivate::CreateNetworkProfileRequestPrivate(
    const CreateNetworkProfileRequestPrivate &other, CreateNetworkProfileRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
