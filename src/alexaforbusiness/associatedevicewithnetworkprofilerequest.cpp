// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatedevicewithnetworkprofilerequest.h"
#include "associatedevicewithnetworkprofilerequest_p.h"
#include "associatedevicewithnetworkprofileresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::AssociateDeviceWithNetworkProfileRequest
 * \brief The AssociateDeviceWithNetworkProfileRequest class provides an interface for AlexaForBusiness AssociateDeviceWithNetworkProfile requests.
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
 * \sa AlexaForBusinessClient::associateDeviceWithNetworkProfile
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateDeviceWithNetworkProfileRequest::AssociateDeviceWithNetworkProfileRequest(const AssociateDeviceWithNetworkProfileRequest &other)
    : AlexaForBusinessRequest(new AssociateDeviceWithNetworkProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateDeviceWithNetworkProfileRequest object.
 */
AssociateDeviceWithNetworkProfileRequest::AssociateDeviceWithNetworkProfileRequest()
    : AlexaForBusinessRequest(new AssociateDeviceWithNetworkProfileRequestPrivate(AlexaForBusinessRequest::AssociateDeviceWithNetworkProfileAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateDeviceWithNetworkProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateDeviceWithNetworkProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateDeviceWithNetworkProfileRequest::response(QNetworkReply * const reply) const
{
    return new AssociateDeviceWithNetworkProfileResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::AssociateDeviceWithNetworkProfileRequestPrivate
 * \brief The AssociateDeviceWithNetworkProfileRequestPrivate class provides private implementation for AssociateDeviceWithNetworkProfileRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a AssociateDeviceWithNetworkProfileRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
AssociateDeviceWithNetworkProfileRequestPrivate::AssociateDeviceWithNetworkProfileRequestPrivate(
    const AlexaForBusinessRequest::Action action, AssociateDeviceWithNetworkProfileRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateDeviceWithNetworkProfileRequest
 * class' copy constructor.
 */
AssociateDeviceWithNetworkProfileRequestPrivate::AssociateDeviceWithNetworkProfileRequestPrivate(
    const AssociateDeviceWithNetworkProfileRequestPrivate &other, AssociateDeviceWithNetworkProfileRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
