// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelinkrequest.h"
#include "updatelinkrequest_p.h"
#include "updatelinkresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::UpdateLinkRequest
 * \brief The UpdateLinkRequest class provides an interface for NetworkManager UpdateLink requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::updateLink
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLinkRequest::UpdateLinkRequest(const UpdateLinkRequest &other)
    : NetworkManagerRequest(new UpdateLinkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLinkRequest object.
 */
UpdateLinkRequest::UpdateLinkRequest()
    : NetworkManagerRequest(new UpdateLinkRequestPrivate(NetworkManagerRequest::UpdateLinkAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLinkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLinkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLinkRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLinkResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::UpdateLinkRequestPrivate
 * \brief The UpdateLinkRequestPrivate class provides private implementation for UpdateLinkRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a UpdateLinkRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
UpdateLinkRequestPrivate::UpdateLinkRequestPrivate(
    const NetworkManagerRequest::Action action, UpdateLinkRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLinkRequest
 * class' copy constructor.
 */
UpdateLinkRequestPrivate::UpdateLinkRequestPrivate(
    const UpdateLinkRequestPrivate &other, UpdateLinkRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
