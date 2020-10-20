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

#include "listpartsrequest.h"
#include "listpartsrequest_p.h"
#include "listpartsresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::ListPartsRequest
 * \brief The ListPartsRequest class provides an interface for S3 ListParts requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::listParts
 */

/*!
 * Constructs a copy of \a other.
 */
ListPartsRequest::ListPartsRequest(const ListPartsRequest &other)
    : S3Request(new ListPartsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPartsRequest object.
 */
ListPartsRequest::ListPartsRequest()
    : S3Request(new ListPartsRequestPrivate(S3Request::ListPartsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPartsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPartsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPartsRequest::response(QNetworkReply * const reply) const
{
    return new ListPartsResponse(*this, reply);
}

/*!
 * \class QtAws::S3::ListPartsRequestPrivate
 * \brief The ListPartsRequestPrivate class provides private implementation for ListPartsRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a ListPartsRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
ListPartsRequestPrivate::ListPartsRequestPrivate(
    const S3Request::Action action, ListPartsRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPartsRequest
 * class' copy constructor.
 */
ListPartsRequestPrivate::ListPartsRequestPrivate(
    const ListPartsRequestPrivate &other, ListPartsRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
