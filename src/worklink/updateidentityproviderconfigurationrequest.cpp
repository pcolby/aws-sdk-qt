// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateidentityproviderconfigurationrequest.h"
#include "updateidentityproviderconfigurationrequest_p.h"
#include "updateidentityproviderconfigurationresponse.h"
#include "worklinkrequest_p.h"

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::UpdateIdentityProviderConfigurationRequest
 * \brief The UpdateIdentityProviderConfigurationRequest class provides an interface for WorkLink UpdateIdentityProviderConfiguration requests.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::updateIdentityProviderConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateIdentityProviderConfigurationRequest::UpdateIdentityProviderConfigurationRequest(const UpdateIdentityProviderConfigurationRequest &other)
    : WorkLinkRequest(new UpdateIdentityProviderConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateIdentityProviderConfigurationRequest object.
 */
UpdateIdentityProviderConfigurationRequest::UpdateIdentityProviderConfigurationRequest()
    : WorkLinkRequest(new UpdateIdentityProviderConfigurationRequestPrivate(WorkLinkRequest::UpdateIdentityProviderConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateIdentityProviderConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateIdentityProviderConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateIdentityProviderConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateIdentityProviderConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::WorkLink::UpdateIdentityProviderConfigurationRequestPrivate
 * \brief The UpdateIdentityProviderConfigurationRequestPrivate class provides private implementation for UpdateIdentityProviderConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a UpdateIdentityProviderConfigurationRequestPrivate object for WorkLink \a action,
 * with public implementation \a q.
 */
UpdateIdentityProviderConfigurationRequestPrivate::UpdateIdentityProviderConfigurationRequestPrivate(
    const WorkLinkRequest::Action action, UpdateIdentityProviderConfigurationRequest * const q)
    : WorkLinkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateIdentityProviderConfigurationRequest
 * class' copy constructor.
 */
UpdateIdentityProviderConfigurationRequestPrivate::UpdateIdentityProviderConfigurationRequestPrivate(
    const UpdateIdentityProviderConfigurationRequestPrivate &other, UpdateIdentityProviderConfigurationRequest * const q)
    : WorkLinkRequestPrivate(other, q)
{

}

} // namespace WorkLink
} // namespace QtAws
