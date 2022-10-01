// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describejobflowsrequest.h"
#include "describejobflowsrequest_p.h"
#include "describejobflowsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::DescribeJobFlowsRequest
 * \brief The DescribeJobFlowsRequest class provides an interface for Emr DescribeJobFlows requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::describeJobFlows
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeJobFlowsRequest::DescribeJobFlowsRequest(const DescribeJobFlowsRequest &other)
    : EmrRequest(new DescribeJobFlowsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeJobFlowsRequest object.
 */
DescribeJobFlowsRequest::DescribeJobFlowsRequest()
    : EmrRequest(new DescribeJobFlowsRequestPrivate(EmrRequest::DescribeJobFlowsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeJobFlowsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeJobFlowsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeJobFlowsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeJobFlowsResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::DescribeJobFlowsRequestPrivate
 * \brief The DescribeJobFlowsRequestPrivate class provides private implementation for DescribeJobFlowsRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a DescribeJobFlowsRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
DescribeJobFlowsRequestPrivate::DescribeJobFlowsRequestPrivate(
    const EmrRequest::Action action, DescribeJobFlowsRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeJobFlowsRequest
 * class' copy constructor.
 */
DescribeJobFlowsRequestPrivate::DescribeJobFlowsRequestPrivate(
    const DescribeJobFlowsRequestPrivate &other, DescribeJobFlowsRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
