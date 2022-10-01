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
