// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putconferencepreferencerequest.h"
#include "putconferencepreferencerequest_p.h"
#include "putconferencepreferenceresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::PutConferencePreferenceRequest
 * \brief The PutConferencePreferenceRequest class provides an interface for AlexaForBusiness PutConferencePreference requests.
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
 * \sa AlexaForBusinessClient::putConferencePreference
 */

/*!
 * Constructs a copy of \a other.
 */
PutConferencePreferenceRequest::PutConferencePreferenceRequest(const PutConferencePreferenceRequest &other)
    : AlexaForBusinessRequest(new PutConferencePreferenceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutConferencePreferenceRequest object.
 */
PutConferencePreferenceRequest::PutConferencePreferenceRequest()
    : AlexaForBusinessRequest(new PutConferencePreferenceRequestPrivate(AlexaForBusinessRequest::PutConferencePreferenceAction, this))
{

}

/*!
 * \reimp
 */
bool PutConferencePreferenceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutConferencePreferenceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutConferencePreferenceRequest::response(QNetworkReply * const reply) const
{
    return new PutConferencePreferenceResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::PutConferencePreferenceRequestPrivate
 * \brief The PutConferencePreferenceRequestPrivate class provides private implementation for PutConferencePreferenceRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a PutConferencePreferenceRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
PutConferencePreferenceRequestPrivate::PutConferencePreferenceRequestPrivate(
    const AlexaForBusinessRequest::Action action, PutConferencePreferenceRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutConferencePreferenceRequest
 * class' copy constructor.
 */
PutConferencePreferenceRequestPrivate::PutConferencePreferenceRequestPrivate(
    const PutConferencePreferenceRequestPrivate &other, PutConferencePreferenceRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
