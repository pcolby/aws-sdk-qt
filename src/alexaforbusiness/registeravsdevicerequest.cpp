// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registeravsdevicerequest.h"
#include "registeravsdevicerequest_p.h"
#include "registeravsdeviceresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::RegisterAVSDeviceRequest
 * \brief The RegisterAVSDeviceRequest class provides an interface for AlexaForBusiness RegisterAVSDevice requests.
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
 * \sa AlexaForBusinessClient::registerAVSDevice
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterAVSDeviceRequest::RegisterAVSDeviceRequest(const RegisterAVSDeviceRequest &other)
    : AlexaForBusinessRequest(new RegisterAVSDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterAVSDeviceRequest object.
 */
RegisterAVSDeviceRequest::RegisterAVSDeviceRequest()
    : AlexaForBusinessRequest(new RegisterAVSDeviceRequestPrivate(AlexaForBusinessRequest::RegisterAVSDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterAVSDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterAVSDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterAVSDeviceRequest::response(QNetworkReply * const reply) const
{
    return new RegisterAVSDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::RegisterAVSDeviceRequestPrivate
 * \brief The RegisterAVSDeviceRequestPrivate class provides private implementation for RegisterAVSDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a RegisterAVSDeviceRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
RegisterAVSDeviceRequestPrivate::RegisterAVSDeviceRequestPrivate(
    const AlexaForBusinessRequest::Action action, RegisterAVSDeviceRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterAVSDeviceRequest
 * class' copy constructor.
 */
RegisterAVSDeviceRequestPrivate::RegisterAVSDeviceRequestPrivate(
    const RegisterAVSDeviceRequestPrivate &other, RegisterAVSDeviceRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
