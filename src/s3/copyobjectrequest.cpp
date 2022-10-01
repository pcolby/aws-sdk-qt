// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "copyobjectrequest.h"
#include "copyobjectrequest_p.h"
#include "copyobjectresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::CopyObjectRequest
 * \brief The CopyObjectRequest class provides an interface for S3 CopyObject requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::copyObject
 */

/*!
 * Constructs a copy of \a other.
 */
CopyObjectRequest::CopyObjectRequest(const CopyObjectRequest &other)
    : S3Request(new CopyObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CopyObjectRequest object.
 */
CopyObjectRequest::CopyObjectRequest()
    : S3Request(new CopyObjectRequestPrivate(S3Request::CopyObjectAction, this))
{

}

/*!
 * \reimp
 */
bool CopyObjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CopyObjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CopyObjectRequest::response(QNetworkReply * const reply) const
{
    return new CopyObjectResponse(*this, reply);
}

/*!
 * \class QtAws::S3::CopyObjectRequestPrivate
 * \brief The CopyObjectRequestPrivate class provides private implementation for CopyObjectRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a CopyObjectRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
CopyObjectRequestPrivate::CopyObjectRequestPrivate(
    const S3Request::Action action, CopyObjectRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CopyObjectRequest
 * class' copy constructor.
 */
CopyObjectRequestPrivate::CopyObjectRequestPrivate(
    const CopyObjectRequestPrivate &other, CopyObjectRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
