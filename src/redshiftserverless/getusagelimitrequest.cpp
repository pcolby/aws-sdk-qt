// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getusagelimitrequest.h"
#include "getusagelimitrequest_p.h"
#include "getusagelimitresponse.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::GetUsageLimitRequest
 * \brief The GetUsageLimitRequest class provides an interface for RedshiftServerless GetUsageLimit requests.
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
 * \sa RedshiftServerlessClient::getUsageLimit
 */

/*!
 * Constructs a copy of \a other.
 */
GetUsageLimitRequest::GetUsageLimitRequest(const GetUsageLimitRequest &other)
    : RedshiftServerlessRequest(new GetUsageLimitRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUsageLimitRequest object.
 */
GetUsageLimitRequest::GetUsageLimitRequest()
    : RedshiftServerlessRequest(new GetUsageLimitRequestPrivate(RedshiftServerlessRequest::GetUsageLimitAction, this))
{

}

/*!
 * \reimp
 */
bool GetUsageLimitRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUsageLimitResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUsageLimitRequest::response(QNetworkReply * const reply) const
{
    return new GetUsageLimitResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftServerless::GetUsageLimitRequestPrivate
 * \brief The GetUsageLimitRequestPrivate class provides private implementation for GetUsageLimitRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a GetUsageLimitRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
GetUsageLimitRequestPrivate::GetUsageLimitRequestPrivate(
    const RedshiftServerlessRequest::Action action, GetUsageLimitRequest * const q)
    : RedshiftServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUsageLimitRequest
 * class' copy constructor.
 */
GetUsageLimitRequestPrivate::GetUsageLimitRequestPrivate(
    const GetUsageLimitRequestPrivate &other, GetUsageLimitRequest * const q)
    : RedshiftServerlessRequestPrivate(other, q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
