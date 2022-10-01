// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateusagelimitrequest.h"
#include "updateusagelimitrequest_p.h"
#include "updateusagelimitresponse.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::UpdateUsageLimitRequest
 * \brief The UpdateUsageLimitRequest class provides an interface for RedshiftServerless UpdateUsageLimit requests.
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
 * \sa RedshiftServerlessClient::updateUsageLimit
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateUsageLimitRequest::UpdateUsageLimitRequest(const UpdateUsageLimitRequest &other)
    : RedshiftServerlessRequest(new UpdateUsageLimitRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateUsageLimitRequest object.
 */
UpdateUsageLimitRequest::UpdateUsageLimitRequest()
    : RedshiftServerlessRequest(new UpdateUsageLimitRequestPrivate(RedshiftServerlessRequest::UpdateUsageLimitAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateUsageLimitRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateUsageLimitResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateUsageLimitRequest::response(QNetworkReply * const reply) const
{
    return new UpdateUsageLimitResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftServerless::UpdateUsageLimitRequestPrivate
 * \brief The UpdateUsageLimitRequestPrivate class provides private implementation for UpdateUsageLimitRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a UpdateUsageLimitRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
UpdateUsageLimitRequestPrivate::UpdateUsageLimitRequestPrivate(
    const RedshiftServerlessRequest::Action action, UpdateUsageLimitRequest * const q)
    : RedshiftServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateUsageLimitRequest
 * class' copy constructor.
 */
UpdateUsageLimitRequestPrivate::UpdateUsageLimitRequestPrivate(
    const UpdateUsageLimitRequestPrivate &other, UpdateUsageLimitRequest * const q)
    : RedshiftServerlessRequestPrivate(other, q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
