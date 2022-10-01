// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatedevicewithroomrequest.h"
#include "associatedevicewithroomrequest_p.h"
#include "associatedevicewithroomresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::AssociateDeviceWithRoomRequest
 * \brief The AssociateDeviceWithRoomRequest class provides an interface for AlexaForBusiness AssociateDeviceWithRoom requests.
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
 * \sa AlexaForBusinessClient::associateDeviceWithRoom
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateDeviceWithRoomRequest::AssociateDeviceWithRoomRequest(const AssociateDeviceWithRoomRequest &other)
    : AlexaForBusinessRequest(new AssociateDeviceWithRoomRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateDeviceWithRoomRequest object.
 */
AssociateDeviceWithRoomRequest::AssociateDeviceWithRoomRequest()
    : AlexaForBusinessRequest(new AssociateDeviceWithRoomRequestPrivate(AlexaForBusinessRequest::AssociateDeviceWithRoomAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateDeviceWithRoomRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateDeviceWithRoomResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateDeviceWithRoomRequest::response(QNetworkReply * const reply) const
{
    return new AssociateDeviceWithRoomResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::AssociateDeviceWithRoomRequestPrivate
 * \brief The AssociateDeviceWithRoomRequestPrivate class provides private implementation for AssociateDeviceWithRoomRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a AssociateDeviceWithRoomRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
AssociateDeviceWithRoomRequestPrivate::AssociateDeviceWithRoomRequestPrivate(
    const AlexaForBusinessRequest::Action action, AssociateDeviceWithRoomRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateDeviceWithRoomRequest
 * class' copy constructor.
 */
AssociateDeviceWithRoomRequestPrivate::AssociateDeviceWithRoomRequestPrivate(
    const AssociateDeviceWithRoomRequestPrivate &other, AssociateDeviceWithRoomRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
