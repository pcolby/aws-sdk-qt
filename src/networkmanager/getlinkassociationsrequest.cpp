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

#include "getlinkassociationsrequest.h"
#include "getlinkassociationsrequest_p.h"
#include "getlinkassociationsresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetLinkAssociationsRequest
 * \brief The GetLinkAssociationsRequest class provides an interface for NetworkManager GetLinkAssociations requests.
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
 * \sa NetworkManagerClient::getLinkAssociations
 */

/*!
 * Constructs a copy of \a other.
 */
GetLinkAssociationsRequest::GetLinkAssociationsRequest(const GetLinkAssociationsRequest &other)
    : NetworkManagerRequest(new GetLinkAssociationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLinkAssociationsRequest object.
 */
GetLinkAssociationsRequest::GetLinkAssociationsRequest()
    : NetworkManagerRequest(new GetLinkAssociationsRequestPrivate(NetworkManagerRequest::GetLinkAssociationsAction, this))
{

}

/*!
 * \reimp
 */
bool GetLinkAssociationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLinkAssociationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLinkAssociationsRequest::response(QNetworkReply * const reply) const
{
    return new GetLinkAssociationsResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetLinkAssociationsRequestPrivate
 * \brief The GetLinkAssociationsRequestPrivate class provides private implementation for GetLinkAssociationsRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetLinkAssociationsRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetLinkAssociationsRequestPrivate::GetLinkAssociationsRequestPrivate(
    const NetworkManagerRequest::Action action, GetLinkAssociationsRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLinkAssociationsRequest
 * class' copy constructor.
 */
GetLinkAssociationsRequestPrivate::GetLinkAssociationsRequestPrivate(
    const GetLinkAssociationsRequestPrivate &other, GetLinkAssociationsRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
