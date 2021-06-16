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

#include "deleteaccesspointforobjectlambdarequest.h"
#include "deleteaccesspointforobjectlambdarequest_p.h"
#include "deleteaccesspointforobjectlambdaresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteAccessPointForObjectLambdaRequest
 * \brief The DeleteAccessPointForObjectLambdaRequest class provides an interface for S3Control DeleteAccessPointForObjectLambda requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteAccessPointForObjectLambda
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAccessPointForObjectLambdaRequest::DeleteAccessPointForObjectLambdaRequest(const DeleteAccessPointForObjectLambdaRequest &other)
    : S3ControlRequest(new DeleteAccessPointForObjectLambdaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAccessPointForObjectLambdaRequest object.
 */
DeleteAccessPointForObjectLambdaRequest::DeleteAccessPointForObjectLambdaRequest()
    : S3ControlRequest(new DeleteAccessPointForObjectLambdaRequestPrivate(S3ControlRequest::DeleteAccessPointForObjectLambdaAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAccessPointForObjectLambdaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAccessPointForObjectLambdaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAccessPointForObjectLambdaRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAccessPointForObjectLambdaResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::DeleteAccessPointForObjectLambdaRequestPrivate
 * \brief The DeleteAccessPointForObjectLambdaRequestPrivate class provides private implementation for DeleteAccessPointForObjectLambdaRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteAccessPointForObjectLambdaRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
DeleteAccessPointForObjectLambdaRequestPrivate::DeleteAccessPointForObjectLambdaRequestPrivate(
    const S3ControlRequest::Action action, DeleteAccessPointForObjectLambdaRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAccessPointForObjectLambdaRequest
 * class' copy constructor.
 */
DeleteAccessPointForObjectLambdaRequestPrivate::DeleteAccessPointForObjectLambdaRequestPrivate(
    const DeleteAccessPointForObjectLambdaRequestPrivate &other, DeleteAccessPointForObjectLambdaRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
