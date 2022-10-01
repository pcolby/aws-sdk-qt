// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletejobtaggingrequest.h"
#include "deletejobtaggingrequest_p.h"
#include "deletejobtaggingresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteJobTaggingRequest
 * \brief The DeleteJobTaggingRequest class provides an interface for S3Control DeleteJobTagging requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteJobTagging
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteJobTaggingRequest::DeleteJobTaggingRequest(const DeleteJobTaggingRequest &other)
    : S3ControlRequest(new DeleteJobTaggingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteJobTaggingRequest object.
 */
DeleteJobTaggingRequest::DeleteJobTaggingRequest()
    : S3ControlRequest(new DeleteJobTaggingRequestPrivate(S3ControlRequest::DeleteJobTaggingAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteJobTaggingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteJobTaggingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteJobTaggingRequest::response(QNetworkReply * const reply) const
{
    return new DeleteJobTaggingResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::DeleteJobTaggingRequestPrivate
 * \brief The DeleteJobTaggingRequestPrivate class provides private implementation for DeleteJobTaggingRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteJobTaggingRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
DeleteJobTaggingRequestPrivate::DeleteJobTaggingRequestPrivate(
    const S3ControlRequest::Action action, DeleteJobTaggingRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteJobTaggingRequest
 * class' copy constructor.
 */
DeleteJobTaggingRequestPrivate::DeleteJobTaggingRequestPrivate(
    const DeleteJobTaggingRequestPrivate &other, DeleteJobTaggingRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
