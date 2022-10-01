// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listreservationsrequest.h"
#include "listreservationsrequest_p.h"
#include "listreservationsresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::ListReservationsRequest
 * \brief The ListReservationsRequest class provides an interface for MediaConnect ListReservations requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::listReservations
 */

/*!
 * Constructs a copy of \a other.
 */
ListReservationsRequest::ListReservationsRequest(const ListReservationsRequest &other)
    : MediaConnectRequest(new ListReservationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListReservationsRequest object.
 */
ListReservationsRequest::ListReservationsRequest()
    : MediaConnectRequest(new ListReservationsRequestPrivate(MediaConnectRequest::ListReservationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListReservationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListReservationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListReservationsRequest::response(QNetworkReply * const reply) const
{
    return new ListReservationsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::ListReservationsRequestPrivate
 * \brief The ListReservationsRequestPrivate class provides private implementation for ListReservationsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a ListReservationsRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
ListReservationsRequestPrivate::ListReservationsRequestPrivate(
    const MediaConnectRequest::Action action, ListReservationsRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListReservationsRequest
 * class' copy constructor.
 */
ListReservationsRequestPrivate::ListReservationsRequestPrivate(
    const ListReservationsRequestPrivate &other, ListReservationsRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
