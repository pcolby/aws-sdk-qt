// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatelinkrequest.h"
#include "disassociatelinkrequest_p.h"
#include "disassociatelinkresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DisassociateLinkRequest
 * \brief The DisassociateLinkRequest class provides an interface for NetworkManager DisassociateLink requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::disassociateLink
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateLinkRequest::DisassociateLinkRequest(const DisassociateLinkRequest &other)
    : NetworkManagerRequest(new DisassociateLinkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateLinkRequest object.
 */
DisassociateLinkRequest::DisassociateLinkRequest()
    : NetworkManagerRequest(new DisassociateLinkRequestPrivate(NetworkManagerRequest::DisassociateLinkAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateLinkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateLinkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateLinkRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateLinkResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::DisassociateLinkRequestPrivate
 * \brief The DisassociateLinkRequestPrivate class provides private implementation for DisassociateLinkRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DisassociateLinkRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
DisassociateLinkRequestPrivate::DisassociateLinkRequestPrivate(
    const NetworkManagerRequest::Action action, DisassociateLinkRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateLinkRequest
 * class' copy constructor.
 */
DisassociateLinkRequestPrivate::DisassociateLinkRequestPrivate(
    const DisassociateLinkRequestPrivate &other, DisassociateLinkRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
