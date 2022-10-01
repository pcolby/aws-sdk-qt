// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateroomrequest.h"
#include "updateroomrequest_p.h"
#include "updateroomresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::UpdateRoomRequest
 * \brief The UpdateRoomRequest class provides an interface for AlexaForBusiness UpdateRoom requests.
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
 * \sa AlexaForBusinessClient::updateRoom
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRoomRequest::UpdateRoomRequest(const UpdateRoomRequest &other)
    : AlexaForBusinessRequest(new UpdateRoomRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRoomRequest object.
 */
UpdateRoomRequest::UpdateRoomRequest()
    : AlexaForBusinessRequest(new UpdateRoomRequestPrivate(AlexaForBusinessRequest::UpdateRoomAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRoomRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRoomResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRoomRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRoomResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::UpdateRoomRequestPrivate
 * \brief The UpdateRoomRequestPrivate class provides private implementation for UpdateRoomRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a UpdateRoomRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
UpdateRoomRequestPrivate::UpdateRoomRequestPrivate(
    const AlexaForBusinessRequest::Action action, UpdateRoomRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRoomRequest
 * class' copy constructor.
 */
UpdateRoomRequestPrivate::UpdateRoomRequestPrivate(
    const UpdateRoomRequestPrivate &other, UpdateRoomRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
