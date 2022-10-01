// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendinvitationrequest.h"
#include "sendinvitationrequest_p.h"
#include "sendinvitationresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::SendInvitationRequest
 * \brief The SendInvitationRequest class provides an interface for AlexaForBusiness SendInvitation requests.
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
 * \sa AlexaForBusinessClient::sendInvitation
 */

/*!
 * Constructs a copy of \a other.
 */
SendInvitationRequest::SendInvitationRequest(const SendInvitationRequest &other)
    : AlexaForBusinessRequest(new SendInvitationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendInvitationRequest object.
 */
SendInvitationRequest::SendInvitationRequest()
    : AlexaForBusinessRequest(new SendInvitationRequestPrivate(AlexaForBusinessRequest::SendInvitationAction, this))
{

}

/*!
 * \reimp
 */
bool SendInvitationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendInvitationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendInvitationRequest::response(QNetworkReply * const reply) const
{
    return new SendInvitationResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::SendInvitationRequestPrivate
 * \brief The SendInvitationRequestPrivate class provides private implementation for SendInvitationRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a SendInvitationRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
SendInvitationRequestPrivate::SendInvitationRequestPrivate(
    const AlexaForBusinessRequest::Action action, SendInvitationRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendInvitationRequest
 * class' copy constructor.
 */
SendInvitationRequestPrivate::SendInvitationRequestPrivate(
    const SendInvitationRequestPrivate &other, SendInvitationRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
