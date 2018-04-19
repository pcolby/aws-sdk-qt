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

#include "describebackupsrequest.h"
#include "describebackupsrequest_p.h"
#include "describebackupsresponse.h"
#include "cloudhsmv2request_p.h"

namespace QtAws {
namespace CloudHSMV2 {

/*!
 * \class QtAws::CloudHSMV2::DescribeBackupsRequest
 * \brief The DescribeBackupsRequest class provides an interface for CloudHSMV2 DescribeBackups requests.
 *
 * \inmodule QtAwsCloudHSMV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHSMV2Client::describeBackups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeBackupsRequest::DescribeBackupsRequest(const DescribeBackupsRequest &other)
    : CloudHSMV2Request(new DescribeBackupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeBackupsRequest object.
 */
DescribeBackupsRequest::DescribeBackupsRequest()
    : CloudHSMV2Request(new DescribeBackupsRequestPrivate(CloudHSMV2Request::DescribeBackupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeBackupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeBackupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeBackupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBackupsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudHSMV2::DescribeBackupsRequestPrivate
 * \brief The DescribeBackupsRequestPrivate class provides private implementation for DescribeBackupsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHSMV2
 */

/*!
 * Constructs a DescribeBackupsRequestPrivate object for CloudHSMV2 \a action,
 * with public implementation \a q.
 */
DescribeBackupsRequestPrivate::DescribeBackupsRequestPrivate(
    const CloudHSMV2Request::Action action, DescribeBackupsRequest * const q)
    : CloudHSMV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeBackupsRequest
 * class' copy constructor.
 */
DescribeBackupsRequestPrivate::DescribeBackupsRequestPrivate(
    const DescribeBackupsRequestPrivate &other, DescribeBackupsRequest * const q)
    : CloudHSMV2RequestPrivate(other, q)
{

}

} // namespace CloudHSMV2
} // namespace QtAws
