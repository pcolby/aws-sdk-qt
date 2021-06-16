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
 *  Transit Gateway Network Manager (Network Manager) enables you to create a global network, in which you can monitor your
 *  AWS and on-premises networks that are built around transit
 * 
 *  gateways>
 * 
 *  The Network Manager APIs are supported in the US West (Oregon) Region only. You must specify the <code>us-west-2</code>
 *  Region in all requests made to Network
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
