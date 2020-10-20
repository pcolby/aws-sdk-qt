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

#include "putobjectlegalholdrequest.h"
#include "putobjectlegalholdrequest_p.h"
#include "putobjectlegalholdresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutObjectLegalHoldRequest
 * \brief The PutObjectLegalHoldRequest class provides an interface for S3 PutObjectLegalHold requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putObjectLegalHold
 */

/*!
 * Constructs a copy of \a other.
 */
PutObjectLegalHoldRequest::PutObjectLegalHoldRequest(const PutObjectLegalHoldRequest &other)
    : S3Request(new PutObjectLegalHoldRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutObjectLegalHoldRequest object.
 */
PutObjectLegalHoldRequest::PutObjectLegalHoldRequest()
    : S3Request(new PutObjectLegalHoldRequestPrivate(S3Request::PutObjectLegalHoldAction, this))
{

}

/*!
 * \reimp
 */
bool PutObjectLegalHoldRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutObjectLegalHoldResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutObjectLegalHoldRequest::response(QNetworkReply * const reply) const
{
    return new PutObjectLegalHoldResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutObjectLegalHoldRequestPrivate
 * \brief The PutObjectLegalHoldRequestPrivate class provides private implementation for PutObjectLegalHoldRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutObjectLegalHoldRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutObjectLegalHoldRequestPrivate::PutObjectLegalHoldRequestPrivate(
    const S3Request::Action action, PutObjectLegalHoldRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutObjectLegalHoldRequest
 * class' copy constructor.
 */
PutObjectLegalHoldRequestPrivate::PutObjectLegalHoldRequestPrivate(
    const PutObjectLegalHoldRequestPrivate &other, PutObjectLegalHoldRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
