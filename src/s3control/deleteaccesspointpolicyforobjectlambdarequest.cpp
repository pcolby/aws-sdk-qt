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

#include "deleteaccesspointpolicyforobjectlambdarequest.h"
#include "deleteaccesspointpolicyforobjectlambdarequest_p.h"
#include "deleteaccesspointpolicyforobjectlambdaresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteAccessPointPolicyForObjectLambdaRequest
 * \brief The DeleteAccessPointPolicyForObjectLambdaRequest class provides an interface for S3Control DeleteAccessPointPolicyForObjectLambda requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteAccessPointPolicyForObjectLambda
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAccessPointPolicyForObjectLambdaRequest::DeleteAccessPointPolicyForObjectLambdaRequest(const DeleteAccessPointPolicyForObjectLambdaRequest &other)
    : S3ControlRequest(new DeleteAccessPointPolicyForObjectLambdaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAccessPointPolicyForObjectLambdaRequest object.
 */
DeleteAccessPointPolicyForObjectLambdaRequest::DeleteAccessPointPolicyForObjectLambdaRequest()
    : S3ControlRequest(new DeleteAccessPointPolicyForObjectLambdaRequestPrivate(S3ControlRequest::DeleteAccessPointPolicyForObjectLambdaAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAccessPointPolicyForObjectLambdaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAccessPointPolicyForObjectLambdaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAccessPointPolicyForObjectLambdaRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAccessPointPolicyForObjectLambdaResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::DeleteAccessPointPolicyForObjectLambdaRequestPrivate
 * \brief The DeleteAccessPointPolicyForObjectLambdaRequestPrivate class provides private implementation for DeleteAccessPointPolicyForObjectLambdaRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteAccessPointPolicyForObjectLambdaRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
DeleteAccessPointPolicyForObjectLambdaRequestPrivate::DeleteAccessPointPolicyForObjectLambdaRequestPrivate(
    const S3ControlRequest::Action action, DeleteAccessPointPolicyForObjectLambdaRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAccessPointPolicyForObjectLambdaRequest
 * class' copy constructor.
 */
DeleteAccessPointPolicyForObjectLambdaRequestPrivate::DeleteAccessPointPolicyForObjectLambdaRequestPrivate(
    const DeleteAccessPointPolicyForObjectLambdaRequestPrivate &other, DeleteAccessPointPolicyForObjectLambdaRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
