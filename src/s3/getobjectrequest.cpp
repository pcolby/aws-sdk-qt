// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getobjectrequest.h"
#include "getobjectrequest_p.h"
#include "getobjectresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetObjectRequest
 * \brief The GetObjectRequest class provides an interface for S3 GetObject requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getObject
 */

/*!
 * Constructs a copy of \a other.
 */
GetObjectRequest::GetObjectRequest(const GetObjectRequest &other)
    : S3Request(new GetObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetObjectRequest object.
 */
GetObjectRequest::GetObjectRequest()
    : S3Request(new GetObjectRequestPrivate(S3Request::GetObjectAction, this))
{

}

/*!
 * \reimp
 */
bool GetObjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetObjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetObjectRequest::response(QNetworkReply * const reply) const
{
    return new GetObjectResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetObjectRequestPrivate
 * \brief The GetObjectRequestPrivate class provides private implementation for GetObjectRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetObjectRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetObjectRequestPrivate::GetObjectRequestPrivate(
    const S3Request::Action action, GetObjectRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetObjectRequest
 * class' copy constructor.
 */
GetObjectRequestPrivate::GetObjectRequestPrivate(
    const GetObjectRequestPrivate &other, GetObjectRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
