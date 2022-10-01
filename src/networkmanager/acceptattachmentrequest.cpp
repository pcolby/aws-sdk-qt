// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "acceptattachmentrequest.h"
#include "acceptattachmentrequest_p.h"
#include "acceptattachmentresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::AcceptAttachmentRequest
 * \brief The AcceptAttachmentRequest class provides an interface for NetworkManager AcceptAttachment requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::acceptAttachment
 */

/*!
 * Constructs a copy of \a other.
 */
AcceptAttachmentRequest::AcceptAttachmentRequest(const AcceptAttachmentRequest &other)
    : NetworkManagerRequest(new AcceptAttachmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AcceptAttachmentRequest object.
 */
AcceptAttachmentRequest::AcceptAttachmentRequest()
    : NetworkManagerRequest(new AcceptAttachmentRequestPrivate(NetworkManagerRequest::AcceptAttachmentAction, this))
{

}

/*!
 * \reimp
 */
bool AcceptAttachmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AcceptAttachmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AcceptAttachmentRequest::response(QNetworkReply * const reply) const
{
    return new AcceptAttachmentResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::AcceptAttachmentRequestPrivate
 * \brief The AcceptAttachmentRequestPrivate class provides private implementation for AcceptAttachmentRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a AcceptAttachmentRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
AcceptAttachmentRequestPrivate::AcceptAttachmentRequestPrivate(
    const NetworkManagerRequest::Action action, AcceptAttachmentRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AcceptAttachmentRequest
 * class' copy constructor.
 */
AcceptAttachmentRequestPrivate::AcceptAttachmentRequestPrivate(
    const AcceptAttachmentRequestPrivate &other, AcceptAttachmentRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
