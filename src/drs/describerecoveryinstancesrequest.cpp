// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describerecoveryinstancesrequest.h"
#include "describerecoveryinstancesrequest_p.h"
#include "describerecoveryinstancesresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::DescribeRecoveryInstancesRequest
 * \brief The DescribeRecoveryInstancesRequest class provides an interface for Drs DescribeRecoveryInstances requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::describeRecoveryInstances
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRecoveryInstancesRequest::DescribeRecoveryInstancesRequest(const DescribeRecoveryInstancesRequest &other)
    : DrsRequest(new DescribeRecoveryInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRecoveryInstancesRequest object.
 */
DescribeRecoveryInstancesRequest::DescribeRecoveryInstancesRequest()
    : DrsRequest(new DescribeRecoveryInstancesRequestPrivate(DrsRequest::DescribeRecoveryInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRecoveryInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRecoveryInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRecoveryInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRecoveryInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::Drs::DescribeRecoveryInstancesRequestPrivate
 * \brief The DescribeRecoveryInstancesRequestPrivate class provides private implementation for DescribeRecoveryInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a DescribeRecoveryInstancesRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
DescribeRecoveryInstancesRequestPrivate::DescribeRecoveryInstancesRequestPrivate(
    const DrsRequest::Action action, DescribeRecoveryInstancesRequest * const q)
    : DrsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRecoveryInstancesRequest
 * class' copy constructor.
 */
DescribeRecoveryInstancesRequestPrivate::DescribeRecoveryInstancesRequestPrivate(
    const DescribeRecoveryInstancesRequestPrivate &other, DescribeRecoveryInstancesRequest * const q)
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
