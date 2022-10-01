// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "convertrecoverypointtosnapshotrequest.h"
#include "convertrecoverypointtosnapshotrequest_p.h"
#include "convertrecoverypointtosnapshotresponse.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::ConvertRecoveryPointToSnapshotRequest
 * \brief The ConvertRecoveryPointToSnapshotRequest class provides an interface for RedshiftServerless ConvertRecoveryPointToSnapshot requests.
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
 * \sa RedshiftServerlessClient::convertRecoveryPointToSnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
ConvertRecoveryPointToSnapshotRequest::ConvertRecoveryPointToSnapshotRequest(const ConvertRecoveryPointToSnapshotRequest &other)
    : RedshiftServerlessRequest(new ConvertRecoveryPointToSnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ConvertRecoveryPointToSnapshotRequest object.
 */
ConvertRecoveryPointToSnapshotRequest::ConvertRecoveryPointToSnapshotRequest()
    : RedshiftServerlessRequest(new ConvertRecoveryPointToSnapshotRequestPrivate(RedshiftServerlessRequest::ConvertRecoveryPointToSnapshotAction, this))
{

}

/*!
 * \reimp
 */
bool ConvertRecoveryPointToSnapshotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ConvertRecoveryPointToSnapshotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ConvertRecoveryPointToSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new ConvertRecoveryPointToSnapshotResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftServerless::ConvertRecoveryPointToSnapshotRequestPrivate
 * \brief The ConvertRecoveryPointToSnapshotRequestPrivate class provides private implementation for ConvertRecoveryPointToSnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a ConvertRecoveryPointToSnapshotRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
ConvertRecoveryPointToSnapshotRequestPrivate::ConvertRecoveryPointToSnapshotRequestPrivate(
    const RedshiftServerlessRequest::Action action, ConvertRecoveryPointToSnapshotRequest * const q)
    : RedshiftServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ConvertRecoveryPointToSnapshotRequest
 * class' copy constructor.
 */
ConvertRecoveryPointToSnapshotRequestPrivate::ConvertRecoveryPointToSnapshotRequestPrivate(
    const ConvertRecoveryPointToSnapshotRequestPrivate &other, ConvertRecoveryPointToSnapshotRequest * const q)
    : RedshiftServerlessRequestPrivate(other, q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
