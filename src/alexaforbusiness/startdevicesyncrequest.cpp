// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startdevicesyncrequest.h"
#include "startdevicesyncrequest_p.h"
#include "startdevicesyncresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::StartDeviceSyncRequest
 * \brief The StartDeviceSyncRequest class provides an interface for AlexaForBusiness StartDeviceSync requests.
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
 * \sa AlexaForBusinessClient::startDeviceSync
 */

/*!
 * Constructs a copy of \a other.
 */
StartDeviceSyncRequest::StartDeviceSyncRequest(const StartDeviceSyncRequest &other)
    : AlexaForBusinessRequest(new StartDeviceSyncRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartDeviceSyncRequest object.
 */
StartDeviceSyncRequest::StartDeviceSyncRequest()
    : AlexaForBusinessRequest(new StartDeviceSyncRequestPrivate(AlexaForBusinessRequest::StartDeviceSyncAction, this))
{

}

/*!
 * \reimp
 */
bool StartDeviceSyncRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartDeviceSyncResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartDeviceSyncRequest::response(QNetworkReply * const reply) const
{
    return new StartDeviceSyncResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::StartDeviceSyncRequestPrivate
 * \brief The StartDeviceSyncRequestPrivate class provides private implementation for StartDeviceSyncRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a StartDeviceSyncRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
StartDeviceSyncRequestPrivate::StartDeviceSyncRequestPrivate(
    const AlexaForBusinessRequest::Action action, StartDeviceSyncRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartDeviceSyncRequest
 * class' copy constructor.
 */
StartDeviceSyncRequestPrivate::StartDeviceSyncRequestPrivate(
    const StartDeviceSyncRequestPrivate &other, StartDeviceSyncRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
