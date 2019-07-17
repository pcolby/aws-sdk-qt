/*
    Copyright 2013-2019 Paul Colby

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

#include "revokeiprulesrequest.h"
#include "revokeiprulesrequest_p.h"
#include "revokeiprulesresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::RevokeIpRulesRequest
 * \brief The RevokeIpRulesRequest class provides an interface for WorkSpaces RevokeIpRules requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::revokeIpRules
 */

/*!
 * Constructs a copy of \a other.
 */
RevokeIpRulesRequest::RevokeIpRulesRequest(const RevokeIpRulesRequest &other)
    : WorkSpacesRequest(new RevokeIpRulesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RevokeIpRulesRequest object.
 */
RevokeIpRulesRequest::RevokeIpRulesRequest()
    : WorkSpacesRequest(new RevokeIpRulesRequestPrivate(WorkSpacesRequest::RevokeIpRulesAction, this))
{

}

/*!
 * \reimp
 */
bool RevokeIpRulesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RevokeIpRulesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RevokeIpRulesRequest::response(QNetworkReply * const reply) const
{
    return new RevokeIpRulesResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::RevokeIpRulesRequestPrivate
 * \brief The RevokeIpRulesRequestPrivate class provides private implementation for RevokeIpRulesRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a RevokeIpRulesRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
RevokeIpRulesRequestPrivate::RevokeIpRulesRequestPrivate(
    const WorkSpacesRequest::Action action, RevokeIpRulesRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RevokeIpRulesRequest
 * class' copy constructor.
 */
RevokeIpRulesRequestPrivate::RevokeIpRulesRequestPrivate(
    const RevokeIpRulesRequestPrivate &other, RevokeIpRulesRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
