/*
    Copyright 2013-2018 Paul Colby

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

#include "authorizeiprulesrequest.h"
#include "authorizeiprulesrequest_p.h"
#include "authorizeiprulesresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::AuthorizeIpRulesRequest
 * \brief The AuthorizeIpRulesRequest class provides an interface for WorkSpaces AuthorizeIpRules requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows desktops for your
 *
 * \sa WorkSpacesClient::authorizeIpRules
 */

/*!
 * Constructs a copy of \a other.
 */
AuthorizeIpRulesRequest::AuthorizeIpRulesRequest(const AuthorizeIpRulesRequest &other)
    : WorkSpacesRequest(new AuthorizeIpRulesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AuthorizeIpRulesRequest object.
 */
AuthorizeIpRulesRequest::AuthorizeIpRulesRequest()
    : WorkSpacesRequest(new AuthorizeIpRulesRequestPrivate(WorkSpacesRequest::AuthorizeIpRulesAction, this))
{

}

/*!
 * \reimp
 */
bool AuthorizeIpRulesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AuthorizeIpRulesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AuthorizeIpRulesRequest::response(QNetworkReply * const reply) const
{
    return new AuthorizeIpRulesResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::AuthorizeIpRulesRequestPrivate
 * \brief The AuthorizeIpRulesRequestPrivate class provides private implementation for AuthorizeIpRulesRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a AuthorizeIpRulesRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
AuthorizeIpRulesRequestPrivate::AuthorizeIpRulesRequestPrivate(
    const WorkSpacesRequest::Action action, AuthorizeIpRulesRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AuthorizeIpRulesRequest
 * class' copy constructor.
 */
AuthorizeIpRulesRequestPrivate::AuthorizeIpRulesRequestPrivate(
    const AuthorizeIpRulesRequestPrivate &other, AuthorizeIpRulesRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
