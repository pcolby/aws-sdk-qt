// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatenetworkresourcemetadatarequest.h"
#include "updatenetworkresourcemetadatarequest_p.h"
#include "updatenetworkresourcemetadataresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::UpdateNetworkResourceMetadataRequest
 * \brief The UpdateNetworkResourceMetadataRequest class provides an interface for NetworkManager UpdateNetworkResourceMetadata requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::updateNetworkResourceMetadata
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateNetworkResourceMetadataRequest::UpdateNetworkResourceMetadataRequest(const UpdateNetworkResourceMetadataRequest &other)
    : NetworkManagerRequest(new UpdateNetworkResourceMetadataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateNetworkResourceMetadataRequest object.
 */
UpdateNetworkResourceMetadataRequest::UpdateNetworkResourceMetadataRequest()
    : NetworkManagerRequest(new UpdateNetworkResourceMetadataRequestPrivate(NetworkManagerRequest::UpdateNetworkResourceMetadataAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateNetworkResourceMetadataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateNetworkResourceMetadataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateNetworkResourceMetadataRequest::response(QNetworkReply * const reply) const
{
    return new UpdateNetworkResourceMetadataResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::UpdateNetworkResourceMetadataRequestPrivate
 * \brief The UpdateNetworkResourceMetadataRequestPrivate class provides private implementation for UpdateNetworkResourceMetadataRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a UpdateNetworkResourceMetadataRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
UpdateNetworkResourceMetadataRequestPrivate::UpdateNetworkResourceMetadataRequestPrivate(
    const NetworkManagerRequest::Action action, UpdateNetworkResourceMetadataRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateNetworkResourceMetadataRequest
 * class' copy constructor.
 */
UpdateNetworkResourceMetadataRequestPrivate::UpdateNetworkResourceMetadataRequestPrivate(
    const UpdateNetworkResourceMetadataRequestPrivate &other, UpdateNetworkResourceMetadataRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
