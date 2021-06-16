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

#include "deleteaccesspointrequest.h"
#include "deleteaccesspointrequest_p.h"
#include "deleteaccesspointresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteAccessPointRequest
 * \brief The DeleteAccessPointRequest class provides an interface for S3Control DeleteAccessPoint requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteAccessPoint
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAccessPointRequest::DeleteAccessPointRequest(const DeleteAccessPointRequest &other)
    : S3ControlRequest(new DeleteAccessPointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAccessPointRequest object.
 */
DeleteAccessPointRequest::DeleteAccessPointRequest()
    : S3ControlRequest(new DeleteAccessPointRequestPrivate(S3ControlRequest::DeleteAccessPointAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAccessPointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAccessPointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAccessPointRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAccessPointResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::DeleteAccessPointRequestPrivate
 * \brief The DeleteAccessPointRequestPrivate class provides private implementation for DeleteAccessPointRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteAccessPointRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
DeleteAccessPointRequestPrivate::DeleteAccessPointRequestPrivate(
    const S3ControlRequest::Action action, DeleteAccessPointRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAccessPointRequest
 * class' copy constructor.
 */
DeleteAccessPointRequestPrivate::DeleteAccessPointRequestPrivate(
    const DeleteAccessPointRequestPrivate &other, DeleteAccessPointRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
