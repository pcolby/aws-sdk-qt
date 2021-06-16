/*
    Copyright 2013-2021 Paul Colby

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
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS phones.
 *  In a single step, your users, such as employees, can access internal websites as efficiently as they access any other
 *  public website. They enter a URL in their web browser, or choose a link to an internal website in an email. Amazon
 *  WorkLink authenticates the user's access and securely renders authorized internal web content in a secure rendering
 *  service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
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
