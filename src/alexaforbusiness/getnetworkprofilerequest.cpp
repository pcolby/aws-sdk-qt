// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getnetworkprofilerequest.h"
#include "getnetworkprofilerequest_p.h"
#include "getnetworkprofileresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::GetNetworkProfileRequest
 * \brief The GetNetworkProfileRequest class provides an interface for AlexaForBusiness GetNetworkProfile requests.
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
 * \sa AlexaForBusinessClient::getNetworkProfile
 */

/*!
 * Constructs a copy of \a other.
 */
GetNetworkProfileRequest::GetNetworkProfileRequest(const GetNetworkProfileRequest &other)
    : AlexaForBusinessRequest(new GetNetworkProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetNetworkProfileRequest object.
 */
GetNetworkProfileRequest::GetNetworkProfileRequest()
    : AlexaForBusinessRequest(new GetNetworkProfileRequestPrivate(AlexaForBusinessRequest::GetNetworkProfileAction, this))
{

}

/*!
 * \reimp
 */
bool GetNetworkProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetNetworkProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetNetworkProfileRequest::response(QNetworkReply * const reply) const
{
    return new GetNetworkProfileResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::GetNetworkProfileRequestPrivate
 * \brief The GetNetworkProfileRequestPrivate class provides private implementation for GetNetworkProfileRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a GetNetworkProfileRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
GetNetworkProfileRequestPrivate::GetNetworkProfileRequestPrivate(
    const AlexaForBusinessRequest::Action action, GetNetworkProfileRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetNetworkProfileRequest
 * class' copy constructor.
 */
GetNetworkProfileRequestPrivate::GetNetworkProfileRequestPrivate(
    const GetNetworkProfileRequestPrivate &other, GetNetworkProfileRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
