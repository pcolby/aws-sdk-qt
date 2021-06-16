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

#include "updatejobpriorityrequest.h"
#include "updatejobpriorityrequest_p.h"
#include "updatejobpriorityresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::UpdateJobPriorityRequest
 * \brief The UpdateJobPriorityRequest class provides an interface for S3Control UpdateJobPriority requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane operations.
 *
 * \sa S3ControlClient::updateJobPriority
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateJobPriorityRequest::UpdateJobPriorityRequest(const UpdateJobPriorityRequest &other)
    : S3ControlRequest(new UpdateJobPriorityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateJobPriorityRequest object.
 */
UpdateJobPriorityRequest::UpdateJobPriorityRequest()
    : S3ControlRequest(new UpdateJobPriorityRequestPrivate(S3ControlRequest::UpdateJobPriorityAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateJobPriorityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateJobPriorityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateJobPriorityRequest::response(QNetworkReply * const reply) const
{
    return new UpdateJobPriorityResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::UpdateJobPriorityRequestPrivate
 * \brief The UpdateJobPriorityRequestPrivate class provides private implementation for UpdateJobPriorityRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a UpdateJobPriorityRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
UpdateJobPriorityRequestPrivate::UpdateJobPriorityRequestPrivate(
    const S3ControlRequest::Action action, UpdateJobPriorityRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateJobPriorityRequest
 * class' copy constructor.
 */
UpdateJobPriorityRequestPrivate::UpdateJobPriorityRequestPrivate(
    const UpdateJobPriorityRequestPrivate &other, UpdateJobPriorityRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
