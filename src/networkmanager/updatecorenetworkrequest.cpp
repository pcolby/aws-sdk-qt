// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecorenetworkrequest.h"
#include "updatecorenetworkrequest_p.h"
#include "updatecorenetworkresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::UpdateCoreNetworkRequest
 * \brief The UpdateCoreNetworkRequest class provides an interface for NetworkManager UpdateCoreNetwork requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::updateCoreNetwork
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateCoreNetworkRequest::UpdateCoreNetworkRequest(const UpdateCoreNetworkRequest &other)
    : NetworkManagerRequest(new UpdateCoreNetworkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateCoreNetworkRequest object.
 */
UpdateCoreNetworkRequest::UpdateCoreNetworkRequest()
    : NetworkManagerRequest(new UpdateCoreNetworkRequestPrivate(NetworkManagerRequest::UpdateCoreNetworkAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateCoreNetworkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateCoreNetworkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCoreNetworkRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCoreNetworkResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::UpdateCoreNetworkRequestPrivate
 * \brief The UpdateCoreNetworkRequestPrivate class provides private implementation for UpdateCoreNetworkRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a UpdateCoreNetworkRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
UpdateCoreNetworkRequestPrivate::UpdateCoreNetworkRequestPrivate(
    const NetworkManagerRequest::Action action, UpdateCoreNetworkRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateCoreNetworkRequest
 * class' copy constructor.
 */
UpdateCoreNetworkRequestPrivate::UpdateCoreNetworkRequestPrivate(
    const UpdateCoreNetworkRequestPrivate &other, UpdateCoreNetworkRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
