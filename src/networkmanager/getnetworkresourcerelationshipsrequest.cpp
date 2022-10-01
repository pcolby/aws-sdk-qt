// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getnetworkresourcerelationshipsrequest.h"
#include "getnetworkresourcerelationshipsrequest_p.h"
#include "getnetworkresourcerelationshipsresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetNetworkResourceRelationshipsRequest
 * \brief The GetNetworkResourceRelationshipsRequest class provides an interface for NetworkManager GetNetworkResourceRelationships requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getNetworkResourceRelationships
 */

/*!
 * Constructs a copy of \a other.
 */
GetNetworkResourceRelationshipsRequest::GetNetworkResourceRelationshipsRequest(const GetNetworkResourceRelationshipsRequest &other)
    : NetworkManagerRequest(new GetNetworkResourceRelationshipsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetNetworkResourceRelationshipsRequest object.
 */
GetNetworkResourceRelationshipsRequest::GetNetworkResourceRelationshipsRequest()
    : NetworkManagerRequest(new GetNetworkResourceRelationshipsRequestPrivate(NetworkManagerRequest::GetNetworkResourceRelationshipsAction, this))
{

}

/*!
 * \reimp
 */
bool GetNetworkResourceRelationshipsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetNetworkResourceRelationshipsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetNetworkResourceRelationshipsRequest::response(QNetworkReply * const reply) const
{
    return new GetNetworkResourceRelationshipsResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetNetworkResourceRelationshipsRequestPrivate
 * \brief The GetNetworkResourceRelationshipsRequestPrivate class provides private implementation for GetNetworkResourceRelationshipsRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetNetworkResourceRelationshipsRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetNetworkResourceRelationshipsRequestPrivate::GetNetworkResourceRelationshipsRequestPrivate(
    const NetworkManagerRequest::Action action, GetNetworkResourceRelationshipsRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetNetworkResourceRelationshipsRequest
 * class' copy constructor.
 */
GetNetworkResourceRelationshipsRequestPrivate::GetNetworkResourceRelationshipsRequestPrivate(
    const GetNetworkResourceRelationshipsRequestPrivate &other, GetNetworkResourceRelationshipsRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
