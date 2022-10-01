// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateglobalnetworkrequest.h"
#include "updateglobalnetworkrequest_p.h"
#include "updateglobalnetworkresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::UpdateGlobalNetworkRequest
 * \brief The UpdateGlobalNetworkRequest class provides an interface for NetworkManager UpdateGlobalNetwork requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::updateGlobalNetwork
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateGlobalNetworkRequest::UpdateGlobalNetworkRequest(const UpdateGlobalNetworkRequest &other)
    : NetworkManagerRequest(new UpdateGlobalNetworkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateGlobalNetworkRequest object.
 */
UpdateGlobalNetworkRequest::UpdateGlobalNetworkRequest()
    : NetworkManagerRequest(new UpdateGlobalNetworkRequestPrivate(NetworkManagerRequest::UpdateGlobalNetworkAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateGlobalNetworkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateGlobalNetworkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGlobalNetworkRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGlobalNetworkResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::UpdateGlobalNetworkRequestPrivate
 * \brief The UpdateGlobalNetworkRequestPrivate class provides private implementation for UpdateGlobalNetworkRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a UpdateGlobalNetworkRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
UpdateGlobalNetworkRequestPrivate::UpdateGlobalNetworkRequestPrivate(
    const NetworkManagerRequest::Action action, UpdateGlobalNetworkRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateGlobalNetworkRequest
 * class' copy constructor.
 */
UpdateGlobalNetworkRequestPrivate::UpdateGlobalNetworkRequestPrivate(
    const UpdateGlobalNetworkRequestPrivate &other, UpdateGlobalNetworkRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
