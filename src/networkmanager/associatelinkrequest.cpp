// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatelinkrequest.h"
#include "associatelinkrequest_p.h"
#include "associatelinkresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::AssociateLinkRequest
 * \brief The AssociateLinkRequest class provides an interface for NetworkManager AssociateLink requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::associateLink
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateLinkRequest::AssociateLinkRequest(const AssociateLinkRequest &other)
    : NetworkManagerRequest(new AssociateLinkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateLinkRequest object.
 */
AssociateLinkRequest::AssociateLinkRequest()
    : NetworkManagerRequest(new AssociateLinkRequestPrivate(NetworkManagerRequest::AssociateLinkAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateLinkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateLinkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateLinkRequest::response(QNetworkReply * const reply) const
{
    return new AssociateLinkResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::AssociateLinkRequestPrivate
 * \brief The AssociateLinkRequestPrivate class provides private implementation for AssociateLinkRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a AssociateLinkRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
AssociateLinkRequestPrivate::AssociateLinkRequestPrivate(
    const NetworkManagerRequest::Action action, AssociateLinkRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateLinkRequest
 * class' copy constructor.
 */
AssociateLinkRequestPrivate::AssociateLinkRequestPrivate(
    const AssociateLinkRequestPrivate &other, AssociateLinkRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
