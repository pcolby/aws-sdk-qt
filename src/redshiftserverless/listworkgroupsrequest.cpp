// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworkgroupsrequest.h"
#include "listworkgroupsrequest_p.h"
#include "listworkgroupsresponse.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::ListWorkgroupsRequest
 * \brief The ListWorkgroupsRequest class provides an interface for RedshiftServerless ListWorkgroups requests.
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
 * \sa RedshiftServerlessClient::listWorkgroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListWorkgroupsRequest::ListWorkgroupsRequest(const ListWorkgroupsRequest &other)
    : RedshiftServerlessRequest(new ListWorkgroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWorkgroupsRequest object.
 */
ListWorkgroupsRequest::ListWorkgroupsRequest()
    : RedshiftServerlessRequest(new ListWorkgroupsRequestPrivate(RedshiftServerlessRequest::ListWorkgroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListWorkgroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWorkgroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWorkgroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListWorkgroupsResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftServerless::ListWorkgroupsRequestPrivate
 * \brief The ListWorkgroupsRequestPrivate class provides private implementation for ListWorkgroupsRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a ListWorkgroupsRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
ListWorkgroupsRequestPrivate::ListWorkgroupsRequestPrivate(
    const RedshiftServerlessRequest::Action action, ListWorkgroupsRequest * const q)
    : RedshiftServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWorkgroupsRequest
 * class' copy constructor.
 */
ListWorkgroupsRequestPrivate::ListWorkgroupsRequestPrivate(
    const ListWorkgroupsRequestPrivate &other, ListWorkgroupsRequest * const q)
    : RedshiftServerlessRequestPrivate(other, q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
