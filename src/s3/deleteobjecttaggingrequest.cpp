// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteobjecttaggingrequest.h"
#include "deleteobjecttaggingrequest_p.h"
#include "deleteobjecttaggingresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteObjectTaggingRequest
 * \brief The DeleteObjectTaggingRequest class provides an interface for S3 DeleteObjectTagging requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteObjectTagging
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteObjectTaggingRequest::DeleteObjectTaggingRequest(const DeleteObjectTaggingRequest &other)
    : S3Request(new DeleteObjectTaggingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteObjectTaggingRequest object.
 */
DeleteObjectTaggingRequest::DeleteObjectTaggingRequest()
    : S3Request(new DeleteObjectTaggingRequestPrivate(S3Request::DeleteObjectTaggingAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteObjectTaggingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteObjectTaggingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteObjectTaggingRequest::response(QNetworkReply * const reply) const
{
    return new DeleteObjectTaggingResponse(*this, reply);
}

/*!
 * \class QtAws::S3::DeleteObjectTaggingRequestPrivate
 * \brief The DeleteObjectTaggingRequestPrivate class provides private implementation for DeleteObjectTaggingRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteObjectTaggingRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
DeleteObjectTaggingRequestPrivate::DeleteObjectTaggingRequestPrivate(
    const S3Request::Action action, DeleteObjectTaggingRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteObjectTaggingRequest
 * class' copy constructor.
 */
DeleteObjectTaggingRequestPrivate::DeleteObjectTaggingRequestPrivate(
    const DeleteObjectTaggingRequestPrivate &other, DeleteObjectTaggingRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
