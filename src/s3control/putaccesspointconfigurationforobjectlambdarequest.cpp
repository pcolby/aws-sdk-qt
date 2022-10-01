// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putaccesspointconfigurationforobjectlambdarequest.h"
#include "putaccesspointconfigurationforobjectlambdarequest_p.h"
#include "putaccesspointconfigurationforobjectlambdaresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::PutAccessPointConfigurationForObjectLambdaRequest
 * \brief The PutAccessPointConfigurationForObjectLambdaRequest class provides an interface for S3Control PutAccessPointConfigurationForObjectLambda requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::putAccessPointConfigurationForObjectLambda
 */

/*!
 * Constructs a copy of \a other.
 */
PutAccessPointConfigurationForObjectLambdaRequest::PutAccessPointConfigurationForObjectLambdaRequest(const PutAccessPointConfigurationForObjectLambdaRequest &other)
    : S3ControlRequest(new PutAccessPointConfigurationForObjectLambdaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutAccessPointConfigurationForObjectLambdaRequest object.
 */
PutAccessPointConfigurationForObjectLambdaRequest::PutAccessPointConfigurationForObjectLambdaRequest()
    : S3ControlRequest(new PutAccessPointConfigurationForObjectLambdaRequestPrivate(S3ControlRequest::PutAccessPointConfigurationForObjectLambdaAction, this))
{

}

/*!
 * \reimp
 */
bool PutAccessPointConfigurationForObjectLambdaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutAccessPointConfigurationForObjectLambdaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutAccessPointConfigurationForObjectLambdaRequest::response(QNetworkReply * const reply) const
{
    return new PutAccessPointConfigurationForObjectLambdaResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::PutAccessPointConfigurationForObjectLambdaRequestPrivate
 * \brief The PutAccessPointConfigurationForObjectLambdaRequestPrivate class provides private implementation for PutAccessPointConfigurationForObjectLambdaRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a PutAccessPointConfigurationForObjectLambdaRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
PutAccessPointConfigurationForObjectLambdaRequestPrivate::PutAccessPointConfigurationForObjectLambdaRequestPrivate(
    const S3ControlRequest::Action action, PutAccessPointConfigurationForObjectLambdaRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutAccessPointConfigurationForObjectLambdaRequest
 * class' copy constructor.
 */
PutAccessPointConfigurationForObjectLambdaRequestPrivate::PutAccessPointConfigurationForObjectLambdaRequestPrivate(
    const PutAccessPointConfigurationForObjectLambdaRequestPrivate &other, PutAccessPointConfigurationForObjectLambdaRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
