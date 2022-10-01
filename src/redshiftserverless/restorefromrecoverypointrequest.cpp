// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "restorefromrecoverypointrequest.h"
#include "restorefromrecoverypointrequest_p.h"
#include "restorefromrecoverypointresponse.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::RestoreFromRecoveryPointRequest
 * \brief The RestoreFromRecoveryPointRequest class provides an interface for RedshiftServerless RestoreFromRecoveryPoint requests.
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
 * \sa RedshiftServerlessClient::restoreFromRecoveryPoint
 */

/*!
 * Constructs a copy of \a other.
 */
RestoreFromRecoveryPointRequest::RestoreFromRecoveryPointRequest(const RestoreFromRecoveryPointRequest &other)
    : RedshiftServerlessRequest(new RestoreFromRecoveryPointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RestoreFromRecoveryPointRequest object.
 */
RestoreFromRecoveryPointRequest::RestoreFromRecoveryPointRequest()
    : RedshiftServerlessRequest(new RestoreFromRecoveryPointRequestPrivate(RedshiftServerlessRequest::RestoreFromRecoveryPointAction, this))
{

}

/*!
 * \reimp
 */
bool RestoreFromRecoveryPointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RestoreFromRecoveryPointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RestoreFromRecoveryPointRequest::response(QNetworkReply * const reply) const
{
    return new RestoreFromRecoveryPointResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftServerless::RestoreFromRecoveryPointRequestPrivate
 * \brief The RestoreFromRecoveryPointRequestPrivate class provides private implementation for RestoreFromRecoveryPointRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a RestoreFromRecoveryPointRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
RestoreFromRecoveryPointRequestPrivate::RestoreFromRecoveryPointRequestPrivate(
    const RedshiftServerlessRequest::Action action, RestoreFromRecoveryPointRequest * const q)
    : RedshiftServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RestoreFromRecoveryPointRequest
 * class' copy constructor.
 */
RestoreFromRecoveryPointRequestPrivate::RestoreFromRecoveryPointRequestPrivate(
    const RestoreFromRecoveryPointRequestPrivate &other, RestoreFromRecoveryPointRequest * const q)
    : RedshiftServerlessRequestPrivate(other, q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
