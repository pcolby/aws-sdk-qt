/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listofferingsrequest.h"
#include "listofferingsrequest_p.h"
#include "listofferingsresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::ListOfferingsRequest
 * \brief The ListOfferingsRequest class provides an interface for MediaConnect ListOfferings requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::listOfferings
 */

/*!
 * Constructs a copy of \a other.
 */
ListOfferingsRequest::ListOfferingsRequest(const ListOfferingsRequest &other)
    : MediaConnectRequest(new ListOfferingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListOfferingsRequest object.
 */
ListOfferingsRequest::ListOfferingsRequest()
    : MediaConnectRequest(new ListOfferingsRequestPrivate(MediaConnectRequest::ListOfferingsAction, this))
{

}

/*!
 * \reimp
 */
bool ListOfferingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListOfferingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListOfferingsRequest::response(QNetworkReply * const reply) const
{
    return new ListOfferingsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::ListOfferingsRequestPrivate
 * \brief The ListOfferingsRequestPrivate class provides private implementation for ListOfferingsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a ListOfferingsRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
ListOfferingsRequestPrivate::ListOfferingsRequestPrivate(
    const MediaConnectRequest::Action action, ListOfferingsRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListOfferingsRequest
 * class' copy constructor.
 */
ListOfferingsRequestPrivate::ListOfferingsRequestPrivate(
    const ListOfferingsRequestPrivate &other, ListOfferingsRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
