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
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
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
