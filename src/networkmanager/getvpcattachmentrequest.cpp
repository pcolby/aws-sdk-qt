// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getvpcattachmentrequest.h"
#include "getvpcattachmentrequest_p.h"
#include "getvpcattachmentresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetVpcAttachmentRequest
 * \brief The GetVpcAttachmentRequest class provides an interface for NetworkManager GetVpcAttachment requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getVpcAttachment
 */

/*!
 * Constructs a copy of \a other.
 */
GetVpcAttachmentRequest::GetVpcAttachmentRequest(const GetVpcAttachmentRequest &other)
    : NetworkManagerRequest(new GetVpcAttachmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetVpcAttachmentRequest object.
 */
GetVpcAttachmentRequest::GetVpcAttachmentRequest()
    : NetworkManagerRequest(new GetVpcAttachmentRequestPrivate(NetworkManagerRequest::GetVpcAttachmentAction, this))
{

}

/*!
 * \reimp
 */
bool GetVpcAttachmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetVpcAttachmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetVpcAttachmentRequest::response(QNetworkReply * const reply) const
{
    return new GetVpcAttachmentResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetVpcAttachmentRequestPrivate
 * \brief The GetVpcAttachmentRequestPrivate class provides private implementation for GetVpcAttachmentRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetVpcAttachmentRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetVpcAttachmentRequestPrivate::GetVpcAttachmentRequestPrivate(
    const NetworkManagerRequest::Action action, GetVpcAttachmentRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetVpcAttachmentRequest
 * class' copy constructor.
 */
GetVpcAttachmentRequestPrivate::GetVpcAttachmentRequestPrivate(
    const GetVpcAttachmentRequestPrivate &other, GetVpcAttachmentRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
