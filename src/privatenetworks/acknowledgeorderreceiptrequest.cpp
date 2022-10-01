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

#include "acknowledgeorderreceiptrequest.h"
#include "acknowledgeorderreceiptrequest_p.h"
#include "acknowledgeorderreceiptresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::AcknowledgeOrderReceiptRequest
 * \brief The AcknowledgeOrderReceiptRequest class provides an interface for PrivateNetworks AcknowledgeOrderReceipt requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::acknowledgeOrderReceipt
 */

/*!
 * Constructs a copy of \a other.
 */
AcknowledgeOrderReceiptRequest::AcknowledgeOrderReceiptRequest(const AcknowledgeOrderReceiptRequest &other)
    : PrivateNetworksRequest(new AcknowledgeOrderReceiptRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AcknowledgeOrderReceiptRequest object.
 */
AcknowledgeOrderReceiptRequest::AcknowledgeOrderReceiptRequest()
    : PrivateNetworksRequest(new AcknowledgeOrderReceiptRequestPrivate(PrivateNetworksRequest::AcknowledgeOrderReceiptAction, this))
{

}

/*!
 * \reimp
 */
bool AcknowledgeOrderReceiptRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AcknowledgeOrderReceiptResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AcknowledgeOrderReceiptRequest::response(QNetworkReply * const reply) const
{
    return new AcknowledgeOrderReceiptResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::AcknowledgeOrderReceiptRequestPrivate
 * \brief The AcknowledgeOrderReceiptRequestPrivate class provides private implementation for AcknowledgeOrderReceiptRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a AcknowledgeOrderReceiptRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
AcknowledgeOrderReceiptRequestPrivate::AcknowledgeOrderReceiptRequestPrivate(
    const PrivateNetworksRequest::Action action, AcknowledgeOrderReceiptRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AcknowledgeOrderReceiptRequest
 * class' copy constructor.
 */
AcknowledgeOrderReceiptRequestPrivate::AcknowledgeOrderReceiptRequestPrivate(
    const AcknowledgeOrderReceiptRequestPrivate &other, AcknowledgeOrderReceiptRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
