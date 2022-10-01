// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describejobrequest.h"
#include "describejobrequest_p.h"
#include "describejobresponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::DescribeJobRequest
 * \brief The DescribeJobRequest class provides an interface for Snowball DescribeJob requests.
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
 * \sa SnowballClient::describeJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeJobRequest::DescribeJobRequest(const DescribeJobRequest &other)
    : SnowballRequest(new DescribeJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeJobRequest object.
 */
DescribeJobRequest::DescribeJobRequest()
    : SnowballRequest(new DescribeJobRequestPrivate(SnowballRequest::DescribeJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeJobResponse(*this, reply);
}

/*!
 * \class QtAws::Snowball::DescribeJobRequestPrivate
 * \brief The DescribeJobRequestPrivate class provides private implementation for DescribeJobRequest.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a DescribeJobRequestPrivate object for Snowball \a action,
 * with public implementation \a q.
 */
DescribeJobRequestPrivate::DescribeJobRequestPrivate(
    const SnowballRequest::Action action, DescribeJobRequest * const q)
    : SnowballRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeJobRequest
 * class' copy constructor.
 */
DescribeJobRequestPrivate::DescribeJobRequestPrivate(
    const DescribeJobRequestPrivate &other, DescribeJobRequest * const q)
    : SnowballRequestPrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
