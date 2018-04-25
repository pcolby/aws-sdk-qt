/*
    Copyright 2013-2018 Paul Colby

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
