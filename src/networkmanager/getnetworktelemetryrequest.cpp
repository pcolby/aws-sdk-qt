// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getnetworktelemetryrequest.h"
#include "getnetworktelemetryrequest_p.h"
#include "getnetworktelemetryresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetNetworkTelemetryRequest
 * \brief The GetNetworkTelemetryRequest class provides an interface for NetworkManager GetNetworkTelemetry requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getNetworkTelemetry
 */

/*!
 * Constructs a copy of \a other.
 */
GetNetworkTelemetryRequest::GetNetworkTelemetryRequest(const GetNetworkTelemetryRequest &other)
    : NetworkManagerRequest(new GetNetworkTelemetryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetNetworkTelemetryRequest object.
 */
GetNetworkTelemetryRequest::GetNetworkTelemetryRequest()
    : NetworkManagerRequest(new GetNetworkTelemetryRequestPrivate(NetworkManagerRequest::GetNetworkTelemetryAction, this))
{

}

/*!
 * \reimp
 */
bool GetNetworkTelemetryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetNetworkTelemetryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetNetworkTelemetryRequest::response(QNetworkReply * const reply) const
{
    return new GetNetworkTelemetryResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetNetworkTelemetryRequestPrivate
 * \brief The GetNetworkTelemetryRequestPrivate class provides private implementation for GetNetworkTelemetryRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetNetworkTelemetryRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetNetworkTelemetryRequestPrivate::GetNetworkTelemetryRequestPrivate(
    const NetworkManagerRequest::Action action, GetNetworkTelemetryRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetNetworkTelemetryRequest
 * class' copy constructor.
 */
GetNetworkTelemetryRequestPrivate::GetNetworkTelemetryRequestPrivate(
    const GetNetworkTelemetryRequestPrivate &other, GetNetworkTelemetryRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
