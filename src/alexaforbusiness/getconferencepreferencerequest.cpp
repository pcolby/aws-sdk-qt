// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getconferencepreferencerequest.h"
#include "getconferencepreferencerequest_p.h"
#include "getconferencepreferenceresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::GetConferencePreferenceRequest
 * \brief The GetConferencePreferenceRequest class provides an interface for AlexaForBusiness GetConferencePreference requests.
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
 * \sa AlexaForBusinessClient::getConferencePreference
 */

/*!
 * Constructs a copy of \a other.
 */
GetConferencePreferenceRequest::GetConferencePreferenceRequest(const GetConferencePreferenceRequest &other)
    : AlexaForBusinessRequest(new GetConferencePreferenceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetConferencePreferenceRequest object.
 */
GetConferencePreferenceRequest::GetConferencePreferenceRequest()
    : AlexaForBusinessRequest(new GetConferencePreferenceRequestPrivate(AlexaForBusinessRequest::GetConferencePreferenceAction, this))
{

}

/*!
 * \reimp
 */
bool GetConferencePreferenceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetConferencePreferenceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConferencePreferenceRequest::response(QNetworkReply * const reply) const
{
    return new GetConferencePreferenceResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::GetConferencePreferenceRequestPrivate
 * \brief The GetConferencePreferenceRequestPrivate class provides private implementation for GetConferencePreferenceRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a GetConferencePreferenceRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
GetConferencePreferenceRequestPrivate::GetConferencePreferenceRequestPrivate(
    const AlexaForBusinessRequest::Action action, GetConferencePreferenceRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetConferencePreferenceRequest
 * class' copy constructor.
 */
GetConferencePreferenceRequestPrivate::GetConferencePreferenceRequestPrivate(
    const GetConferencePreferenceRequestPrivate &other, GetConferencePreferenceRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
