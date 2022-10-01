// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeagentrequest.h"
#include "describeagentrequest_p.h"
#include "describeagentresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeAgentRequest
 * \brief The DescribeAgentRequest class provides an interface for DataSync DescribeAgent requests.
 *
 * \inmodule QtAwsDataSync
 *
 *  <fullname>DataSync</fullname>
 * 
 *  DataSync is a managed data transfer service that makes it simpler for you to automate moving data between on-premises
 *  storage and Amazon Simple Storage Service (Amazon S3) or Amazon Elastic File System (Amazon EFS).
 * 
 *  </p
 * 
 *  This API interface reference for DataSync contains documentation for a programming interface that you can use to manage
 *
 * \sa DataSyncClient::describeAgent
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAgentRequest::DescribeAgentRequest(const DescribeAgentRequest &other)
    : DataSyncRequest(new DescribeAgentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAgentRequest object.
 */
DescribeAgentRequest::DescribeAgentRequest()
    : DataSyncRequest(new DescribeAgentRequestPrivate(DataSyncRequest::DescribeAgentAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAgentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAgentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAgentRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAgentResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::DescribeAgentRequestPrivate
 * \brief The DescribeAgentRequestPrivate class provides private implementation for DescribeAgentRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeAgentRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
DescribeAgentRequestPrivate::DescribeAgentRequestPrivate(
    const DataSyncRequest::Action action, DescribeAgentRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAgentRequest
 * class' copy constructor.
 */
DescribeAgentRequestPrivate::DescribeAgentRequestPrivate(
    const DescribeAgentRequestPrivate &other, DescribeAgentRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws
