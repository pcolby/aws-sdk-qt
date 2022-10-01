// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsnapshotrequest.h"
#include "getsnapshotrequest_p.h"
#include "getsnapshotresponse.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::GetSnapshotRequest
 * \brief The GetSnapshotRequest class provides an interface for RedshiftServerless GetSnapshot requests.
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
 * \sa RedshiftServerlessClient::getSnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
GetSnapshotRequest::GetSnapshotRequest(const GetSnapshotRequest &other)
    : RedshiftServerlessRequest(new GetSnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSnapshotRequest object.
 */
GetSnapshotRequest::GetSnapshotRequest()
    : RedshiftServerlessRequest(new GetSnapshotRequestPrivate(RedshiftServerlessRequest::GetSnapshotAction, this))
{

}

/*!
 * \reimp
 */
bool GetSnapshotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSnapshotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new GetSnapshotResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftServerless::GetSnapshotRequestPrivate
 * \brief The GetSnapshotRequestPrivate class provides private implementation for GetSnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a GetSnapshotRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
GetSnapshotRequestPrivate::GetSnapshotRequestPrivate(
    const RedshiftServerlessRequest::Action action, GetSnapshotRequest * const q)
    : RedshiftServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSnapshotRequest
 * class' copy constructor.
 */
GetSnapshotRequestPrivate::GetSnapshotRequestPrivate(
    const GetSnapshotRequestPrivate &other, GetSnapshotRequest * const q)
    : RedshiftServerlessRequestPrivate(other, q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
