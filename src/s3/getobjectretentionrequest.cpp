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

#include "getobjectretentionrequest.h"
#include "getobjectretentionrequest_p.h"
#include "getobjectretentionresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetObjectRetentionRequest
 * \brief The GetObjectRetentionRequest class provides an interface for S3 GetObjectRetention requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getObjectRetention
 */

/*!
 * Constructs a copy of \a other.
 */
GetObjectRetentionRequest::GetObjectRetentionRequest(const GetObjectRetentionRequest &other)
    : S3Request(new GetObjectRetentionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetObjectRetentionRequest object.
 */
GetObjectRetentionRequest::GetObjectRetentionRequest()
    : S3Request(new GetObjectRetentionRequestPrivate(S3Request::GetObjectRetentionAction, this))
{

}

/*!
 * \reimp
 */
bool GetObjectRetentionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetObjectRetentionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetObjectRetentionRequest::response(QNetworkReply * const reply) const
{
    return new GetObjectRetentionResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetObjectRetentionRequestPrivate
 * \brief The GetObjectRetentionRequestPrivate class provides private implementation for GetObjectRetentionRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetObjectRetentionRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetObjectRetentionRequestPrivate::GetObjectRetentionRequestPrivate(
    const S3Request::Action action, GetObjectRetentionRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetObjectRetentionRequest
 * class' copy constructor.
 */
GetObjectRetentionRequestPrivate::GetObjectRetentionRequestPrivate(
    const GetObjectRetentionRequestPrivate &other, GetObjectRetentionRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
