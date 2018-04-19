/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putobjectaclrequest.h"
#include "putobjectaclrequest_p.h"
#include "putobjectaclresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutObjectAclRequest
 * \brief The PutObjectAclRequest class provides an interface for S3 PutObjectAcl requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putObjectAcl
 */

/*!
 * Constructs a copy of \a other.
 */
PutObjectAclRequest::PutObjectAclRequest(const PutObjectAclRequest &other)
    : S3Request(new PutObjectAclRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutObjectAclRequest object.
 */
PutObjectAclRequest::PutObjectAclRequest()
    : S3Request(new PutObjectAclRequestPrivate(S3Request::PutObjectAclAction, this))
{

}

/*!
 * \reimp
 */
bool PutObjectAclRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutObjectAclResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutObjectAclRequest::response(QNetworkReply * const reply) const
{
    return new PutObjectAclResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutObjectAclRequestPrivate
 * \brief The PutObjectAclRequestPrivate class provides private implementation for PutObjectAclRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutObjectAclRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutObjectAclRequestPrivate::PutObjectAclRequestPrivate(
    const S3Request::Action action, PutObjectAclRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutObjectAclRequest
 * class' copy constructor.
 */
PutObjectAclRequestPrivate::PutObjectAclRequestPrivate(
    const PutObjectAclRequestPrivate &other, PutObjectAclRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
