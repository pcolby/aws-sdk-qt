// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getjobtaggingrequest.h"
#include "getjobtaggingrequest_p.h"
#include "getjobtaggingresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetJobTaggingRequest
 * \brief The GetJobTaggingRequest class provides an interface for S3Control GetJobTagging requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getJobTagging
 */

/*!
 * Constructs a copy of \a other.
 */
GetJobTaggingRequest::GetJobTaggingRequest(const GetJobTaggingRequest &other)
    : S3ControlRequest(new GetJobTaggingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetJobTaggingRequest object.
 */
GetJobTaggingRequest::GetJobTaggingRequest()
    : S3ControlRequest(new GetJobTaggingRequestPrivate(S3ControlRequest::GetJobTaggingAction, this))
{

}

/*!
 * \reimp
 */
bool GetJobTaggingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetJobTaggingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetJobTaggingRequest::response(QNetworkReply * const reply) const
{
    return new GetJobTaggingResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::GetJobTaggingRequestPrivate
 * \brief The GetJobTaggingRequestPrivate class provides private implementation for GetJobTaggingRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetJobTaggingRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
GetJobTaggingRequestPrivate::GetJobTaggingRequestPrivate(
    const S3ControlRequest::Action action, GetJobTaggingRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetJobTaggingRequest
 * class' copy constructor.
 */
GetJobTaggingRequestPrivate::GetJobTaggingRequestPrivate(
    const GetJobTaggingRequestPrivate &other, GetJobTaggingRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
