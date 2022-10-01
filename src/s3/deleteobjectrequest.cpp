// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteobjectrequest.h"
#include "deleteobjectrequest_p.h"
#include "deleteobjectresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteObjectRequest
 * \brief The DeleteObjectRequest class provides an interface for S3 DeleteObject requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteObject
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteObjectRequest::DeleteObjectRequest(const DeleteObjectRequest &other)
    : S3Request(new DeleteObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteObjectRequest object.
 */
DeleteObjectRequest::DeleteObjectRequest()
    : S3Request(new DeleteObjectRequestPrivate(S3Request::DeleteObjectAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteObjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteObjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteObjectRequest::response(QNetworkReply * const reply) const
{
    return new DeleteObjectResponse(*this, reply);
}

/*!
 * \class QtAws::S3::DeleteObjectRequestPrivate
 * \brief The DeleteObjectRequestPrivate class provides private implementation for DeleteObjectRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteObjectRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
DeleteObjectRequestPrivate::DeleteObjectRequestPrivate(
    const S3Request::Action action, DeleteObjectRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteObjectRequest
 * class' copy constructor.
 */
DeleteObjectRequestPrivate::DeleteObjectRequestPrivate(
    const DeleteObjectRequestPrivate &other, DeleteObjectRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
