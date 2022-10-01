// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsnapshotsrequest.h"
#include "listsnapshotsrequest_p.h"
#include "listsnapshotsresponse.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::ListSnapshotsRequest
 * \brief The ListSnapshotsRequest class provides an interface for RedshiftServerless ListSnapshots requests.
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
 * \sa RedshiftServerlessClient::listSnapshots
 */

/*!
 * Constructs a copy of \a other.
 */
ListSnapshotsRequest::ListSnapshotsRequest(const ListSnapshotsRequest &other)
    : RedshiftServerlessRequest(new ListSnapshotsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSnapshotsRequest object.
 */
ListSnapshotsRequest::ListSnapshotsRequest()
    : RedshiftServerlessRequest(new ListSnapshotsRequestPrivate(RedshiftServerlessRequest::ListSnapshotsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSnapshotsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSnapshotsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSnapshotsRequest::response(QNetworkReply * const reply) const
{
    return new ListSnapshotsResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftServerless::ListSnapshotsRequestPrivate
 * \brief The ListSnapshotsRequestPrivate class provides private implementation for ListSnapshotsRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a ListSnapshotsRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
ListSnapshotsRequestPrivate::ListSnapshotsRequestPrivate(
    const RedshiftServerlessRequest::Action action, ListSnapshotsRequest * const q)
    : RedshiftServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSnapshotsRequest
 * class' copy constructor.
 */
ListSnapshotsRequestPrivate::ListSnapshotsRequestPrivate(
    const ListSnapshotsRequestPrivate &other, ListSnapshotsRequest * const q)
    : RedshiftServerlessRequestPrivate(other, q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
