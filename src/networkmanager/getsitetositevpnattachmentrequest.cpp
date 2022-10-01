// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsitetositevpnattachmentrequest.h"
#include "getsitetositevpnattachmentrequest_p.h"
#include "getsitetositevpnattachmentresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetSiteToSiteVpnAttachmentRequest
 * \brief The GetSiteToSiteVpnAttachmentRequest class provides an interface for NetworkManager GetSiteToSiteVpnAttachment requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getSiteToSiteVpnAttachment
 */

/*!
 * Constructs a copy of \a other.
 */
GetSiteToSiteVpnAttachmentRequest::GetSiteToSiteVpnAttachmentRequest(const GetSiteToSiteVpnAttachmentRequest &other)
    : NetworkManagerRequest(new GetSiteToSiteVpnAttachmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSiteToSiteVpnAttachmentRequest object.
 */
GetSiteToSiteVpnAttachmentRequest::GetSiteToSiteVpnAttachmentRequest()
    : NetworkManagerRequest(new GetSiteToSiteVpnAttachmentRequestPrivate(NetworkManagerRequest::GetSiteToSiteVpnAttachmentAction, this))
{

}

/*!
 * \reimp
 */
bool GetSiteToSiteVpnAttachmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSiteToSiteVpnAttachmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSiteToSiteVpnAttachmentRequest::response(QNetworkReply * const reply) const
{
    return new GetSiteToSiteVpnAttachmentResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetSiteToSiteVpnAttachmentRequestPrivate
 * \brief The GetSiteToSiteVpnAttachmentRequestPrivate class provides private implementation for GetSiteToSiteVpnAttachmentRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetSiteToSiteVpnAttachmentRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetSiteToSiteVpnAttachmentRequestPrivate::GetSiteToSiteVpnAttachmentRequestPrivate(
    const NetworkManagerRequest::Action action, GetSiteToSiteVpnAttachmentRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSiteToSiteVpnAttachmentRequest
 * class' copy constructor.
 */
GetSiteToSiteVpnAttachmentRequestPrivate::GetSiteToSiteVpnAttachmentRequestPrivate(
    const GetSiteToSiteVpnAttachmentRequestPrivate &other, GetSiteToSiteVpnAttachmentRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
