// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatewebsitecertificateauthorityrequest.h"
#include "associatewebsitecertificateauthorityrequest_p.h"
#include "associatewebsitecertificateauthorityresponse.h"
#include "worklinkrequest_p.h"

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::AssociateWebsiteCertificateAuthorityRequest
 * \brief The AssociateWebsiteCertificateAuthorityRequest class provides an interface for WorkLink AssociateWebsiteCertificateAuthority requests.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::associateWebsiteCertificateAuthority
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateWebsiteCertificateAuthorityRequest::AssociateWebsiteCertificateAuthorityRequest(const AssociateWebsiteCertificateAuthorityRequest &other)
    : WorkLinkRequest(new AssociateWebsiteCertificateAuthorityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateWebsiteCertificateAuthorityRequest object.
 */
AssociateWebsiteCertificateAuthorityRequest::AssociateWebsiteCertificateAuthorityRequest()
    : WorkLinkRequest(new AssociateWebsiteCertificateAuthorityRequestPrivate(WorkLinkRequest::AssociateWebsiteCertificateAuthorityAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateWebsiteCertificateAuthorityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateWebsiteCertificateAuthorityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateWebsiteCertificateAuthorityRequest::response(QNetworkReply * const reply) const
{
    return new AssociateWebsiteCertificateAuthorityResponse(*this, reply);
}

/*!
 * \class QtAws::WorkLink::AssociateWebsiteCertificateAuthorityRequestPrivate
 * \brief The AssociateWebsiteCertificateAuthorityRequestPrivate class provides private implementation for AssociateWebsiteCertificateAuthorityRequest.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a AssociateWebsiteCertificateAuthorityRequestPrivate object for WorkLink \a action,
 * with public implementation \a q.
 */
AssociateWebsiteCertificateAuthorityRequestPrivate::AssociateWebsiteCertificateAuthorityRequestPrivate(
    const WorkLinkRequest::Action action, AssociateWebsiteCertificateAuthorityRequest * const q)
    : WorkLinkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateWebsiteCertificateAuthorityRequest
 * class' copy constructor.
 */
AssociateWebsiteCertificateAuthorityRequestPrivate::AssociateWebsiteCertificateAuthorityRequestPrivate(
    const AssociateWebsiteCertificateAuthorityRequestPrivate &other, AssociateWebsiteCertificateAuthorityRequest * const q)
    : WorkLinkRequestPrivate(other, q)
{

}

} // namespace WorkLink
} // namespace QtAws
