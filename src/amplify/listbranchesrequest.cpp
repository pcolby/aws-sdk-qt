/*
    Copyright 2013-2020 Paul Colby

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

#include "listbranchesrequest.h"
#include "listbranchesrequest_p.h"
#include "listbranchesresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::ListBranchesRequest
 * \brief The ListBranchesRequest class provides an interface for Amplify ListBranches requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::listBranches
 */

/*!
 * Constructs a copy of \a other.
 */
ListBranchesRequest::ListBranchesRequest(const ListBranchesRequest &other)
    : AmplifyRequest(new ListBranchesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBranchesRequest object.
 */
ListBranchesRequest::ListBranchesRequest()
    : AmplifyRequest(new ListBranchesRequestPrivate(AmplifyRequest::ListBranchesAction, this))
{

}

/*!
 * \reimp
 */
bool ListBranchesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBranchesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBranchesRequest::response(QNetworkReply * const reply) const
{
    return new ListBranchesResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::ListBranchesRequestPrivate
 * \brief The ListBranchesRequestPrivate class provides private implementation for ListBranchesRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a ListBranchesRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
ListBranchesRequestPrivate::ListBranchesRequestPrivate(
    const AmplifyRequest::Action action, ListBranchesRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBranchesRequest
 * class' copy constructor.
 */
ListBranchesRequestPrivate::ListBranchesRequestPrivate(
    const ListBranchesRequestPrivate &other, ListBranchesRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
