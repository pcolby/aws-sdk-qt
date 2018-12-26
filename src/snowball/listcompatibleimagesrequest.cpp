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

#include "listcompatibleimagesrequest.h"
#include "listcompatibleimagesrequest_p.h"
#include "listcompatibleimagesresponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::ListCompatibleImagesRequest
 * \brief The ListCompatibleImagesRequest class provides an interface for Snowball ListCompatibleImages requests.
 *
 * \inmodule QtAwsSnowball
 *
 *  AWS Snowball is a petabyte-scale data transport solution that uses secure devices to transfer large amounts of data
 *  between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The commands described here provide
 *  access to the same functionality that is available in the AWS Snowball Management Console, which enables you to create
 *  and manage jobs for Snowball and Snowball Edge devices. To transfer data locally with a device, you'll need to use the
 *  Snowball client or the Amazon S3 API adapter for
 *
 * \sa SnowballClient::listCompatibleImages
 */

/*!
 * Constructs a copy of \a other.
 */
ListCompatibleImagesRequest::ListCompatibleImagesRequest(const ListCompatibleImagesRequest &other)
    : SnowballRequest(new ListCompatibleImagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCompatibleImagesRequest object.
 */
ListCompatibleImagesRequest::ListCompatibleImagesRequest()
    : SnowballRequest(new ListCompatibleImagesRequestPrivate(SnowballRequest::ListCompatibleImagesAction, this))
{

}

/*!
 * \reimp
 */
bool ListCompatibleImagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCompatibleImagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCompatibleImagesRequest::response(QNetworkReply * const reply) const
{
    return new ListCompatibleImagesResponse(*this, reply);
}

/*!
 * \class QtAws::Snowball::ListCompatibleImagesRequestPrivate
 * \brief The ListCompatibleImagesRequestPrivate class provides private implementation for ListCompatibleImagesRequest.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a ListCompatibleImagesRequestPrivate object for Snowball \a action,
 * with public implementation \a q.
 */
ListCompatibleImagesRequestPrivate::ListCompatibleImagesRequestPrivate(
    const SnowballRequest::Action action, ListCompatibleImagesRequest * const q)
    : SnowballRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCompatibleImagesRequest
 * class' copy constructor.
 */
ListCompatibleImagesRequestPrivate::ListCompatibleImagesRequestPrivate(
    const ListCompatibleImagesRequestPrivate &other, ListCompatibleImagesRequest * const q)
    : SnowballRequestPrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
