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

#include "getobjectaclrequest.h"
#include "getobjectaclrequest_p.h"
#include "getobjectaclresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetObjectAclRequest
 * \brief The GetObjectAclRequest class provides an interface for S3 GetObjectAcl requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getObjectAcl
 */

/*!
 * Constructs a copy of \a other.
 */
GetObjectAclRequest::GetObjectAclRequest(const GetObjectAclRequest &other)
    : S3Request(new GetObjectAclRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetObjectAclRequest object.
 */
GetObjectAclRequest::GetObjectAclRequest()
    : S3Request(new GetObjectAclRequestPrivate(S3Request::GetObjectAclAction, this))
{

}

/*!
 * \reimp
 */
bool GetObjectAclRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetObjectAclResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetObjectAclRequest::response(QNetworkReply * const reply) const
{
    return new GetObjectAclResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetObjectAclRequestPrivate
 * \brief The GetObjectAclRequestPrivate class provides private implementation for GetObjectAclRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetObjectAclRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetObjectAclRequestPrivate::GetObjectAclRequestPrivate(
    const S3Request::Action action, GetObjectAclRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetObjectAclRequest
 * class' copy constructor.
 */
GetObjectAclRequestPrivate::GetObjectAclRequestPrivate(
    const GetObjectAclRequestPrivate &other, GetObjectAclRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
