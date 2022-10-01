// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdevicerequest.h"
#include "getdevicerequest_p.h"
#include "getdeviceresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::GetDeviceRequest
 * \brief The GetDeviceRequest class provides an interface for AlexaForBusiness GetDevice requests.
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
 * \sa AlexaForBusinessClient::getDevice
 */

/*!
 * Constructs a copy of \a other.
 */
GetDeviceRequest::GetDeviceRequest(const GetDeviceRequest &other)
    : AlexaForBusinessRequest(new GetDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDeviceRequest object.
 */
GetDeviceRequest::GetDeviceRequest()
    : AlexaForBusinessRequest(new GetDeviceRequestPrivate(AlexaForBusinessRequest::GetDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool GetDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeviceRequest::response(QNetworkReply * const reply) const
{
    return new GetDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::GetDeviceRequestPrivate
 * \brief The GetDeviceRequestPrivate class provides private implementation for GetDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a GetDeviceRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
GetDeviceRequestPrivate::GetDeviceRequestPrivate(
    const AlexaForBusinessRequest::Action action, GetDeviceRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDeviceRequest
 * class' copy constructor.
 */
GetDeviceRequestPrivate::GetDeviceRequestPrivate(
    const GetDeviceRequestPrivate &other, GetDeviceRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
