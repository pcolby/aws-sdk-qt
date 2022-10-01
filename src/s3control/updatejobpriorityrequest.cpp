// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
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
