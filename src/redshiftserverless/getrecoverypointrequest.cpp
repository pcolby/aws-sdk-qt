// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrecoverypointrequest.h"
#include "getrecoverypointrequest_p.h"
#include "getrecoverypointresponse.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::GetRecoveryPointRequest
 * \brief The GetRecoveryPointRequest class provides an interface for RedshiftServerless GetRecoveryPoint requests.
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
 * \sa RedshiftServerlessClient::getRecoveryPoint
 */

/*!
 * Constructs a copy of \a other.
 */
GetRecoveryPointRequest::GetRecoveryPointRequest(const GetRecoveryPointRequest &other)
    : RedshiftServerlessRequest(new GetRecoveryPointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRecoveryPointRequest object.
 */
GetRecoveryPointRequest::GetRecoveryPointRequest()
    : RedshiftServerlessRequest(new GetRecoveryPointRequestPrivate(RedshiftServerlessRequest::GetRecoveryPointAction, this))
{

}

/*!
 * \reimp
 */
bool GetRecoveryPointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRecoveryPointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRecoveryPointRequest::response(QNetworkReply * const reply) const
{
    return new GetRecoveryPointResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftServerless::GetRecoveryPointRequestPrivate
 * \brief The GetRecoveryPointRequestPrivate class provides private implementation for GetRecoveryPointRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a GetRecoveryPointRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
GetRecoveryPointRequestPrivate::GetRecoveryPointRequestPrivate(
    const RedshiftServerlessRequest::Action action, GetRecoveryPointRequest * const q)
    : RedshiftServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRecoveryPointRequest
 * class' copy constructor.
 */
GetRecoveryPointRequestPrivate::GetRecoveryPointRequestPrivate(
    const GetRecoveryPointRequestPrivate &other, GetRecoveryPointRequest * const q)
    : RedshiftServerlessRequestPrivate(other, q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
