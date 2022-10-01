// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resolveroomrequest.h"
#include "resolveroomrequest_p.h"
#include "resolveroomresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::ResolveRoomRequest
 * \brief The ResolveRoomRequest class provides an interface for AlexaForBusiness ResolveRoom requests.
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
 * \sa AlexaForBusinessClient::resolveRoom
 */

/*!
 * Constructs a copy of \a other.
 */
ResolveRoomRequest::ResolveRoomRequest(const ResolveRoomRequest &other)
    : AlexaForBusinessRequest(new ResolveRoomRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResolveRoomRequest object.
 */
ResolveRoomRequest::ResolveRoomRequest()
    : AlexaForBusinessRequest(new ResolveRoomRequestPrivate(AlexaForBusinessRequest::ResolveRoomAction, this))
{

}

/*!
 * \reimp
 */
bool ResolveRoomRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResolveRoomResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResolveRoomRequest::response(QNetworkReply * const reply) const
{
    return new ResolveRoomResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::ResolveRoomRequestPrivate
 * \brief The ResolveRoomRequestPrivate class provides private implementation for ResolveRoomRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a ResolveRoomRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
ResolveRoomRequestPrivate::ResolveRoomRequestPrivate(
    const AlexaForBusinessRequest::Action action, ResolveRoomRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResolveRoomRequest
 * class' copy constructor.
 */
ResolveRoomRequestPrivate::ResolveRoomRequestPrivate(
    const ResolveRoomRequestPrivate &other, ResolveRoomRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
