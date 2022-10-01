// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteresourcepolicyrequest.h"
#include "deleteresourcepolicyrequest_p.h"
#include "deleteresourcepolicyresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeleteResourcePolicyRequest
 * \brief The DeleteResourcePolicyRequest class provides an interface for NetworkManager DeleteResourcePolicy requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::deleteResourcePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteResourcePolicyRequest::DeleteResourcePolicyRequest(const DeleteResourcePolicyRequest &other)
    : NetworkManagerRequest(new DeleteResourcePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteResourcePolicyRequest object.
 */
DeleteResourcePolicyRequest::DeleteResourcePolicyRequest()
    : NetworkManagerRequest(new DeleteResourcePolicyRequestPrivate(NetworkManagerRequest::DeleteResourcePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteResourcePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteResourcePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteResourcePolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteResourcePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::DeleteResourcePolicyRequestPrivate
 * \brief The DeleteResourcePolicyRequestPrivate class provides private implementation for DeleteResourcePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeleteResourcePolicyRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
DeleteResourcePolicyRequestPrivate::DeleteResourcePolicyRequestPrivate(
    const NetworkManagerRequest::Action action, DeleteResourcePolicyRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteResourcePolicyRequest
 * class' copy constructor.
 */
DeleteResourcePolicyRequestPrivate::DeleteResourcePolicyRequestPrivate(
    const DeleteResourcePolicyRequestPrivate &other, DeleteResourcePolicyRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
