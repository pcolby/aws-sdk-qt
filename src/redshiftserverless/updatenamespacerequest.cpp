// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatenamespacerequest.h"
#include "updatenamespacerequest_p.h"
#include "updatenamespaceresponse.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::UpdateNamespaceRequest
 * \brief The UpdateNamespaceRequest class provides an interface for RedshiftServerless UpdateNamespace requests.
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
 * \sa RedshiftServerlessClient::updateNamespace
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateNamespaceRequest::UpdateNamespaceRequest(const UpdateNamespaceRequest &other)
    : RedshiftServerlessRequest(new UpdateNamespaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateNamespaceRequest object.
 */
UpdateNamespaceRequest::UpdateNamespaceRequest()
    : RedshiftServerlessRequest(new UpdateNamespaceRequestPrivate(RedshiftServerlessRequest::UpdateNamespaceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateNamespaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateNamespaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateNamespaceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateNamespaceResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftServerless::UpdateNamespaceRequestPrivate
 * \brief The UpdateNamespaceRequestPrivate class provides private implementation for UpdateNamespaceRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a UpdateNamespaceRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
UpdateNamespaceRequestPrivate::UpdateNamespaceRequestPrivate(
    const RedshiftServerlessRequest::Action action, UpdateNamespaceRequest * const q)
    : RedshiftServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateNamespaceRequest
 * class' copy constructor.
 */
UpdateNamespaceRequestPrivate::UpdateNamespaceRequestPrivate(
    const UpdateNamespaceRequestPrivate &other, UpdateNamespaceRequest * const q)
    : RedshiftServerlessRequestPrivate(other, q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
