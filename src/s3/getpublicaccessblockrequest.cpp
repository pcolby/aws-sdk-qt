/*
    Copyright 2013-2020 Paul Colby

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

#include "getpublicaccessblockrequest.h"
#include "getpublicaccessblockrequest_p.h"
#include "getpublicaccessblockresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetPublicAccessBlockRequest
 * \brief The GetPublicAccessBlockRequest class provides an interface for S3 GetPublicAccessBlock requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getPublicAccessBlock
 */

/*!
 * Constructs a copy of \a other.
 */
GetPublicAccessBlockRequest::GetPublicAccessBlockRequest(const GetPublicAccessBlockRequest &other)
    : S3Request(new GetPublicAccessBlockRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPublicAccessBlockRequest object.
 */
GetPublicAccessBlockRequest::GetPublicAccessBlockRequest()
    : S3Request(new GetPublicAccessBlockRequestPrivate(S3Request::GetPublicAccessBlockAction, this))
{

}

/*!
 * \reimp
 */
bool GetPublicAccessBlockRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPublicAccessBlockResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPublicAccessBlockRequest::response(QNetworkReply * const reply) const
{
    return new GetPublicAccessBlockResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetPublicAccessBlockRequestPrivate
 * \brief The GetPublicAccessBlockRequestPrivate class provides private implementation for GetPublicAccessBlockRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetPublicAccessBlockRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetPublicAccessBlockRequestPrivate::GetPublicAccessBlockRequestPrivate(
    const S3Request::Action action, GetPublicAccessBlockRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPublicAccessBlockRequest
 * class' copy constructor.
 */
GetPublicAccessBlockRequestPrivate::GetPublicAccessBlockRequestPrivate(
    const GetPublicAccessBlockRequestPrivate &other, GetPublicAccessBlockRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
