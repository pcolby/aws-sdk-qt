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

#include "putjobtaggingrequest.h"
#include "putjobtaggingrequest_p.h"
#include "putjobtaggingresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::PutJobTaggingRequest
 * \brief The PutJobTaggingRequest class provides an interface for S3Control PutJobTagging requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::putJobTagging
 */

/*!
 * Constructs a copy of \a other.
 */
PutJobTaggingRequest::PutJobTaggingRequest(const PutJobTaggingRequest &other)
    : S3ControlRequest(new PutJobTaggingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutJobTaggingRequest object.
 */
PutJobTaggingRequest::PutJobTaggingRequest()
    : S3ControlRequest(new PutJobTaggingRequestPrivate(S3ControlRequest::PutJobTaggingAction, this))
{

}

/*!
 * \reimp
 */
bool PutJobTaggingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutJobTaggingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutJobTaggingRequest::response(QNetworkReply * const reply) const
{
    return new PutJobTaggingResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::PutJobTaggingRequestPrivate
 * \brief The PutJobTaggingRequestPrivate class provides private implementation for PutJobTaggingRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a PutJobTaggingRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
PutJobTaggingRequestPrivate::PutJobTaggingRequestPrivate(
    const S3ControlRequest::Action action, PutJobTaggingRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutJobTaggingRequest
 * class' copy constructor.
 */
PutJobTaggingRequestPrivate::PutJobTaggingRequestPrivate(
    const PutJobTaggingRequestPrivate &other, PutJobTaggingRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
