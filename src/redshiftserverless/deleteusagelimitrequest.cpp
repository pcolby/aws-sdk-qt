// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteusagelimitrequest.h"
#include "deleteusagelimitrequest_p.h"
#include "deleteusagelimitresponse.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::DeleteUsageLimitRequest
 * \brief The DeleteUsageLimitRequest class provides an interface for RedshiftServerless DeleteUsageLimit requests.
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
 * \sa RedshiftServerlessClient::deleteUsageLimit
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteUsageLimitRequest::DeleteUsageLimitRequest(const DeleteUsageLimitRequest &other)
    : RedshiftServerlessRequest(new DeleteUsageLimitRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteUsageLimitRequest object.
 */
DeleteUsageLimitRequest::DeleteUsageLimitRequest()
    : RedshiftServerlessRequest(new DeleteUsageLimitRequestPrivate(RedshiftServerlessRequest::DeleteUsageLimitAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteUsageLimitRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteUsageLimitResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteUsageLimitRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUsageLimitResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftServerless::DeleteUsageLimitRequestPrivate
 * \brief The DeleteUsageLimitRequestPrivate class provides private implementation for DeleteUsageLimitRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a DeleteUsageLimitRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
DeleteUsageLimitRequestPrivate::DeleteUsageLimitRequestPrivate(
    const RedshiftServerlessRequest::Action action, DeleteUsageLimitRequest * const q)
    : RedshiftServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteUsageLimitRequest
 * class' copy constructor.
 */
DeleteUsageLimitRequestPrivate::DeleteUsageLimitRequestPrivate(
    const DeleteUsageLimitRequestPrivate &other, DeleteUsageLimitRequest * const q)
    : RedshiftServerlessRequestPrivate(other, q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
