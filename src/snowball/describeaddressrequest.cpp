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

#include "describeaddressrequest.h"
#include "describeaddressrequest_p.h"
#include "describeaddressresponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::DescribeAddressRequest
 * \brief The DescribeAddressRequest class provides an interface for Snowball DescribeAddress requests.
 *
 * \inmodule QtAwsSnowball
 *
 *  The Amazon Web Services Snow Family provides a petabyte-scale data transport solution that uses secure devices to
 *  transfer large amounts of data between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The
 *  Snow Family commands described here provide access to the same functionality that is available in the Amazon Web
 *  Services Snow Family Management Console, which enables you to create and manage jobs for a Snow Family device. To
 *  transfer data locally with a Snow Family device, you'll need to use the Snowball Edge client or the Amazon S3 API
 *  Interface for Snowball or OpsHub for Snow Family. For more information, see the <a
 *  href="https://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
 *
 * \sa SnowballClient::describeAddress
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAddressRequest::DescribeAddressRequest(const DescribeAddressRequest &other)
    : SnowballRequest(new DescribeAddressRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAddressRequest object.
 */
DescribeAddressRequest::DescribeAddressRequest()
    : SnowballRequest(new DescribeAddressRequestPrivate(SnowballRequest::DescribeAddressAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAddressRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAddressResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAddressRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAddressResponse(*this, reply);
}

/*!
 * \class QtAws::Snowball::DescribeAddressRequestPrivate
 * \brief The DescribeAddressRequestPrivate class provides private implementation for DescribeAddressRequest.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a DescribeAddressRequestPrivate object for Snowball \a action,
 * with public implementation \a q.
 */
DescribeAddressRequestPrivate::DescribeAddressRequestPrivate(
    const SnowballRequest::Action action, DescribeAddressRequest * const q)
    : SnowballRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAddressRequest
 * class' copy constructor.
 */
DescribeAddressRequestPrivate::DescribeAddressRequestPrivate(
    const DescribeAddressRequestPrivate &other, DescribeAddressRequest * const q)
    : SnowballRequestPrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
