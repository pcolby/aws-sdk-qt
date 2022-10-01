// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
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
