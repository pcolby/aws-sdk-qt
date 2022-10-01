// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeglobalnetworksrequest.h"
#include "describeglobalnetworksrequest_p.h"
#include "describeglobalnetworksresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DescribeGlobalNetworksRequest
 * \brief The DescribeGlobalNetworksRequest class provides an interface for NetworkManager DescribeGlobalNetworks requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::describeGlobalNetworks
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeGlobalNetworksRequest::DescribeGlobalNetworksRequest(const DescribeGlobalNetworksRequest &other)
    : NetworkManagerRequest(new DescribeGlobalNetworksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeGlobalNetworksRequest object.
 */
DescribeGlobalNetworksRequest::DescribeGlobalNetworksRequest()
    : NetworkManagerRequest(new DescribeGlobalNetworksRequestPrivate(NetworkManagerRequest::DescribeGlobalNetworksAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeGlobalNetworksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeGlobalNetworksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeGlobalNetworksRequest::response(QNetworkReply * const reply) const
{
    return new DescribeGlobalNetworksResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::DescribeGlobalNetworksRequestPrivate
 * \brief The DescribeGlobalNetworksRequestPrivate class provides private implementation for DescribeGlobalNetworksRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DescribeGlobalNetworksRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
DescribeGlobalNetworksRequestPrivate::DescribeGlobalNetworksRequestPrivate(
    const NetworkManagerRequest::Action action, DescribeGlobalNetworksRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeGlobalNetworksRequest
 * class' copy constructor.
 */
DescribeGlobalNetworksRequestPrivate::DescribeGlobalNetworksRequestPrivate(
    const DescribeGlobalNetworksRequestPrivate &other, DescribeGlobalNetworksRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
