// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
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
