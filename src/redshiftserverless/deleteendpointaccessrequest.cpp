// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteendpointaccessrequest.h"
#include "deleteendpointaccessrequest_p.h"
#include "deleteendpointaccessresponse.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::DeleteEndpointAccessRequest
 * \brief The DeleteEndpointAccessRequest class provides an interface for RedshiftServerless DeleteEndpointAccess requests.
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
 * \sa RedshiftServerlessClient::deleteEndpointAccess
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEndpointAccessRequest::DeleteEndpointAccessRequest(const DeleteEndpointAccessRequest &other)
    : RedshiftServerlessRequest(new DeleteEndpointAccessRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEndpointAccessRequest object.
 */
DeleteEndpointAccessRequest::DeleteEndpointAccessRequest()
    : RedshiftServerlessRequest(new DeleteEndpointAccessRequestPrivate(RedshiftServerlessRequest::DeleteEndpointAccessAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEndpointAccessRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEndpointAccessResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEndpointAccessRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEndpointAccessResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftServerless::DeleteEndpointAccessRequestPrivate
 * \brief The DeleteEndpointAccessRequestPrivate class provides private implementation for DeleteEndpointAccessRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a DeleteEndpointAccessRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
DeleteEndpointAccessRequestPrivate::DeleteEndpointAccessRequestPrivate(
    const RedshiftServerlessRequest::Action action, DeleteEndpointAccessRequest * const q)
    : RedshiftServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEndpointAccessRequest
 * class' copy constructor.
 */
DeleteEndpointAccessRequestPrivate::DeleteEndpointAccessRequestPrivate(
    const DeleteEndpointAccessRequestPrivate &other, DeleteEndpointAccessRequest * const q)
    : RedshiftServerlessRequestPrivate(other, q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
