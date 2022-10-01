// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createnamespacerequest.h"
#include "createnamespacerequest_p.h"
#include "createnamespaceresponse.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::CreateNamespaceRequest
 * \brief The CreateNamespaceRequest class provides an interface for RedshiftServerless CreateNamespace requests.
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
 * \sa RedshiftServerlessClient::createNamespace
 */

/*!
 * Constructs a copy of \a other.
 */
CreateNamespaceRequest::CreateNamespaceRequest(const CreateNamespaceRequest &other)
    : RedshiftServerlessRequest(new CreateNamespaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateNamespaceRequest object.
 */
CreateNamespaceRequest::CreateNamespaceRequest()
    : RedshiftServerlessRequest(new CreateNamespaceRequestPrivate(RedshiftServerlessRequest::CreateNamespaceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateNamespaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateNamespaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateNamespaceRequest::response(QNetworkReply * const reply) const
{
    return new CreateNamespaceResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftServerless::CreateNamespaceRequestPrivate
 * \brief The CreateNamespaceRequestPrivate class provides private implementation for CreateNamespaceRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a CreateNamespaceRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
CreateNamespaceRequestPrivate::CreateNamespaceRequestPrivate(
    const RedshiftServerlessRequest::Action action, CreateNamespaceRequest * const q)
    : RedshiftServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateNamespaceRequest
 * class' copy constructor.
 */
CreateNamespaceRequestPrivate::CreateNamespaceRequestPrivate(
    const CreateNamespaceRequestPrivate &other, CreateNamespaceRequest * const q)
    : RedshiftServerlessRequestPrivate(other, q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
