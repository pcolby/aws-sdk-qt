// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "executecorenetworkchangesetrequest.h"
#include "executecorenetworkchangesetrequest_p.h"
#include "executecorenetworkchangesetresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::ExecuteCoreNetworkChangeSetRequest
 * \brief The ExecuteCoreNetworkChangeSetRequest class provides an interface for NetworkManager ExecuteCoreNetworkChangeSet requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::executeCoreNetworkChangeSet
 */

/*!
 * Constructs a copy of \a other.
 */
ExecuteCoreNetworkChangeSetRequest::ExecuteCoreNetworkChangeSetRequest(const ExecuteCoreNetworkChangeSetRequest &other)
    : NetworkManagerRequest(new ExecuteCoreNetworkChangeSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExecuteCoreNetworkChangeSetRequest object.
 */
ExecuteCoreNetworkChangeSetRequest::ExecuteCoreNetworkChangeSetRequest()
    : NetworkManagerRequest(new ExecuteCoreNetworkChangeSetRequestPrivate(NetworkManagerRequest::ExecuteCoreNetworkChangeSetAction, this))
{

}

/*!
 * \reimp
 */
bool ExecuteCoreNetworkChangeSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExecuteCoreNetworkChangeSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExecuteCoreNetworkChangeSetRequest::response(QNetworkReply * const reply) const
{
    return new ExecuteCoreNetworkChangeSetResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::ExecuteCoreNetworkChangeSetRequestPrivate
 * \brief The ExecuteCoreNetworkChangeSetRequestPrivate class provides private implementation for ExecuteCoreNetworkChangeSetRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a ExecuteCoreNetworkChangeSetRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
ExecuteCoreNetworkChangeSetRequestPrivate::ExecuteCoreNetworkChangeSetRequestPrivate(
    const NetworkManagerRequest::Action action, ExecuteCoreNetworkChangeSetRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExecuteCoreNetworkChangeSetRequest
 * class' copy constructor.
 */
ExecuteCoreNetworkChangeSetRequestPrivate::ExecuteCoreNetworkChangeSetRequestPrivate(
    const ExecuteCoreNetworkChangeSetRequestPrivate &other, ExecuteCoreNetworkChangeSetRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
