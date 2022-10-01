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
