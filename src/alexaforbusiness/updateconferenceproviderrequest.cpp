// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconferenceproviderrequest.h"
#include "updateconferenceproviderrequest_p.h"
#include "updateconferenceproviderresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::UpdateConferenceProviderRequest
 * \brief The UpdateConferenceProviderRequest class provides an interface for AlexaForBusiness UpdateConferenceProvider requests.
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
 * \sa AlexaForBusinessClient::updateConferenceProvider
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateConferenceProviderRequest::UpdateConferenceProviderRequest(const UpdateConferenceProviderRequest &other)
    : AlexaForBusinessRequest(new UpdateConferenceProviderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateConferenceProviderRequest object.
 */
UpdateConferenceProviderRequest::UpdateConferenceProviderRequest()
    : AlexaForBusinessRequest(new UpdateConferenceProviderRequestPrivate(AlexaForBusinessRequest::UpdateConferenceProviderAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateConferenceProviderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateConferenceProviderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateConferenceProviderRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConferenceProviderResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::UpdateConferenceProviderRequestPrivate
 * \brief The UpdateConferenceProviderRequestPrivate class provides private implementation for UpdateConferenceProviderRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a UpdateConferenceProviderRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
UpdateConferenceProviderRequestPrivate::UpdateConferenceProviderRequestPrivate(
    const AlexaForBusinessRequest::Action action, UpdateConferenceProviderRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateConferenceProviderRequest
 * class' copy constructor.
 */
UpdateConferenceProviderRequestPrivate::UpdateConferenceProviderRequestPrivate(
    const UpdateConferenceProviderRequestPrivate &other, UpdateConferenceProviderRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
