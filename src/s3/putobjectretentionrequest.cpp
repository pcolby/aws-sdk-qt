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

#include "putobjectretentionrequest.h"
#include "putobjectretentionrequest_p.h"
#include "putobjectretentionresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutObjectRetentionRequest
 * \brief The PutObjectRetentionRequest class provides an interface for S3 PutObjectRetention requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putObjectRetention
 */

/*!
 * Constructs a copy of \a other.
 */
PutObjectRetentionRequest::PutObjectRetentionRequest(const PutObjectRetentionRequest &other)
    : S3Request(new PutObjectRetentionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutObjectRetentionRequest object.
 */
PutObjectRetentionRequest::PutObjectRetentionRequest()
    : S3Request(new PutObjectRetentionRequestPrivate(S3Request::PutObjectRetentionAction, this))
{

}

/*!
 * \reimp
 */
bool PutObjectRetentionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutObjectRetentionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutObjectRetentionRequest::response(QNetworkReply * const reply) const
{
    return new PutObjectRetentionResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutObjectRetentionRequestPrivate
 * \brief The PutObjectRetentionRequestPrivate class provides private implementation for PutObjectRetentionRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutObjectRetentionRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutObjectRetentionRequestPrivate::PutObjectRetentionRequestPrivate(
    const S3Request::Action action, PutObjectRetentionRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutObjectRetentionRequest
 * class' copy constructor.
 */
PutObjectRetentionRequestPrivate::PutObjectRetentionRequestPrivate(
    const PutObjectRetentionRequestPrivate &other, PutObjectRetentionRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
