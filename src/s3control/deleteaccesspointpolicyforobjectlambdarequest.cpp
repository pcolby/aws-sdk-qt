// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
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
