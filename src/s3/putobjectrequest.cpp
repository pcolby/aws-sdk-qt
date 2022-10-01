// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putobjectrequest.h"
#include "putobjectrequest_p.h"
#include "putobjectresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutObjectRequest
 * \brief The PutObjectRequest class provides an interface for S3 PutObject requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putObject
 */

/*!
 * Constructs a copy of \a other.
 */
PutObjectRequest::PutObjectRequest(const PutObjectRequest &other)
    : S3Request(new PutObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutObjectRequest object.
 */
PutObjectRequest::PutObjectRequest()
    : S3Request(new PutObjectRequestPrivate(S3Request::PutObjectAction, this))
{

}

/*!
 * \reimp
 */
bool PutObjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutObjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutObjectRequest::response(QNetworkReply * const reply) const
{
    return new PutObjectResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutObjectRequestPrivate
 * \brief The PutObjectRequestPrivate class provides private implementation for PutObjectRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutObjectRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutObjectRequestPrivate::PutObjectRequestPrivate(
    const S3Request::Action action, PutObjectRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutObjectRequest
 * class' copy constructor.
 */
PutObjectRequestPrivate::PutObjectRequestPrivate(
    const PutObjectRequestPrivate &other, PutObjectRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
