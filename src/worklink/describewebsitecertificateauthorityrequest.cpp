// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describewebsitecertificateauthorityrequest.h"
#include "describewebsitecertificateauthorityrequest_p.h"
#include "describewebsitecertificateauthorityresponse.h"
#include "worklinkrequest_p.h"

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::DescribeWebsiteCertificateAuthorityRequest
 * \brief The DescribeWebsiteCertificateAuthorityRequest class provides an interface for WorkLink DescribeWebsiteCertificateAuthority requests.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::describeWebsiteCertificateAuthority
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeWebsiteCertificateAuthorityRequest::DescribeWebsiteCertificateAuthorityRequest(const DescribeWebsiteCertificateAuthorityRequest &other)
    : WorkLinkRequest(new DescribeWebsiteCertificateAuthorityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeWebsiteCertificateAuthorityRequest object.
 */
DescribeWebsiteCertificateAuthorityRequest::DescribeWebsiteCertificateAuthorityRequest()
    : WorkLinkRequest(new DescribeWebsiteCertificateAuthorityRequestPrivate(WorkLinkRequest::DescribeWebsiteCertificateAuthorityAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeWebsiteCertificateAuthorityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeWebsiteCertificateAuthorityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeWebsiteCertificateAuthorityRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWebsiteCertificateAuthorityResponse(*this, reply);
}

/*!
 * \class QtAws::WorkLink::DescribeWebsiteCertificateAuthorityRequestPrivate
 * \brief The DescribeWebsiteCertificateAuthorityRequestPrivate class provides private implementation for DescribeWebsiteCertificateAuthorityRequest.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a DescribeWebsiteCertificateAuthorityRequestPrivate object for WorkLink \a action,
 * with public implementation \a q.
 */
DescribeWebsiteCertificateAuthorityRequestPrivate::DescribeWebsiteCertificateAuthorityRequestPrivate(
    const WorkLinkRequest::Action action, DescribeWebsiteCertificateAuthorityRequest * const q)
    : WorkLinkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeWebsiteCertificateAuthorityRequest
 * class' copy constructor.
 */
DescribeWebsiteCertificateAuthorityRequestPrivate::DescribeWebsiteCertificateAuthorityRequestPrivate(
    const DescribeWebsiteCertificateAuthorityRequestPrivate &other, DescribeWebsiteCertificateAuthorityRequest * const q)
    : WorkLinkRequestPrivate(other, q)
{

}

} // namespace WorkLink
} // namespace QtAws
