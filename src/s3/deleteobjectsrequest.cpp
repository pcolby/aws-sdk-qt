// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteobjectsrequest.h"
#include "deleteobjectsrequest_p.h"
#include "deleteobjectsresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteObjectsRequest
 * \brief The DeleteObjectsRequest class provides an interface for S3 DeleteObjects requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteObjects
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteObjectsRequest::DeleteObjectsRequest(const DeleteObjectsRequest &other)
    : S3Request(new DeleteObjectsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteObjectsRequest object.
 */
DeleteObjectsRequest::DeleteObjectsRequest()
    : S3Request(new DeleteObjectsRequestPrivate(S3Request::DeleteObjectsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteObjectsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteObjectsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteObjectsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteObjectsResponse(*this, reply);
}

/*!
 * \class QtAws::S3::DeleteObjectsRequestPrivate
 * \brief The DeleteObjectsRequestPrivate class provides private implementation for DeleteObjectsRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteObjectsRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
DeleteObjectsRequestPrivate::DeleteObjectsRequestPrivate(
    const S3Request::Action action, DeleteObjectsRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteObjectsRequest
 * class' copy constructor.
 */
DeleteObjectsRequestPrivate::DeleteObjectsRequestPrivate(
    const DeleteObjectsRequestPrivate &other, DeleteObjectsRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
