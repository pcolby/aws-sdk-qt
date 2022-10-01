// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdeviceeventsrequest.h"
#include "listdeviceeventsrequest_p.h"
#include "listdeviceeventsresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::ListDeviceEventsRequest
 * \brief The ListDeviceEventsRequest class provides an interface for AlexaForBusiness ListDeviceEvents requests.
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
 * \sa AlexaForBusinessClient::listDeviceEvents
 */

/*!
 * Constructs a copy of \a other.
 */
ListDeviceEventsRequest::ListDeviceEventsRequest(const ListDeviceEventsRequest &other)
    : AlexaForBusinessRequest(new ListDeviceEventsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDeviceEventsRequest object.
 */
ListDeviceEventsRequest::ListDeviceEventsRequest()
    : AlexaForBusinessRequest(new ListDeviceEventsRequestPrivate(AlexaForBusinessRequest::ListDeviceEventsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDeviceEventsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDeviceEventsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDeviceEventsRequest::response(QNetworkReply * const reply) const
{
    return new ListDeviceEventsResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::ListDeviceEventsRequestPrivate
 * \brief The ListDeviceEventsRequestPrivate class provides private implementation for ListDeviceEventsRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a ListDeviceEventsRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
ListDeviceEventsRequestPrivate::ListDeviceEventsRequestPrivate(
    const AlexaForBusinessRequest::Action action, ListDeviceEventsRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDeviceEventsRequest
 * class' copy constructor.
 */
ListDeviceEventsRequestPrivate::ListDeviceEventsRequestPrivate(
    const ListDeviceEventsRequestPrivate &other, ListDeviceEventsRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
