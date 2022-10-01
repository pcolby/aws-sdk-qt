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

#include "deleteaccesspointpolicyrequest.h"
#include "deleteaccesspointpolicyrequest_p.h"
#include "deleteaccesspointpolicyresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteAccessPointPolicyRequest
 * \brief The DeleteAccessPointPolicyRequest class provides an interface for S3Control DeleteAccessPointPolicy requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteAccessPointPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAccessPointPolicyRequest::DeleteAccessPointPolicyRequest(const DeleteAccessPointPolicyRequest &other)
    : S3ControlRequest(new DeleteAccessPointPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAccessPointPolicyRequest object.
 */
DeleteAccessPointPolicyRequest::DeleteAccessPointPolicyRequest()
    : S3ControlRequest(new DeleteAccessPointPolicyRequestPrivate(S3ControlRequest::DeleteAccessPointPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAccessPointPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAccessPointPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAccessPointPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAccessPointPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::DeleteAccessPointPolicyRequestPrivate
 * \brief The DeleteAccessPointPolicyRequestPrivate class provides private implementation for DeleteAccessPointPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteAccessPointPolicyRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
DeleteAccessPointPolicyRequestPrivate::DeleteAccessPointPolicyRequestPrivate(
    const S3ControlRequest::Action action, DeleteAccessPointPolicyRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAccessPointPolicyRequest
 * class' copy constructor.
 */
DeleteAccessPointPolicyRequestPrivate::DeleteAccessPointPolicyRequestPrivate(
    const DeleteAccessPointPolicyRequestPrivate &other, DeleteAccessPointPolicyRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
