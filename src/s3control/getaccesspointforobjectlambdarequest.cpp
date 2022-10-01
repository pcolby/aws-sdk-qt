// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccesspointforobjectlambdarequest.h"
#include "getaccesspointforobjectlambdarequest_p.h"
#include "getaccesspointforobjectlambdaresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetAccessPointForObjectLambdaRequest
 * \brief The GetAccessPointForObjectLambdaRequest class provides an interface for S3Control GetAccessPointForObjectLambda requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getAccessPointForObjectLambda
 */

/*!
 * Constructs a copy of \a other.
 */
GetAccessPointForObjectLambdaRequest::GetAccessPointForObjectLambdaRequest(const GetAccessPointForObjectLambdaRequest &other)
    : S3ControlRequest(new GetAccessPointForObjectLambdaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAccessPointForObjectLambdaRequest object.
 */
GetAccessPointForObjectLambdaRequest::GetAccessPointForObjectLambdaRequest()
    : S3ControlRequest(new GetAccessPointForObjectLambdaRequestPrivate(S3ControlRequest::GetAccessPointForObjectLambdaAction, this))
{

}

/*!
 * \reimp
 */
bool GetAccessPointForObjectLambdaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAccessPointForObjectLambdaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAccessPointForObjectLambdaRequest::response(QNetworkReply * const reply) const
{
    return new GetAccessPointForObjectLambdaResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::GetAccessPointForObjectLambdaRequestPrivate
 * \brief The GetAccessPointForObjectLambdaRequestPrivate class provides private implementation for GetAccessPointForObjectLambdaRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetAccessPointForObjectLambdaRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
GetAccessPointForObjectLambdaRequestPrivate::GetAccessPointForObjectLambdaRequestPrivate(
    const S3ControlRequest::Action action, GetAccessPointForObjectLambdaRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAccessPointForObjectLambdaRequest
 * class' copy constructor.
 */
GetAccessPointForObjectLambdaRequestPrivate::GetAccessPointForObjectLambdaRequestPrivate(
    const GetAccessPointForObjectLambdaRequestPrivate &other, GetAccessPointForObjectLambdaRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
