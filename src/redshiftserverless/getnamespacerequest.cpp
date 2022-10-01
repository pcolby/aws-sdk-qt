// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getnamespacerequest.h"
#include "getnamespacerequest_p.h"
#include "getnamespaceresponse.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::GetNamespaceRequest
 * \brief The GetNamespaceRequest class provides an interface for RedshiftServerless GetNamespace requests.
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
 * \sa RedshiftServerlessClient::getNamespace
 */

/*!
 * Constructs a copy of \a other.
 */
GetNamespaceRequest::GetNamespaceRequest(const GetNamespaceRequest &other)
    : RedshiftServerlessRequest(new GetNamespaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetNamespaceRequest object.
 */
GetNamespaceRequest::GetNamespaceRequest()
    : RedshiftServerlessRequest(new GetNamespaceRequestPrivate(RedshiftServerlessRequest::GetNamespaceAction, this))
{

}

/*!
 * \reimp
 */
bool GetNamespaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetNamespaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetNamespaceRequest::response(QNetworkReply * const reply) const
{
    return new GetNamespaceResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftServerless::GetNamespaceRequestPrivate
 * \brief The GetNamespaceRequestPrivate class provides private implementation for GetNamespaceRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a GetNamespaceRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
GetNamespaceRequestPrivate::GetNamespaceRequestPrivate(
    const RedshiftServerlessRequest::Action action, GetNamespaceRequest * const q)
    : RedshiftServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetNamespaceRequest
 * class' copy constructor.
 */
GetNamespaceRequestPrivate::GetNamespaceRequestPrivate(
    const GetNamespaceRequestPrivate &other, GetNamespaceRequest * const q)
    : RedshiftServerlessRequestPrivate(other, q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
