// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
