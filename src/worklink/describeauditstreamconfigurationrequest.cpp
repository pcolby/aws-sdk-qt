// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeauditstreamconfigurationrequest.h"
#include "describeauditstreamconfigurationrequest_p.h"
#include "describeauditstreamconfigurationresponse.h"
#include "worklinkrequest_p.h"

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::DescribeAuditStreamConfigurationRequest
 * \brief The DescribeAuditStreamConfigurationRequest class provides an interface for WorkLink DescribeAuditStreamConfiguration requests.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::describeAuditStreamConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAuditStreamConfigurationRequest::DescribeAuditStreamConfigurationRequest(const DescribeAuditStreamConfigurationRequest &other)
    : WorkLinkRequest(new DescribeAuditStreamConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAuditStreamConfigurationRequest object.
 */
DescribeAuditStreamConfigurationRequest::DescribeAuditStreamConfigurationRequest()
    : WorkLinkRequest(new DescribeAuditStreamConfigurationRequestPrivate(WorkLinkRequest::DescribeAuditStreamConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAuditStreamConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAuditStreamConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAuditStreamConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAuditStreamConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::WorkLink::DescribeAuditStreamConfigurationRequestPrivate
 * \brief The DescribeAuditStreamConfigurationRequestPrivate class provides private implementation for DescribeAuditStreamConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a DescribeAuditStreamConfigurationRequestPrivate object for WorkLink \a action,
 * with public implementation \a q.
 */
DescribeAuditStreamConfigurationRequestPrivate::DescribeAuditStreamConfigurationRequestPrivate(
    const WorkLinkRequest::Action action, DescribeAuditStreamConfigurationRequest * const q)
    : WorkLinkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAuditStreamConfigurationRequest
 * class' copy constructor.
 */
DescribeAuditStreamConfigurationRequestPrivate::DescribeAuditStreamConfigurationRequestPrivate(
    const DescribeAuditStreamConfigurationRequestPrivate &other, DescribeAuditStreamConfigurationRequest * const q)
    : WorkLinkRequestPrivate(other, q)
{

}

} // namespace WorkLink
} // namespace QtAws
