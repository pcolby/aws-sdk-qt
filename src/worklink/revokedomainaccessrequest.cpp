// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "revokedomainaccessrequest.h"
#include "revokedomainaccessrequest_p.h"
#include "revokedomainaccessresponse.h"
#include "worklinkrequest_p.h"

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::RevokeDomainAccessRequest
 * \brief The RevokeDomainAccessRequest class provides an interface for WorkLink RevokeDomainAccess requests.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::revokeDomainAccess
 */

/*!
 * Constructs a copy of \a other.
 */
RevokeDomainAccessRequest::RevokeDomainAccessRequest(const RevokeDomainAccessRequest &other)
    : WorkLinkRequest(new RevokeDomainAccessRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RevokeDomainAccessRequest object.
 */
RevokeDomainAccessRequest::RevokeDomainAccessRequest()
    : WorkLinkRequest(new RevokeDomainAccessRequestPrivate(WorkLinkRequest::RevokeDomainAccessAction, this))
{

}

/*!
 * \reimp
 */
bool RevokeDomainAccessRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RevokeDomainAccessResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RevokeDomainAccessRequest::response(QNetworkReply * const reply) const
{
    return new RevokeDomainAccessResponse(*this, reply);
}

/*!
 * \class QtAws::WorkLink::RevokeDomainAccessRequestPrivate
 * \brief The RevokeDomainAccessRequestPrivate class provides private implementation for RevokeDomainAccessRequest.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a RevokeDomainAccessRequestPrivate object for WorkLink \a action,
 * with public implementation \a q.
 */
RevokeDomainAccessRequestPrivate::RevokeDomainAccessRequestPrivate(
    const WorkLinkRequest::Action action, RevokeDomainAccessRequest * const q)
    : WorkLinkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RevokeDomainAccessRequest
 * class' copy constructor.
 */
RevokeDomainAccessRequestPrivate::RevokeDomainAccessRequestPrivate(
    const RevokeDomainAccessRequestPrivate &other, RevokeDomainAccessRequest * const q)
    : WorkLinkRequestPrivate(other, q)
{

}

} // namespace WorkLink
} // namespace QtAws
