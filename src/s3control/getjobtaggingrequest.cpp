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
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
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
