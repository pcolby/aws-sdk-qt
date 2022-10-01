// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listusagelimitsrequest.h"
#include "listusagelimitsrequest_p.h"
#include "listusagelimitsresponse.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::ListUsageLimitsRequest
 * \brief The ListUsageLimitsRequest class provides an interface for RedshiftServerless ListUsageLimits requests.
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
 * \sa RedshiftServerlessClient::listUsageLimits
 */

/*!
 * Constructs a copy of \a other.
 */
ListUsageLimitsRequest::ListUsageLimitsRequest(const ListUsageLimitsRequest &other)
    : RedshiftServerlessRequest(new ListUsageLimitsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListUsageLimitsRequest object.
 */
ListUsageLimitsRequest::ListUsageLimitsRequest()
    : RedshiftServerlessRequest(new ListUsageLimitsRequestPrivate(RedshiftServerlessRequest::ListUsageLimitsAction, this))
{

}

/*!
 * \reimp
 */
bool ListUsageLimitsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListUsageLimitsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListUsageLimitsRequest::response(QNetworkReply * const reply) const
{
    return new ListUsageLimitsResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftServerless::ListUsageLimitsRequestPrivate
 * \brief The ListUsageLimitsRequestPrivate class provides private implementation for ListUsageLimitsRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a ListUsageLimitsRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
ListUsageLimitsRequestPrivate::ListUsageLimitsRequestPrivate(
    const RedshiftServerlessRequest::Action action, ListUsageLimitsRequest * const q)
    : RedshiftServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListUsageLimitsRequest
 * class' copy constructor.
 */
ListUsageLimitsRequestPrivate::ListUsageLimitsRequestPrivate(
    const ListUsageLimitsRequestPrivate &other, ListUsageLimitsRequest * const q)
    : RedshiftServerlessRequestPrivate(other, q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
