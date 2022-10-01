// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "restoreobjectrequest.h"
#include "restoreobjectrequest_p.h"
#include "restoreobjectresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::RestoreObjectRequest
 * \brief The RestoreObjectRequest class provides an interface for S3 RestoreObject requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::restoreObject
 */

/*!
 * Constructs a copy of \a other.
 */
RestoreObjectRequest::RestoreObjectRequest(const RestoreObjectRequest &other)
    : S3Request(new RestoreObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RestoreObjectRequest object.
 */
RestoreObjectRequest::RestoreObjectRequest()
    : S3Request(new RestoreObjectRequestPrivate(S3Request::RestoreObjectAction, this))
{

}

/*!
 * \reimp
 */
bool RestoreObjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RestoreObjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RestoreObjectRequest::response(QNetworkReply * const reply) const
{
    return new RestoreObjectResponse(*this, reply);
}

/*!
 * \class QtAws::S3::RestoreObjectRequestPrivate
 * \brief The RestoreObjectRequestPrivate class provides private implementation for RestoreObjectRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a RestoreObjectRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
RestoreObjectRequestPrivate::RestoreObjectRequestPrivate(
    const S3Request::Action action, RestoreObjectRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RestoreObjectRequest
 * class' copy constructor.
 */
RestoreObjectRequestPrivate::RestoreObjectRequestPrivate(
    const RestoreObjectRequestPrivate &other, RestoreObjectRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
