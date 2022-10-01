// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "headobjectrequest.h"
#include "headobjectrequest_p.h"
#include "headobjectresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::HeadObjectRequest
 * \brief The HeadObjectRequest class provides an interface for S3 HeadObject requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::headObject
 */

/*!
 * Constructs a copy of \a other.
 */
HeadObjectRequest::HeadObjectRequest(const HeadObjectRequest &other)
    : S3Request(new HeadObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a HeadObjectRequest object.
 */
HeadObjectRequest::HeadObjectRequest()
    : S3Request(new HeadObjectRequestPrivate(S3Request::HeadObjectAction, this))
{

}

/*!
 * \reimp
 */
bool HeadObjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a HeadObjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * HeadObjectRequest::response(QNetworkReply * const reply) const
{
    return new HeadObjectResponse(*this, reply);
}

/*!
 * \class QtAws::S3::HeadObjectRequestPrivate
 * \brief The HeadObjectRequestPrivate class provides private implementation for HeadObjectRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a HeadObjectRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
HeadObjectRequestPrivate::HeadObjectRequestPrivate(
    const S3Request::Action action, HeadObjectRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the HeadObjectRequest
 * class' copy constructor.
 */
HeadObjectRequestPrivate::HeadObjectRequestPrivate(
    const HeadObjectRequestPrivate &other, HeadObjectRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
