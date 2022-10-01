// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putinvitationconfigurationrequest.h"
#include "putinvitationconfigurationrequest_p.h"
#include "putinvitationconfigurationresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::PutInvitationConfigurationRequest
 * \brief The PutInvitationConfigurationRequest class provides an interface for AlexaForBusiness PutInvitationConfiguration requests.
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
 * \sa AlexaForBusinessClient::putInvitationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutInvitationConfigurationRequest::PutInvitationConfigurationRequest(const PutInvitationConfigurationRequest &other)
    : AlexaForBusinessRequest(new PutInvitationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutInvitationConfigurationRequest object.
 */
PutInvitationConfigurationRequest::PutInvitationConfigurationRequest()
    : AlexaForBusinessRequest(new PutInvitationConfigurationRequestPrivate(AlexaForBusinessRequest::PutInvitationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutInvitationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutInvitationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutInvitationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutInvitationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::PutInvitationConfigurationRequestPrivate
 * \brief The PutInvitationConfigurationRequestPrivate class provides private implementation for PutInvitationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a PutInvitationConfigurationRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
PutInvitationConfigurationRequestPrivate::PutInvitationConfigurationRequestPrivate(
    const AlexaForBusinessRequest::Action action, PutInvitationConfigurationRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutInvitationConfigurationRequest
 * class' copy constructor.
 */
PutInvitationConfigurationRequestPrivate::PutInvitationConfigurationRequestPrivate(
    const PutInvitationConfigurationRequestPrivate &other, PutInvitationConfigurationRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
