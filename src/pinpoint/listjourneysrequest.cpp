// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listjourneysrequest.h"
#include "listjourneysrequest_p.h"
#include "listjourneysresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::ListJourneysRequest
 * \brief The ListJourneysRequest class provides an interface for Pinpoint ListJourneys requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::listJourneys
 */

/*!
 * Constructs a copy of \a other.
 */
ListJourneysRequest::ListJourneysRequest(const ListJourneysRequest &other)
    : PinpointRequest(new ListJourneysRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListJourneysRequest object.
 */
ListJourneysRequest::ListJourneysRequest()
    : PinpointRequest(new ListJourneysRequestPrivate(PinpointRequest::ListJourneysAction, this))
{

}

/*!
 * \reimp
 */
bool ListJourneysRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListJourneysResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListJourneysRequest::response(QNetworkReply * const reply) const
{
    return new ListJourneysResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::ListJourneysRequestPrivate
 * \brief The ListJourneysRequestPrivate class provides private implementation for ListJourneysRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a ListJourneysRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
ListJourneysRequestPrivate::ListJourneysRequestPrivate(
    const PinpointRequest::Action action, ListJourneysRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListJourneysRequest
 * class' copy constructor.
 */
ListJourneysRequestPrivate::ListJourneysRequestPrivate(
    const ListJourneysRequestPrivate &other, ListJourneysRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
