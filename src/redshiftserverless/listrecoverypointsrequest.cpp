// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrecoverypointsrequest.h"
#include "listrecoverypointsrequest_p.h"
#include "listrecoverypointsresponse.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::ListRecoveryPointsRequest
 * \brief The ListRecoveryPointsRequest class provides an interface for RedshiftServerless ListRecoveryPoints requests.
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
 * \sa RedshiftServerlessClient::listRecoveryPoints
 */

/*!
 * Constructs a copy of \a other.
 */
ListRecoveryPointsRequest::ListRecoveryPointsRequest(const ListRecoveryPointsRequest &other)
    : RedshiftServerlessRequest(new ListRecoveryPointsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRecoveryPointsRequest object.
 */
ListRecoveryPointsRequest::ListRecoveryPointsRequest()
    : RedshiftServerlessRequest(new ListRecoveryPointsRequestPrivate(RedshiftServerlessRequest::ListRecoveryPointsAction, this))
{

}

/*!
 * \reimp
 */
bool ListRecoveryPointsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRecoveryPointsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRecoveryPointsRequest::response(QNetworkReply * const reply) const
{
    return new ListRecoveryPointsResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftServerless::ListRecoveryPointsRequestPrivate
 * \brief The ListRecoveryPointsRequestPrivate class provides private implementation for ListRecoveryPointsRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a ListRecoveryPointsRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
ListRecoveryPointsRequestPrivate::ListRecoveryPointsRequestPrivate(
    const RedshiftServerlessRequest::Action action, ListRecoveryPointsRequest * const q)
    : RedshiftServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRecoveryPointsRequest
 * class' copy constructor.
 */
ListRecoveryPointsRequestPrivate::ListRecoveryPointsRequestPrivate(
    const ListRecoveryPointsRequestPrivate &other, ListRecoveryPointsRequest * const q)
    : RedshiftServerlessRequestPrivate(other, q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
