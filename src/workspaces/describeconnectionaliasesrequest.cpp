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

#include "describeconnectionaliasesrequest.h"
#include "describeconnectionaliasesrequest_p.h"
#include "describeconnectionaliasesresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeConnectionAliasesRequest
 * \brief The DescribeConnectionAliasesRequest class provides an interface for WorkSpaces DescribeConnectionAliases requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::describeConnectionAliases
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeConnectionAliasesRequest::DescribeConnectionAliasesRequest(const DescribeConnectionAliasesRequest &other)
    : WorkSpacesRequest(new DescribeConnectionAliasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeConnectionAliasesRequest object.
 */
DescribeConnectionAliasesRequest::DescribeConnectionAliasesRequest()
    : WorkSpacesRequest(new DescribeConnectionAliasesRequestPrivate(WorkSpacesRequest::DescribeConnectionAliasesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeConnectionAliasesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeConnectionAliasesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeConnectionAliasesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConnectionAliasesResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::DescribeConnectionAliasesRequestPrivate
 * \brief The DescribeConnectionAliasesRequestPrivate class provides private implementation for DescribeConnectionAliasesRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DescribeConnectionAliasesRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
DescribeConnectionAliasesRequestPrivate::DescribeConnectionAliasesRequestPrivate(
    const WorkSpacesRequest::Action action, DescribeConnectionAliasesRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeConnectionAliasesRequest
 * class' copy constructor.
 */
DescribeConnectionAliasesRequestPrivate::DescribeConnectionAliasesRequestPrivate(
    const DescribeConnectionAliasesRequestPrivate &other, DescribeConnectionAliasesRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
