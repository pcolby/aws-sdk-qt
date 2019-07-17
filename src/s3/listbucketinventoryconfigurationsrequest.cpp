/*
    Copyright 2013-2019 Paul Colby

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

#include "listbucketinventoryconfigurationsrequest.h"
#include "listbucketinventoryconfigurationsrequest_p.h"
#include "listbucketinventoryconfigurationsresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::ListBucketInventoryConfigurationsRequest
 * \brief The ListBucketInventoryConfigurationsRequest class provides an interface for S3 ListBucketInventoryConfigurations requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::listBucketInventoryConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
ListBucketInventoryConfigurationsRequest::ListBucketInventoryConfigurationsRequest(const ListBucketInventoryConfigurationsRequest &other)
    : S3Request(new ListBucketInventoryConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBucketInventoryConfigurationsRequest object.
 */
ListBucketInventoryConfigurationsRequest::ListBucketInventoryConfigurationsRequest()
    : S3Request(new ListBucketInventoryConfigurationsRequestPrivate(S3Request::ListBucketInventoryConfigurationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBucketInventoryConfigurationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBucketInventoryConfigurationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBucketInventoryConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new ListBucketInventoryConfigurationsResponse(*this, reply);
}

/*!
 * \class QtAws::S3::ListBucketInventoryConfigurationsRequestPrivate
 * \brief The ListBucketInventoryConfigurationsRequestPrivate class provides private implementation for ListBucketInventoryConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a ListBucketInventoryConfigurationsRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
ListBucketInventoryConfigurationsRequestPrivate::ListBucketInventoryConfigurationsRequestPrivate(
    const S3Request::Action action, ListBucketInventoryConfigurationsRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBucketInventoryConfigurationsRequest
 * class' copy constructor.
 */
ListBucketInventoryConfigurationsRequestPrivate::ListBucketInventoryConfigurationsRequestPrivate(
    const ListBucketInventoryConfigurationsRequestPrivate &other, ListBucketInventoryConfigurationsRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
