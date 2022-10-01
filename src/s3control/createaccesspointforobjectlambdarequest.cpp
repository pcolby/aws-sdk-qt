// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createaccesspointforobjectlambdarequest.h"
#include "createaccesspointforobjectlambdarequest_p.h"
#include "createaccesspointforobjectlambdaresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::CreateAccessPointForObjectLambdaRequest
 * \brief The CreateAccessPointForObjectLambdaRequest class provides an interface for S3Control CreateAccessPointForObjectLambda requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::createAccessPointForObjectLambda
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAccessPointForObjectLambdaRequest::CreateAccessPointForObjectLambdaRequest(const CreateAccessPointForObjectLambdaRequest &other)
    : S3ControlRequest(new CreateAccessPointForObjectLambdaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAccessPointForObjectLambdaRequest object.
 */
CreateAccessPointForObjectLambdaRequest::CreateAccessPointForObjectLambdaRequest()
    : S3ControlRequest(new CreateAccessPointForObjectLambdaRequestPrivate(S3ControlRequest::CreateAccessPointForObjectLambdaAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAccessPointForObjectLambdaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAccessPointForObjectLambdaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAccessPointForObjectLambdaRequest::response(QNetworkReply * const reply) const
{
    return new CreateAccessPointForObjectLambdaResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::CreateAccessPointForObjectLambdaRequestPrivate
 * \brief The CreateAccessPointForObjectLambdaRequestPrivate class provides private implementation for CreateAccessPointForObjectLambdaRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a CreateAccessPointForObjectLambdaRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
CreateAccessPointForObjectLambdaRequestPrivate::CreateAccessPointForObjectLambdaRequestPrivate(
    const S3ControlRequest::Action action, CreateAccessPointForObjectLambdaRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAccessPointForObjectLambdaRequest
 * class' copy constructor.
 */
CreateAccessPointForObjectLambdaRequestPrivate::CreateAccessPointForObjectLambdaRequestPrivate(
    const CreateAccessPointForObjectLambdaRequestPrivate &other, CreateAccessPointForObjectLambdaRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
