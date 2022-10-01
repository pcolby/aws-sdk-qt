// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "purchaseofferingrequest.h"
#include "purchaseofferingrequest_p.h"
#include "purchaseofferingresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::PurchaseOfferingRequest
 * \brief The PurchaseOfferingRequest class provides an interface for MediaLive PurchaseOffering requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::purchaseOffering
 */

/*!
 * Constructs a copy of \a other.
 */
PurchaseOfferingRequest::PurchaseOfferingRequest(const PurchaseOfferingRequest &other)
    : MediaLiveRequest(new PurchaseOfferingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PurchaseOfferingRequest object.
 */
PurchaseOfferingRequest::PurchaseOfferingRequest()
    : MediaLiveRequest(new PurchaseOfferingRequestPrivate(MediaLiveRequest::PurchaseOfferingAction, this))
{

}

/*!
 * \reimp
 */
bool PurchaseOfferingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PurchaseOfferingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PurchaseOfferingRequest::response(QNetworkReply * const reply) const
{
    return new PurchaseOfferingResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::PurchaseOfferingRequestPrivate
 * \brief The PurchaseOfferingRequestPrivate class provides private implementation for PurchaseOfferingRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a PurchaseOfferingRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
PurchaseOfferingRequestPrivate::PurchaseOfferingRequestPrivate(
    const MediaLiveRequest::Action action, PurchaseOfferingRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PurchaseOfferingRequest
 * class' copy constructor.
 */
PurchaseOfferingRequestPrivate::PurchaseOfferingRequestPrivate(
    const PurchaseOfferingRequestPrivate &other, PurchaseOfferingRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
