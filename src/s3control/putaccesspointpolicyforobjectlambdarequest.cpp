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

#include "putaccesspointpolicyforobjectlambdarequest.h"
#include "putaccesspointpolicyforobjectlambdarequest_p.h"
#include "putaccesspointpolicyforobjectlambdaresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::PutAccessPointPolicyForObjectLambdaRequest
 * \brief The PutAccessPointPolicyForObjectLambdaRequest class provides an interface for S3Control PutAccessPointPolicyForObjectLambda requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::putAccessPointPolicyForObjectLambda
 */

/*!
 * Constructs a copy of \a other.
 */
PutAccessPointPolicyForObjectLambdaRequest::PutAccessPointPolicyForObjectLambdaRequest(const PutAccessPointPolicyForObjectLambdaRequest &other)
    : S3ControlRequest(new PutAccessPointPolicyForObjectLambdaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutAccessPointPolicyForObjectLambdaRequest object.
 */
PutAccessPointPolicyForObjectLambdaRequest::PutAccessPointPolicyForObjectLambdaRequest()
    : S3ControlRequest(new PutAccessPointPolicyForObjectLambdaRequestPrivate(S3ControlRequest::PutAccessPointPolicyForObjectLambdaAction, this))
{

}

/*!
 * \reimp
 */
bool PutAccessPointPolicyForObjectLambdaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutAccessPointPolicyForObjectLambdaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutAccessPointPolicyForObjectLambdaRequest::response(QNetworkReply * const reply) const
{
    return new PutAccessPointPolicyForObjectLambdaResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::PutAccessPointPolicyForObjectLambdaRequestPrivate
 * \brief The PutAccessPointPolicyForObjectLambdaRequestPrivate class provides private implementation for PutAccessPointPolicyForObjectLambdaRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a PutAccessPointPolicyForObjectLambdaRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
PutAccessPointPolicyForObjectLambdaRequestPrivate::PutAccessPointPolicyForObjectLambdaRequestPrivate(
    const S3ControlRequest::Action action, PutAccessPointPolicyForObjectLambdaRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutAccessPointPolicyForObjectLambdaRequest
 * class' copy constructor.
 */
PutAccessPointPolicyForObjectLambdaRequestPrivate::PutAccessPointPolicyForObjectLambdaRequestPrivate(
    const PutAccessPointPolicyForObjectLambdaRequestPrivate &other, PutAccessPointPolicyForObjectLambdaRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
