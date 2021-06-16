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

#include "getbranchrequest.h"
#include "getbranchrequest_p.h"
#include "getbranchresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::GetBranchRequest
 * \brief The GetBranchRequest class provides an interface for Amplify GetBranch requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::getBranch
 */

/*!
 * Constructs a copy of \a other.
 */
GetBranchRequest::GetBranchRequest(const GetBranchRequest &other)
    : AmplifyRequest(new GetBranchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBranchRequest object.
 */
GetBranchRequest::GetBranchRequest()
    : AmplifyRequest(new GetBranchRequestPrivate(AmplifyRequest::GetBranchAction, this))
{

}

/*!
 * \reimp
 */
bool GetBranchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBranchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBranchRequest::response(QNetworkReply * const reply) const
{
    return new GetBranchResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::GetBranchRequestPrivate
 * \brief The GetBranchRequestPrivate class provides private implementation for GetBranchRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a GetBranchRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
GetBranchRequestPrivate::GetBranchRequestPrivate(
    const AmplifyRequest::Action action, GetBranchRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBranchRequest
 * class' copy constructor.
 */
GetBranchRequestPrivate::GetBranchRequestPrivate(
    const GetBranchRequestPrivate &other, GetBranchRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
