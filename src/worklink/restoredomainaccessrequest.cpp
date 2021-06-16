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

#include "restoredomainaccessrequest.h"
#include "restoredomainaccessrequest_p.h"
#include "restoredomainaccessresponse.h"
#include "worklinkrequest_p.h"

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::RestoreDomainAccessRequest
 * \brief The RestoreDomainAccessRequest class provides an interface for WorkLink RestoreDomainAccess requests.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::restoreDomainAccess
 */

/*!
 * Constructs a copy of \a other.
 */
RestoreDomainAccessRequest::RestoreDomainAccessRequest(const RestoreDomainAccessRequest &other)
    : WorkLinkRequest(new RestoreDomainAccessRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RestoreDomainAccessRequest object.
 */
RestoreDomainAccessRequest::RestoreDomainAccessRequest()
    : WorkLinkRequest(new RestoreDomainAccessRequestPrivate(WorkLinkRequest::RestoreDomainAccessAction, this))
{

}

/*!
 * \reimp
 */
bool RestoreDomainAccessRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RestoreDomainAccessResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RestoreDomainAccessRequest::response(QNetworkReply * const reply) const
{
    return new RestoreDomainAccessResponse(*this, reply);
}

/*!
 * \class QtAws::WorkLink::RestoreDomainAccessRequestPrivate
 * \brief The RestoreDomainAccessRequestPrivate class provides private implementation for RestoreDomainAccessRequest.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a RestoreDomainAccessRequestPrivate object for WorkLink \a action,
 * with public implementation \a q.
 */
RestoreDomainAccessRequestPrivate::RestoreDomainAccessRequestPrivate(
    const WorkLinkRequest::Action action, RestoreDomainAccessRequest * const q)
    : WorkLinkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RestoreDomainAccessRequest
 * class' copy constructor.
 */
RestoreDomainAccessRequestPrivate::RestoreDomainAccessRequestPrivate(
    const RestoreDomainAccessRequestPrivate &other, RestoreDomainAccessRequest * const q)
    : WorkLinkRequestPrivate(other, q)
{

}

} // namespace WorkLink
} // namespace QtAws
