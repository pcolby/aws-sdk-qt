// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccesspointconfigurationforobjectlambdarequest.h"
#include "getaccesspointconfigurationforobjectlambdarequest_p.h"
#include "getaccesspointconfigurationforobjectlambdaresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetAccessPointConfigurationForObjectLambdaRequest
 * \brief The GetAccessPointConfigurationForObjectLambdaRequest class provides an interface for S3Control GetAccessPointConfigurationForObjectLambda requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getAccessPointConfigurationForObjectLambda
 */

/*!
 * Constructs a copy of \a other.
 */
GetAccessPointConfigurationForObjectLambdaRequest::GetAccessPointConfigurationForObjectLambdaRequest(const GetAccessPointConfigurationForObjectLambdaRequest &other)
    : S3ControlRequest(new GetAccessPointConfigurationForObjectLambdaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAccessPointConfigurationForObjectLambdaRequest object.
 */
GetAccessPointConfigurationForObjectLambdaRequest::GetAccessPointConfigurationForObjectLambdaRequest()
    : S3ControlRequest(new GetAccessPointConfigurationForObjectLambdaRequestPrivate(S3ControlRequest::GetAccessPointConfigurationForObjectLambdaAction, this))
{

}

/*!
 * \reimp
 */
bool GetAccessPointConfigurationForObjectLambdaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAccessPointConfigurationForObjectLambdaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAccessPointConfigurationForObjectLambdaRequest::response(QNetworkReply * const reply) const
{
    return new GetAccessPointConfigurationForObjectLambdaResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::GetAccessPointConfigurationForObjectLambdaRequestPrivate
 * \brief The GetAccessPointConfigurationForObjectLambdaRequestPrivate class provides private implementation for GetAccessPointConfigurationForObjectLambdaRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetAccessPointConfigurationForObjectLambdaRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
GetAccessPointConfigurationForObjectLambdaRequestPrivate::GetAccessPointConfigurationForObjectLambdaRequestPrivate(
    const S3ControlRequest::Action action, GetAccessPointConfigurationForObjectLambdaRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAccessPointConfigurationForObjectLambdaRequest
 * class' copy constructor.
 */
GetAccessPointConfigurationForObjectLambdaRequestPrivate::GetAccessPointConfigurationForObjectLambdaRequestPrivate(
    const GetAccessPointConfigurationForObjectLambdaRequestPrivate &other, GetAccessPointConfigurationForObjectLambdaRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
