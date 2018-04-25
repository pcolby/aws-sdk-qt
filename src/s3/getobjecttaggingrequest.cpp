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

#include "getobjecttaggingrequest.h"
#include "getobjecttaggingrequest_p.h"
#include "getobjecttaggingresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetObjectTaggingRequest
 * \brief The GetObjectTaggingRequest class provides an interface for S3 GetObjectTagging requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getObjectTagging
 */

/*!
 * Constructs a copy of \a other.
 */
GetObjectTaggingRequest::GetObjectTaggingRequest(const GetObjectTaggingRequest &other)
    : S3Request(new GetObjectTaggingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetObjectTaggingRequest object.
 */
GetObjectTaggingRequest::GetObjectTaggingRequest()
    : S3Request(new GetObjectTaggingRequestPrivate(S3Request::GetObjectTaggingAction, this))
{

}

/*!
 * \reimp
 */
bool GetObjectTaggingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetObjectTaggingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetObjectTaggingRequest::response(QNetworkReply * const reply) const
{
    return new GetObjectTaggingResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetObjectTaggingRequestPrivate
 * \brief The GetObjectTaggingRequestPrivate class provides private implementation for GetObjectTaggingRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetObjectTaggingRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetObjectTaggingRequestPrivate::GetObjectTaggingRequestPrivate(
    const S3Request::Action action, GetObjectTaggingRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetObjectTaggingRequest
 * class' copy constructor.
 */
GetObjectTaggingRequestPrivate::GetObjectTaggingRequestPrivate(
    const GetObjectTaggingRequestPrivate &other, GetObjectTaggingRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
