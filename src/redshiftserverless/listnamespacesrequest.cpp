// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listnamespacesrequest.h"
#include "listnamespacesrequest_p.h"
#include "listnamespacesresponse.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::ListNamespacesRequest
 * \brief The ListNamespacesRequest class provides an interface for RedshiftServerless ListNamespaces requests.
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
 * \sa RedshiftServerlessClient::listNamespaces
 */

/*!
 * Constructs a copy of \a other.
 */
ListNamespacesRequest::ListNamespacesRequest(const ListNamespacesRequest &other)
    : RedshiftServerlessRequest(new ListNamespacesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListNamespacesRequest object.
 */
ListNamespacesRequest::ListNamespacesRequest()
    : RedshiftServerlessRequest(new ListNamespacesRequestPrivate(RedshiftServerlessRequest::ListNamespacesAction, this))
{

}

/*!
 * \reimp
 */
bool ListNamespacesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListNamespacesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNamespacesRequest::response(QNetworkReply * const reply) const
{
    return new ListNamespacesResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftServerless::ListNamespacesRequestPrivate
 * \brief The ListNamespacesRequestPrivate class provides private implementation for ListNamespacesRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a ListNamespacesRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
ListNamespacesRequestPrivate::ListNamespacesRequestPrivate(
    const RedshiftServerlessRequest::Action action, ListNamespacesRequest * const q)
    : RedshiftServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListNamespacesRequest
 * class' copy constructor.
 */
ListNamespacesRequestPrivate::ListNamespacesRequestPrivate(
    const ListNamespacesRequestPrivate &other, ListNamespacesRequest * const q)
    : RedshiftServerlessRequestPrivate(other, q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
