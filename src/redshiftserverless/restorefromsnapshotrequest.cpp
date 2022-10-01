// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "restorefromsnapshotrequest.h"
#include "restorefromsnapshotrequest_p.h"
#include "restorefromsnapshotresponse.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::RestoreFromSnapshotRequest
 * \brief The RestoreFromSnapshotRequest class provides an interface for RedshiftServerless RestoreFromSnapshot requests.
 *
 * \inmodule QtAwsRedshiftServerless
 *
 *  This is an interface reference for Amazon Redshift Serverless. It contains documentation for one of the programming or
 *  command line interfaces you can use to manage Amazon Redshift Serverless.
 * 
 *  </p
 * 
 *  Amazon Redshift Serverless automatically provisions data warehouse capacity and intelligently scales the underlying
 *  resources based on workload demands. Amazon Redshift Serverless adjusts capacity in seconds to deliver consistently high
 *  performance and simplified operations for even the most demanding and volatile workloads. Amazon Redshift Serverless
 *  lets you focus on using your data to acquire new insights for your business and customers.
 * 
 *  </p
 * 
 *  To learn more about Amazon Redshift Serverless, see <a
 *  href="https://docs.aws.amazon.com/redshift/latest/mgmt/serverless-whatis.html">What is Amazon Redshift Serverless</a>.
 *
 * \sa RedshiftServerlessClient::restoreFromSnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
RestoreFromSnapshotRequest::RestoreFromSnapshotRequest(const RestoreFromSnapshotRequest &other)
    : RedshiftServerlessRequest(new RestoreFromSnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RestoreFromSnapshotRequest object.
 */
RestoreFromSnapshotRequest::RestoreFromSnapshotRequest()
    : RedshiftServerlessRequest(new RestoreFromSnapshotRequestPrivate(RedshiftServerlessRequest::RestoreFromSnapshotAction, this))
{

}

/*!
 * \reimp
 */
bool RestoreFromSnapshotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RestoreFromSnapshotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RestoreFromSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new RestoreFromSnapshotResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftServerless::RestoreFromSnapshotRequestPrivate
 * \brief The RestoreFromSnapshotRequestPrivate class provides private implementation for RestoreFromSnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a RestoreFromSnapshotRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
RestoreFromSnapshotRequestPrivate::RestoreFromSnapshotRequestPrivate(
    const RedshiftServerlessRequest::Action action, RestoreFromSnapshotRequest * const q)
    : RedshiftServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RestoreFromSnapshotRequest
 * class' copy constructor.
 */
RestoreFromSnapshotRequestPrivate::RestoreFromSnapshotRequestPrivate(
    const RestoreFromSnapshotRequestPrivate &other, RestoreFromSnapshotRequest * const q)
    : RedshiftServerlessRequestPrivate(other, q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
