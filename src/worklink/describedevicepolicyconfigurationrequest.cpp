// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedevicepolicyconfigurationrequest.h"
#include "describedevicepolicyconfigurationrequest_p.h"
#include "describedevicepolicyconfigurationresponse.h"
#include "worklinkrequest_p.h"

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::DescribeDevicePolicyConfigurationRequest
 * \brief The DescribeDevicePolicyConfigurationRequest class provides an interface for WorkLink DescribeDevicePolicyConfiguration requests.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::describeDevicePolicyConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDevicePolicyConfigurationRequest::DescribeDevicePolicyConfigurationRequest(const DescribeDevicePolicyConfigurationRequest &other)
    : WorkLinkRequest(new DescribeDevicePolicyConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDevicePolicyConfigurationRequest object.
 */
DescribeDevicePolicyConfigurationRequest::DescribeDevicePolicyConfigurationRequest()
    : WorkLinkRequest(new DescribeDevicePolicyConfigurationRequestPrivate(WorkLinkRequest::DescribeDevicePolicyConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDevicePolicyConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDevicePolicyConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDevicePolicyConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDevicePolicyConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::WorkLink::DescribeDevicePolicyConfigurationRequestPrivate
 * \brief The DescribeDevicePolicyConfigurationRequestPrivate class provides private implementation for DescribeDevicePolicyConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a DescribeDevicePolicyConfigurationRequestPrivate object for WorkLink \a action,
 * with public implementation \a q.
 */
DescribeDevicePolicyConfigurationRequestPrivate::DescribeDevicePolicyConfigurationRequestPrivate(
    const WorkLinkRequest::Action action, DescribeDevicePolicyConfigurationRequest * const q)
    : WorkLinkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDevicePolicyConfigurationRequest
 * class' copy constructor.
 */
DescribeDevicePolicyConfigurationRequestPrivate::DescribeDevicePolicyConfigurationRequestPrivate(
    const DescribeDevicePolicyConfigurationRequestPrivate &other, DescribeDevicePolicyConfigurationRequest * const q)
    : WorkLinkRequestPrivate(other, q)
{

}

} // namespace WorkLink
} // namespace QtAws
