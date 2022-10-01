// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
