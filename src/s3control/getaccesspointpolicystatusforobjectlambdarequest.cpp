// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccesspointpolicystatusforobjectlambdarequest.h"
#include "getaccesspointpolicystatusforobjectlambdarequest_p.h"
#include "getaccesspointpolicystatusforobjectlambdaresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetAccessPointPolicyStatusForObjectLambdaRequest
 * \brief The GetAccessPointPolicyStatusForObjectLambdaRequest class provides an interface for S3Control GetAccessPointPolicyStatusForObjectLambda requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getAccessPointPolicyStatusForObjectLambda
 */

/*!
 * Constructs a copy of \a other.
 */
GetAccessPointPolicyStatusForObjectLambdaRequest::GetAccessPointPolicyStatusForObjectLambdaRequest(const GetAccessPointPolicyStatusForObjectLambdaRequest &other)
    : S3ControlRequest(new GetAccessPointPolicyStatusForObjectLambdaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAccessPointPolicyStatusForObjectLambdaRequest object.
 */
GetAccessPointPolicyStatusForObjectLambdaRequest::GetAccessPointPolicyStatusForObjectLambdaRequest()
    : S3ControlRequest(new GetAccessPointPolicyStatusForObjectLambdaRequestPrivate(S3ControlRequest::GetAccessPointPolicyStatusForObjectLambdaAction, this))
{

}

/*!
 * \reimp
 */
bool GetAccessPointPolicyStatusForObjectLambdaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAccessPointPolicyStatusForObjectLambdaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAccessPointPolicyStatusForObjectLambdaRequest::response(QNetworkReply * const reply) const
{
    return new GetAccessPointPolicyStatusForObjectLambdaResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::GetAccessPointPolicyStatusForObjectLambdaRequestPrivate
 * \brief The GetAccessPointPolicyStatusForObjectLambdaRequestPrivate class provides private implementation for GetAccessPointPolicyStatusForObjectLambdaRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetAccessPointPolicyStatusForObjectLambdaRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
GetAccessPointPolicyStatusForObjectLambdaRequestPrivate::GetAccessPointPolicyStatusForObjectLambdaRequestPrivate(
    const S3ControlRequest::Action action, GetAccessPointPolicyStatusForObjectLambdaRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAccessPointPolicyStatusForObjectLambdaRequest
 * class' copy constructor.
 */
GetAccessPointPolicyStatusForObjectLambdaRequestPrivate::GetAccessPointPolicyStatusForObjectLambdaRequestPrivate(
    const GetAccessPointPolicyStatusForObjectLambdaRequestPrivate &other, GetAccessPointPolicyStatusForObjectLambdaRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
