// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "purchaseofferingrequest.h"
#include "purchaseofferingrequest_p.h"
#include "purchaseofferingresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::PurchaseOfferingRequest
 * \brief The PurchaseOfferingRequest class provides an interface for MediaConnect PurchaseOffering requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::purchaseOffering
 */

/*!
 * Constructs a copy of \a other.
 */
PurchaseOfferingRequest::PurchaseOfferingRequest(const PurchaseOfferingRequest &other)
    : MediaConnectRequest(new PurchaseOfferingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PurchaseOfferingRequest object.
 */
PurchaseOfferingRequest::PurchaseOfferingRequest()
    : MediaConnectRequest(new PurchaseOfferingRequestPrivate(MediaConnectRequest::PurchaseOfferingAction, this))
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
 * \class QtAws::MediaConnect::PurchaseOfferingRequestPrivate
 * \brief The PurchaseOfferingRequestPrivate class provides private implementation for PurchaseOfferingRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a PurchaseOfferingRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
PurchaseOfferingRequestPrivate::PurchaseOfferingRequestPrivate(
    const MediaConnectRequest::Action action, PurchaseOfferingRequest * const q)
    : MediaConnectRequestPrivate(action, q)
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
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
