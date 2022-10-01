// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
