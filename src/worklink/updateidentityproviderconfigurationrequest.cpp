/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS phones.
 *  In a single step, your users, such as employees, can access internal websites as efficiently as they access any other
 *  public website. They enter a URL in their web browser, or choose a link to an internal website in an email. Amazon
 *  WorkLink authenticates the user's access and securely renders authorized internal web content in a secure rendering
 *  service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
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
