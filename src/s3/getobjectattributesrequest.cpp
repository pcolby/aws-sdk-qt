/*
    Copyright 2013-2021 Paul Colby

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

#include "getobjectattributesrequest.h"
#include "getobjectattributesrequest_p.h"
#include "getobjectattributesresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetObjectAttributesRequest
 * \brief The GetObjectAttributesRequest class provides an interface for S3 GetObjectAttributes requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getObjectAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
GetObjectAttributesRequest::GetObjectAttributesRequest(const GetObjectAttributesRequest &other)
    : S3Request(new GetObjectAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetObjectAttributesRequest object.
 */
GetObjectAttributesRequest::GetObjectAttributesRequest()
    : S3Request(new GetObjectAttributesRequestPrivate(S3Request::GetObjectAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool GetObjectAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetObjectAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetObjectAttributesRequest::response(QNetworkReply * const reply) const
{
    return new GetObjectAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetObjectAttributesRequestPrivate
 * \brief The GetObjectAttributesRequestPrivate class provides private implementation for GetObjectAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetObjectAttributesRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetObjectAttributesRequestPrivate::GetObjectAttributesRequestPrivate(
    const S3Request::Action action, GetObjectAttributesRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetObjectAttributesRequest
 * class' copy constructor.
 */
GetObjectAttributesRequestPrivate::GetObjectAttributesRequestPrivate(
    const GetObjectAttributesRequestPrivate &other, GetObjectAttributesRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
