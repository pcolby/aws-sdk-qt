// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "signoutuserrequest.h"
#include "signoutuserrequest_p.h"
#include "signoutuserresponse.h"
#include "worklinkrequest_p.h"

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::SignOutUserRequest
 * \brief The SignOutUserRequest class provides an interface for WorkLink SignOutUser requests.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::signOutUser
 */

/*!
 * Constructs a copy of \a other.
 */
SignOutUserRequest::SignOutUserRequest(const SignOutUserRequest &other)
    : WorkLinkRequest(new SignOutUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SignOutUserRequest object.
 */
SignOutUserRequest::SignOutUserRequest()
    : WorkLinkRequest(new SignOutUserRequestPrivate(WorkLinkRequest::SignOutUserAction, this))
{

}

/*!
 * \reimp
 */
bool SignOutUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SignOutUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SignOutUserRequest::response(QNetworkReply * const reply) const
{
    return new SignOutUserResponse(*this, reply);
}

/*!
 * \class QtAws::WorkLink::SignOutUserRequestPrivate
 * \brief The SignOutUserRequestPrivate class provides private implementation for SignOutUserRequest.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a SignOutUserRequestPrivate object for WorkLink \a action,
 * with public implementation \a q.
 */
SignOutUserRequestPrivate::SignOutUserRequestPrivate(
    const WorkLinkRequest::Action action, SignOutUserRequest * const q)
    : WorkLinkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SignOutUserRequest
 * class' copy constructor.
 */
SignOutUserRequestPrivate::SignOutUserRequestPrivate(
    const SignOutUserRequestPrivate &other, SignOutUserRequest * const q)
    : WorkLinkRequestPrivate(other, q)
{

}

} // namespace WorkLink
} // namespace QtAws
