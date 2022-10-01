// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteattachmentrequest.h"
#include "deleteattachmentrequest_p.h"
#include "deleteattachmentresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeleteAttachmentRequest
 * \brief The DeleteAttachmentRequest class provides an interface for NetworkManager DeleteAttachment requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::deleteAttachment
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAttachmentRequest::DeleteAttachmentRequest(const DeleteAttachmentRequest &other)
    : NetworkManagerRequest(new DeleteAttachmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAttachmentRequest object.
 */
DeleteAttachmentRequest::DeleteAttachmentRequest()
    : NetworkManagerRequest(new DeleteAttachmentRequestPrivate(NetworkManagerRequest::DeleteAttachmentAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAttachmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAttachmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAttachmentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAttachmentResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::DeleteAttachmentRequestPrivate
 * \brief The DeleteAttachmentRequestPrivate class provides private implementation for DeleteAttachmentRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeleteAttachmentRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
DeleteAttachmentRequestPrivate::DeleteAttachmentRequestPrivate(
    const NetworkManagerRequest::Action action, DeleteAttachmentRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAttachmentRequest
 * class' copy constructor.
 */
DeleteAttachmentRequestPrivate::DeleteAttachmentRequestPrivate(
    const DeleteAttachmentRequestPrivate &other, DeleteAttachmentRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
