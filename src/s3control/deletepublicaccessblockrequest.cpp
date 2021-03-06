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

#include "deletepublicaccessblockrequest.h"
#include "deletepublicaccessblockrequest_p.h"
#include "deletepublicaccessblockresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeletePublicAccessBlockRequest
 * \brief The DeletePublicAccessBlockRequest class provides an interface for S3Control DeletePublicAccessBlock requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deletePublicAccessBlock
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePublicAccessBlockRequest::DeletePublicAccessBlockRequest(const DeletePublicAccessBlockRequest &other)
    : S3ControlRequest(new DeletePublicAccessBlockRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePublicAccessBlockRequest object.
 */
DeletePublicAccessBlockRequest::DeletePublicAccessBlockRequest()
    : S3ControlRequest(new DeletePublicAccessBlockRequestPrivate(S3ControlRequest::DeletePublicAccessBlockAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePublicAccessBlockRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePublicAccessBlockResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePublicAccessBlockRequest::response(QNetworkReply * const reply) const
{
    return new DeletePublicAccessBlockResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::DeletePublicAccessBlockRequestPrivate
 * \brief The DeletePublicAccessBlockRequestPrivate class provides private implementation for DeletePublicAccessBlockRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeletePublicAccessBlockRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
DeletePublicAccessBlockRequestPrivate::DeletePublicAccessBlockRequestPrivate(
    const S3ControlRequest::Action action, DeletePublicAccessBlockRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePublicAccessBlockRequest
 * class' copy constructor.
 */
DeletePublicAccessBlockRequestPrivate::DeletePublicAccessBlockRequestPrivate(
    const DeletePublicAccessBlockRequestPrivate &other, DeletePublicAccessBlockRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
