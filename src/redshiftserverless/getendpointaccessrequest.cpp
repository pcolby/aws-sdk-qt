// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getendpointaccessrequest.h"
#include "getendpointaccessrequest_p.h"
#include "getendpointaccessresponse.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::GetEndpointAccessRequest
 * \brief The GetEndpointAccessRequest class provides an interface for RedshiftServerless GetEndpointAccess requests.
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
 * \sa RedshiftServerlessClient::getEndpointAccess
 */

/*!
 * Constructs a copy of \a other.
 */
GetEndpointAccessRequest::GetEndpointAccessRequest(const GetEndpointAccessRequest &other)
    : RedshiftServerlessRequest(new GetEndpointAccessRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetEndpointAccessRequest object.
 */
GetEndpointAccessRequest::GetEndpointAccessRequest()
    : RedshiftServerlessRequest(new GetEndpointAccessRequestPrivate(RedshiftServerlessRequest::GetEndpointAccessAction, this))
{

}

/*!
 * \reimp
 */
bool GetEndpointAccessRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetEndpointAccessResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEndpointAccessRequest::response(QNetworkReply * const reply) const
{
    return new GetEndpointAccessResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftServerless::GetEndpointAccessRequestPrivate
 * \brief The GetEndpointAccessRequestPrivate class provides private implementation for GetEndpointAccessRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a GetEndpointAccessRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
GetEndpointAccessRequestPrivate::GetEndpointAccessRequestPrivate(
    const RedshiftServerlessRequest::Action action, GetEndpointAccessRequest * const q)
    : RedshiftServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetEndpointAccessRequest
 * class' copy constructor.
 */
GetEndpointAccessRequestPrivate::GetEndpointAccessRequestPrivate(
    const GetEndpointAccessRequestPrivate &other, GetEndpointAccessRequest * const q)
    : RedshiftServerlessRequestPrivate(other, q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
