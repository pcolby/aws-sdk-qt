/*
    Copyright 2013-2020 Paul Colby

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

#include "updatejobstatusrequest.h"
#include "updatejobstatusrequest_p.h"
#include "updatejobstatusresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::UpdateJobStatusRequest
 * \brief The UpdateJobStatusRequest class provides an interface for S3Control UpdateJobStatus requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane operations.
 *
 * \sa S3ControlClient::updateJobStatus
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateJobStatusRequest::UpdateJobStatusRequest(const UpdateJobStatusRequest &other)
    : S3ControlRequest(new UpdateJobStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateJobStatusRequest object.
 */
UpdateJobStatusRequest::UpdateJobStatusRequest()
    : S3ControlRequest(new UpdateJobStatusRequestPrivate(S3ControlRequest::UpdateJobStatusAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateJobStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateJobStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateJobStatusRequest::response(QNetworkReply * const reply) const
{
    return new UpdateJobStatusResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::UpdateJobStatusRequestPrivate
 * \brief The UpdateJobStatusRequestPrivate class provides private implementation for UpdateJobStatusRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a UpdateJobStatusRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
UpdateJobStatusRequestPrivate::UpdateJobStatusRequestPrivate(
    const S3ControlRequest::Action action, UpdateJobStatusRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateJobStatusRequest
 * class' copy constructor.
 */
UpdateJobStatusRequestPrivate::UpdateJobStatusRequestPrivate(
    const UpdateJobStatusRequestPrivate &other, UpdateJobStatusRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
