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

#include "describeaddressesrequest.h"
#include "describeaddressesrequest_p.h"
#include "describeaddressesresponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::DescribeAddressesRequest
 * \brief The DescribeAddressesRequest class provides an interface for Snowball DescribeAddresses requests.
 *
 * \inmodule QtAwsSnowball
 *
 *  AWS Snowball is a petabyte-scale data transport solution that uses secure devices to transfer large amounts of data
 *  between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The Snowball commands described
 *  here provide access to the same functionality that is available in the AWS Snowball Management Console, which enables
 *  you to create and manage jobs for Snowball. To transfer data locally with a Snowball device, you'll need to use the
 *  Snowball client or the Amazon S3 API adapter for Snowball. For more information, see the <a
 *  href="http://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
 *
 * \sa SnowballClient::describeAddresses
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAddressesRequest::DescribeAddressesRequest(const DescribeAddressesRequest &other)
    : SnowballRequest(new DescribeAddressesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAddressesRequest object.
 */
DescribeAddressesRequest::DescribeAddressesRequest()
    : SnowballRequest(new DescribeAddressesRequestPrivate(SnowballRequest::DescribeAddressesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAddressesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAddressesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAddressesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAddressesResponse(*this, reply);
}

/*!
 * \class QtAws::Snowball::DescribeAddressesRequestPrivate
 * \brief The DescribeAddressesRequestPrivate class provides private implementation for DescribeAddressesRequest.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a DescribeAddressesRequestPrivate object for Snowball \a action,
 * with public implementation \a q.
 */
DescribeAddressesRequestPrivate::DescribeAddressesRequestPrivate(
    const SnowballRequest::Action action, DescribeAddressesRequest * const q)
    : SnowballRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAddressesRequest
 * class' copy constructor.
 */
DescribeAddressesRequestPrivate::DescribeAddressesRequestPrivate(
    const DescribeAddressesRequestPrivate &other, DescribeAddressesRequest * const q)
    : SnowballRequestPrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
