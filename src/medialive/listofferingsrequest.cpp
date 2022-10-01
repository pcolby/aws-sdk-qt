// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listofferingsrequest.h"
#include "listofferingsrequest_p.h"
#include "listofferingsresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListOfferingsRequest
 * \brief The ListOfferingsRequest class provides an interface for MediaLive ListOfferings requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::listOfferings
 */

/*!
 * Constructs a copy of \a other.
 */
ListOfferingsRequest::ListOfferingsRequest(const ListOfferingsRequest &other)
    : MediaLiveRequest(new ListOfferingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListOfferingsRequest object.
 */
ListOfferingsRequest::ListOfferingsRequest()
    : MediaLiveRequest(new ListOfferingsRequestPrivate(MediaLiveRequest::ListOfferingsAction, this))
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
 * \class QtAws::MediaLive::ListOfferingsRequestPrivate
 * \brief The ListOfferingsRequestPrivate class provides private implementation for ListOfferingsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ListOfferingsRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
ListOfferingsRequestPrivate::ListOfferingsRequestPrivate(
    const MediaLiveRequest::Action action, ListOfferingsRequest * const q)
    : MediaLiveRequestPrivate(action, q)
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
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
