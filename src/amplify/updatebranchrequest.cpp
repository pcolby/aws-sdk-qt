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

#include "updatebranchrequest.h"
#include "updatebranchrequest_p.h"
#include "updatebranchresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::UpdateBranchRequest
 * \brief The UpdateBranchRequest class provides an interface for Amplify UpdateBranch requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::updateBranch
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateBranchRequest::UpdateBranchRequest(const UpdateBranchRequest &other)
    : AmplifyRequest(new UpdateBranchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBranchRequest object.
 */
UpdateBranchRequest::UpdateBranchRequest()
    : AmplifyRequest(new UpdateBranchRequestPrivate(AmplifyRequest::UpdateBranchAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateBranchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateBranchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBranchRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBranchResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::UpdateBranchRequestPrivate
 * \brief The UpdateBranchRequestPrivate class provides private implementation for UpdateBranchRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a UpdateBranchRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
UpdateBranchRequestPrivate::UpdateBranchRequestPrivate(
    const AmplifyRequest::Action action, UpdateBranchRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateBranchRequest
 * class' copy constructor.
 */
UpdateBranchRequestPrivate::UpdateBranchRequestPrivate(
    const UpdateBranchRequestPrivate &other, UpdateBranchRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
