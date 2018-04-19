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

#include "describeobjectrequest.h"
#include "describeobjectrequest_p.h"
#include "describeobjectresponse.h"
#include "mediastoredatarequest_p.h"

namespace QtAws {
namespace MediaStoreData {

/*!
 * \class QtAws::MediaStoreData::DescribeObjectRequest
 * \brief The DescribeObjectRequest class provides an interface for MediaStoreData DescribeObject requests.
 *
 * \inmodule QtAwsMediaStoreData
 *
 *  An AWS Elemental MediaStore asset is an object, similar to an object in the Amazon S3 service. Objects are the
 *  fundamental entities that are stored in AWS Elemental
 *
 * \sa MediaStoreDataClient::describeObject
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeObjectRequest::DescribeObjectRequest(const DescribeObjectRequest &other)
    : MediaStoreDataRequest(new DescribeObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeObjectRequest object.
 */
DescribeObjectRequest::DescribeObjectRequest()
    : MediaStoreDataRequest(new DescribeObjectRequestPrivate(MediaStoreDataRequest::DescribeObjectAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeObjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeObjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeObjectRequest::response(QNetworkReply * const reply) const
{
    return new DescribeObjectResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStoreData::DescribeObjectRequestPrivate
 * \brief The DescribeObjectRequestPrivate class provides private implementation for DescribeObjectRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStoreData
 */

/*!
 *
 * Constructs a DescribeObjectRequestPrivate object for MediaStoreData \a action with,
 * public implementation \a q.
 */
DescribeObjectRequestPrivate::DescribeObjectRequestPrivate(
    const MediaStoreDataRequest::Action action, DescribeObjectRequest * const q)
    : MediaStoreDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeObjectRequest
 * class' copy constructor.
 */
DescribeObjectRequestPrivate::DescribeObjectRequestPrivate(
    const DescribeObjectRequestPrivate &other, DescribeObjectRequest * const q)
    : MediaStoreDataRequestPrivate(other, q)
{

}

} // namespace MediaStoreData
} // namespace QtAws
