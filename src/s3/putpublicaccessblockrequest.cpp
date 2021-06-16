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

#include "putpublicaccessblockrequest.h"
#include "putpublicaccessblockrequest_p.h"
#include "putpublicaccessblockresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutPublicAccessBlockRequest
 * \brief The PutPublicAccessBlockRequest class provides an interface for S3 PutPublicAccessBlock requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putPublicAccessBlock
 */

/*!
 * Constructs a copy of \a other.
 */
PutPublicAccessBlockRequest::PutPublicAccessBlockRequest(const PutPublicAccessBlockRequest &other)
    : S3Request(new PutPublicAccessBlockRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutPublicAccessBlockRequest object.
 */
PutPublicAccessBlockRequest::PutPublicAccessBlockRequest()
    : S3Request(new PutPublicAccessBlockRequestPrivate(S3Request::PutPublicAccessBlockAction, this))
{

}

/*!
 * \reimp
 */
bool PutPublicAccessBlockRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutPublicAccessBlockResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutPublicAccessBlockRequest::response(QNetworkReply * const reply) const
{
    return new PutPublicAccessBlockResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutPublicAccessBlockRequestPrivate
 * \brief The PutPublicAccessBlockRequestPrivate class provides private implementation for PutPublicAccessBlockRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutPublicAccessBlockRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutPublicAccessBlockRequestPrivate::PutPublicAccessBlockRequestPrivate(
    const S3Request::Action action, PutPublicAccessBlockRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutPublicAccessBlockRequest
 * class' copy constructor.
 */
PutPublicAccessBlockRequestPrivate::PutPublicAccessBlockRequestPrivate(
    const PutPublicAccessBlockRequestPrivate &other, PutPublicAccessBlockRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
