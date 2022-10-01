// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedevicerequest.h"
#include "updatedevicerequest_p.h"
#include "updatedeviceresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::UpdateDeviceRequest
 * \brief The UpdateDeviceRequest class provides an interface for AlexaForBusiness UpdateDevice requests.
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
 * \sa AlexaForBusinessClient::updateDevice
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDeviceRequest::UpdateDeviceRequest(const UpdateDeviceRequest &other)
    : AlexaForBusinessRequest(new UpdateDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDeviceRequest object.
 */
UpdateDeviceRequest::UpdateDeviceRequest()
    : AlexaForBusinessRequest(new UpdateDeviceRequestPrivate(AlexaForBusinessRequest::UpdateDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDeviceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::UpdateDeviceRequestPrivate
 * \brief The UpdateDeviceRequestPrivate class provides private implementation for UpdateDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a UpdateDeviceRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
UpdateDeviceRequestPrivate::UpdateDeviceRequestPrivate(
    const AlexaForBusinessRequest::Action action, UpdateDeviceRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDeviceRequest
 * class' copy constructor.
 */
UpdateDeviceRequestPrivate::UpdateDeviceRequestPrivate(
    const UpdateDeviceRequestPrivate &other, UpdateDeviceRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
