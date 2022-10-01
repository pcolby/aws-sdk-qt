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

#include "getaccesspointpolicyforobjectlambdarequest.h"
#include "getaccesspointpolicyforobjectlambdarequest_p.h"
#include "getaccesspointpolicyforobjectlambdaresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetAccessPointPolicyForObjectLambdaRequest
 * \brief The GetAccessPointPolicyForObjectLambdaRequest class provides an interface for S3Control GetAccessPointPolicyForObjectLambda requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getAccessPointPolicyForObjectLambda
 */

/*!
 * Constructs a copy of \a other.
 */
GetAccessPointPolicyForObjectLambdaRequest::GetAccessPointPolicyForObjectLambdaRequest(const GetAccessPointPolicyForObjectLambdaRequest &other)
    : S3ControlRequest(new GetAccessPointPolicyForObjectLambdaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAccessPointPolicyForObjectLambdaRequest object.
 */
GetAccessPointPolicyForObjectLambdaRequest::GetAccessPointPolicyForObjectLambdaRequest()
    : S3ControlRequest(new GetAccessPointPolicyForObjectLambdaRequestPrivate(S3ControlRequest::GetAccessPointPolicyForObjectLambdaAction, this))
{

}

/*!
 * \reimp
 */
bool GetAccessPointPolicyForObjectLambdaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAccessPointPolicyForObjectLambdaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAccessPointPolicyForObjectLambdaRequest::response(QNetworkReply * const reply) const
{
    return new GetAccessPointPolicyForObjectLambdaResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::GetAccessPointPolicyForObjectLambdaRequestPrivate
 * \brief The GetAccessPointPolicyForObjectLambdaRequestPrivate class provides private implementation for GetAccessPointPolicyForObjectLambdaRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetAccessPointPolicyForObjectLambdaRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
GetAccessPointPolicyForObjectLambdaRequestPrivate::GetAccessPointPolicyForObjectLambdaRequestPrivate(
    const S3ControlRequest::Action action, GetAccessPointPolicyForObjectLambdaRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAccessPointPolicyForObjectLambdaRequest
 * class' copy constructor.
 */
GetAccessPointPolicyForObjectLambdaRequestPrivate::GetAccessPointPolicyForObjectLambdaRequestPrivate(
    const GetAccessPointPolicyForObjectLambdaRequestPrivate &other, GetAccessPointPolicyForObjectLambdaRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
