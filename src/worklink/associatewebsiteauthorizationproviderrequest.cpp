// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatewebsiteauthorizationproviderrequest.h"
#include "associatewebsiteauthorizationproviderrequest_p.h"
#include "associatewebsiteauthorizationproviderresponse.h"
#include "worklinkrequest_p.h"

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::AssociateWebsiteAuthorizationProviderRequest
 * \brief The AssociateWebsiteAuthorizationProviderRequest class provides an interface for WorkLink AssociateWebsiteAuthorizationProvider requests.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::associateWebsiteAuthorizationProvider
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateWebsiteAuthorizationProviderRequest::AssociateWebsiteAuthorizationProviderRequest(const AssociateWebsiteAuthorizationProviderRequest &other)
    : WorkLinkRequest(new AssociateWebsiteAuthorizationProviderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateWebsiteAuthorizationProviderRequest object.
 */
AssociateWebsiteAuthorizationProviderRequest::AssociateWebsiteAuthorizationProviderRequest()
    : WorkLinkRequest(new AssociateWebsiteAuthorizationProviderRequestPrivate(WorkLinkRequest::AssociateWebsiteAuthorizationProviderAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateWebsiteAuthorizationProviderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateWebsiteAuthorizationProviderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateWebsiteAuthorizationProviderRequest::response(QNetworkReply * const reply) const
{
    return new AssociateWebsiteAuthorizationProviderResponse(*this, reply);
}

/*!
 * \class QtAws::WorkLink::AssociateWebsiteAuthorizationProviderRequestPrivate
 * \brief The AssociateWebsiteAuthorizationProviderRequestPrivate class provides private implementation for AssociateWebsiteAuthorizationProviderRequest.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a AssociateWebsiteAuthorizationProviderRequestPrivate object for WorkLink \a action,
 * with public implementation \a q.
 */
AssociateWebsiteAuthorizationProviderRequestPrivate::AssociateWebsiteAuthorizationProviderRequestPrivate(
    const WorkLinkRequest::Action action, AssociateWebsiteAuthorizationProviderRequest * const q)
    : WorkLinkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateWebsiteAuthorizationProviderRequest
 * class' copy constructor.
 */
AssociateWebsiteAuthorizationProviderRequestPrivate::AssociateWebsiteAuthorizationProviderRequestPrivate(
    const AssociateWebsiteAuthorizationProviderRequestPrivate &other, AssociateWebsiteAuthorizationProviderRequest * const q)
    : WorkLinkRequestPrivate(other, q)
{

}

} // namespace WorkLink
} // namespace QtAws
