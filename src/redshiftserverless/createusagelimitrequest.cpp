// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createusagelimitrequest.h"
#include "createusagelimitrequest_p.h"
#include "createusagelimitresponse.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::CreateUsageLimitRequest
 * \brief The CreateUsageLimitRequest class provides an interface for RedshiftServerless CreateUsageLimit requests.
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
 * \sa RedshiftServerlessClient::createUsageLimit
 */

/*!
 * Constructs a copy of \a other.
 */
CreateUsageLimitRequest::CreateUsageLimitRequest(const CreateUsageLimitRequest &other)
    : RedshiftServerlessRequest(new CreateUsageLimitRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateUsageLimitRequest object.
 */
CreateUsageLimitRequest::CreateUsageLimitRequest()
    : RedshiftServerlessRequest(new CreateUsageLimitRequestPrivate(RedshiftServerlessRequest::CreateUsageLimitAction, this))
{

}

/*!
 * \reimp
 */
bool CreateUsageLimitRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateUsageLimitResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateUsageLimitRequest::response(QNetworkReply * const reply) const
{
    return new CreateUsageLimitResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftServerless::CreateUsageLimitRequestPrivate
 * \brief The CreateUsageLimitRequestPrivate class provides private implementation for CreateUsageLimitRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a CreateUsageLimitRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
CreateUsageLimitRequestPrivate::CreateUsageLimitRequestPrivate(
    const RedshiftServerlessRequest::Action action, CreateUsageLimitRequest * const q)
    : RedshiftServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateUsageLimitRequest
 * class' copy constructor.
 */
CreateUsageLimitRequestPrivate::CreateUsageLimitRequestPrivate(
    const CreateUsageLimitRequestPrivate &other, CreateUsageLimitRequest * const q)
    : RedshiftServerlessRequestPrivate(other, q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
