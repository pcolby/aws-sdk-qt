// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listendpointaccessrequest.h"
#include "listendpointaccessrequest_p.h"
#include "listendpointaccessresponse.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::ListEndpointAccessRequest
 * \brief The ListEndpointAccessRequest class provides an interface for RedshiftServerless ListEndpointAccess requests.
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
 * \sa RedshiftServerlessClient::listEndpointAccess
 */

/*!
 * Constructs a copy of \a other.
 */
ListEndpointAccessRequest::ListEndpointAccessRequest(const ListEndpointAccessRequest &other)
    : RedshiftServerlessRequest(new ListEndpointAccessRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEndpointAccessRequest object.
 */
ListEndpointAccessRequest::ListEndpointAccessRequest()
    : RedshiftServerlessRequest(new ListEndpointAccessRequestPrivate(RedshiftServerlessRequest::ListEndpointAccessAction, this))
{

}

/*!
 * \reimp
 */
bool ListEndpointAccessRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEndpointAccessResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEndpointAccessRequest::response(QNetworkReply * const reply) const
{
    return new ListEndpointAccessResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftServerless::ListEndpointAccessRequestPrivate
 * \brief The ListEndpointAccessRequestPrivate class provides private implementation for ListEndpointAccessRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a ListEndpointAccessRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
ListEndpointAccessRequestPrivate::ListEndpointAccessRequestPrivate(
    const RedshiftServerlessRequest::Action action, ListEndpointAccessRequest * const q)
    : RedshiftServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEndpointAccessRequest
 * class' copy constructor.
 */
ListEndpointAccessRequestPrivate::ListEndpointAccessRequestPrivate(
    const ListEndpointAccessRequestPrivate &other, ListEndpointAccessRequest * const q)
    : RedshiftServerlessRequestPrivate(other, q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
