// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesnapshotrequest.h"
#include "updatesnapshotrequest_p.h"
#include "updatesnapshotresponse.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::UpdateSnapshotRequest
 * \brief The UpdateSnapshotRequest class provides an interface for RedshiftServerless UpdateSnapshot requests.
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
 * \sa RedshiftServerlessClient::updateSnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSnapshotRequest::UpdateSnapshotRequest(const UpdateSnapshotRequest &other)
    : RedshiftServerlessRequest(new UpdateSnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSnapshotRequest object.
 */
UpdateSnapshotRequest::UpdateSnapshotRequest()
    : RedshiftServerlessRequest(new UpdateSnapshotRequestPrivate(RedshiftServerlessRequest::UpdateSnapshotAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSnapshotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSnapshotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSnapshotResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftServerless::UpdateSnapshotRequestPrivate
 * \brief The UpdateSnapshotRequestPrivate class provides private implementation for UpdateSnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a UpdateSnapshotRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
UpdateSnapshotRequestPrivate::UpdateSnapshotRequestPrivate(
    const RedshiftServerlessRequest::Action action, UpdateSnapshotRequest * const q)
    : RedshiftServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSnapshotRequest
 * class' copy constructor.
 */
UpdateSnapshotRequestPrivate::UpdateSnapshotRequestPrivate(
    const UpdateSnapshotRequestPrivate &other, UpdateSnapshotRequest * const q)
    : RedshiftServerlessRequestPrivate(other, q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
