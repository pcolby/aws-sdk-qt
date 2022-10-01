// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeidentityproviderconfigurationrequest.h"
#include "describeidentityproviderconfigurationrequest_p.h"
#include "describeidentityproviderconfigurationresponse.h"
#include "worklinkrequest_p.h"

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::DescribeIdentityProviderConfigurationRequest
 * \brief The DescribeIdentityProviderConfigurationRequest class provides an interface for WorkLink DescribeIdentityProviderConfiguration requests.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::describeIdentityProviderConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeIdentityProviderConfigurationRequest::DescribeIdentityProviderConfigurationRequest(const DescribeIdentityProviderConfigurationRequest &other)
    : WorkLinkRequest(new DescribeIdentityProviderConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeIdentityProviderConfigurationRequest object.
 */
DescribeIdentityProviderConfigurationRequest::DescribeIdentityProviderConfigurationRequest()
    : WorkLinkRequest(new DescribeIdentityProviderConfigurationRequestPrivate(WorkLinkRequest::DescribeIdentityProviderConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeIdentityProviderConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeIdentityProviderConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeIdentityProviderConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeIdentityProviderConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::WorkLink::DescribeIdentityProviderConfigurationRequestPrivate
 * \brief The DescribeIdentityProviderConfigurationRequestPrivate class provides private implementation for DescribeIdentityProviderConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a DescribeIdentityProviderConfigurationRequestPrivate object for WorkLink \a action,
 * with public implementation \a q.
 */
DescribeIdentityProviderConfigurationRequestPrivate::DescribeIdentityProviderConfigurationRequestPrivate(
    const WorkLinkRequest::Action action, DescribeIdentityProviderConfigurationRequest * const q)
    : WorkLinkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeIdentityProviderConfigurationRequest
 * class' copy constructor.
 */
DescribeIdentityProviderConfigurationRequestPrivate::DescribeIdentityProviderConfigurationRequestPrivate(
    const DescribeIdentityProviderConfigurationRequestPrivate &other, DescribeIdentityProviderConfigurationRequest * const q)
    : WorkLinkRequestPrivate(other, q)
{

}

} // namespace WorkLink
} // namespace QtAws
