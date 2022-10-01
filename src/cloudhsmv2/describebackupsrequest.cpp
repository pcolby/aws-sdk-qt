// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describebackupsrequest.h"
#include "describebackupsrequest_p.h"
#include "describebackupsresponse.h"
#include "cloudhsmv2request_p.h"

namespace QtAws {
namespace CloudHsmV2 {

/*!
 * \class QtAws::CloudHsmV2::DescribeBackupsRequest
 * \brief The DescribeBackupsRequest class provides an interface for CloudHsmV2 DescribeBackups requests.
 *
 * \inmodule QtAwsCloudHsmV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHsmV2Client::describeBackups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeBackupsRequest::DescribeBackupsRequest(const DescribeBackupsRequest &other)
    : CloudHsmV2Request(new DescribeBackupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeBackupsRequest object.
 */
DescribeBackupsRequest::DescribeBackupsRequest()
    : CloudHsmV2Request(new DescribeBackupsRequestPrivate(CloudHsmV2Request::DescribeBackupsAction, this))
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
 * \class QtAws::CloudHsmV2::DescribeBackupsRequestPrivate
 * \brief The DescribeBackupsRequestPrivate class provides private implementation for DescribeBackupsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHsmV2
 */

/*!
 * Constructs a DescribeBackupsRequestPrivate object for CloudHsmV2 \a action,
 * with public implementation \a q.
 */
DescribeBackupsRequestPrivate::DescribeBackupsRequestPrivate(
    const CloudHsmV2Request::Action action, DescribeBackupsRequest * const q)
    : CloudHsmV2RequestPrivate(action, q)
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
    : CloudHsmV2RequestPrivate(other, q)
{

}

} // namespace CloudHsmV2
} // namespace QtAws
