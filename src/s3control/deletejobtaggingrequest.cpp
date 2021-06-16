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
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
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
