// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecompanynetworkconfigurationrequest.h"
#include "describecompanynetworkconfigurationrequest_p.h"
#include "describecompanynetworkconfigurationresponse.h"
#include "worklinkrequest_p.h"

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::DescribeCompanyNetworkConfigurationRequest
 * \brief The DescribeCompanyNetworkConfigurationRequest class provides an interface for WorkLink DescribeCompanyNetworkConfiguration requests.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::describeCompanyNetworkConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeCompanyNetworkConfigurationRequest::DescribeCompanyNetworkConfigurationRequest(const DescribeCompanyNetworkConfigurationRequest &other)
    : WorkLinkRequest(new DescribeCompanyNetworkConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeCompanyNetworkConfigurationRequest object.
 */
DescribeCompanyNetworkConfigurationRequest::DescribeCompanyNetworkConfigurationRequest()
    : WorkLinkRequest(new DescribeCompanyNetworkConfigurationRequestPrivate(WorkLinkRequest::DescribeCompanyNetworkConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCompanyNetworkConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeCompanyNetworkConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCompanyNetworkConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCompanyNetworkConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::WorkLink::DescribeCompanyNetworkConfigurationRequestPrivate
 * \brief The DescribeCompanyNetworkConfigurationRequestPrivate class provides private implementation for DescribeCompanyNetworkConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a DescribeCompanyNetworkConfigurationRequestPrivate object for WorkLink \a action,
 * with public implementation \a q.
 */
DescribeCompanyNetworkConfigurationRequestPrivate::DescribeCompanyNetworkConfigurationRequestPrivate(
    const WorkLinkRequest::Action action, DescribeCompanyNetworkConfigurationRequest * const q)
    : WorkLinkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeCompanyNetworkConfigurationRequest
 * class' copy constructor.
 */
DescribeCompanyNetworkConfigurationRequestPrivate::DescribeCompanyNetworkConfigurationRequestPrivate(
    const DescribeCompanyNetworkConfigurationRequestPrivate &other, DescribeCompanyNetworkConfigurationRequest * const q)
    : WorkLinkRequestPrivate(other, q)
{

}

} // namespace WorkLink
} // namespace QtAws
