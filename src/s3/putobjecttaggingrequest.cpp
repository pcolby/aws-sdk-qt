// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putobjecttaggingrequest.h"
#include "putobjecttaggingrequest_p.h"
#include "putobjecttaggingresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutObjectTaggingRequest
 * \brief The PutObjectTaggingRequest class provides an interface for S3 PutObjectTagging requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putObjectTagging
 */

/*!
 * Constructs a copy of \a other.
 */
PutObjectTaggingRequest::PutObjectTaggingRequest(const PutObjectTaggingRequest &other)
    : S3Request(new PutObjectTaggingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutObjectTaggingRequest object.
 */
PutObjectTaggingRequest::PutObjectTaggingRequest()
    : S3Request(new PutObjectTaggingRequestPrivate(S3Request::PutObjectTaggingAction, this))
{

}

/*!
 * \reimp
 */
bool PutObjectTaggingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutObjectTaggingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutObjectTaggingRequest::response(QNetworkReply * const reply) const
{
    return new PutObjectTaggingResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutObjectTaggingRequestPrivate
 * \brief The PutObjectTaggingRequestPrivate class provides private implementation for PutObjectTaggingRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutObjectTaggingRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutObjectTaggingRequestPrivate::PutObjectTaggingRequestPrivate(
    const S3Request::Action action, PutObjectTaggingRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutObjectTaggingRequest
 * class' copy constructor.
 */
PutObjectTaggingRequestPrivate::PutObjectTaggingRequestPrivate(
    const PutObjectTaggingRequestPrivate &other, PutObjectTaggingRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
