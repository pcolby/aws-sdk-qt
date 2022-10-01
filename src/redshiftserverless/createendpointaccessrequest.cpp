// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createendpointaccessrequest.h"
#include "createendpointaccessrequest_p.h"
#include "createendpointaccessresponse.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::CreateEndpointAccessRequest
 * \brief The CreateEndpointAccessRequest class provides an interface for RedshiftServerless CreateEndpointAccess requests.
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
 * \sa RedshiftServerlessClient::createEndpointAccess
 */

/*!
 * Constructs a copy of \a other.
 */
CreateEndpointAccessRequest::CreateEndpointAccessRequest(const CreateEndpointAccessRequest &other)
    : RedshiftServerlessRequest(new CreateEndpointAccessRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateEndpointAccessRequest object.
 */
CreateEndpointAccessRequest::CreateEndpointAccessRequest()
    : RedshiftServerlessRequest(new CreateEndpointAccessRequestPrivate(RedshiftServerlessRequest::CreateEndpointAccessAction, this))
{

}

/*!
 * \reimp
 */
bool CreateEndpointAccessRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateEndpointAccessResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateEndpointAccessRequest::response(QNetworkReply * const reply) const
{
    return new CreateEndpointAccessResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftServerless::CreateEndpointAccessRequestPrivate
 * \brief The CreateEndpointAccessRequestPrivate class provides private implementation for CreateEndpointAccessRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a CreateEndpointAccessRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
CreateEndpointAccessRequestPrivate::CreateEndpointAccessRequestPrivate(
    const RedshiftServerlessRequest::Action action, CreateEndpointAccessRequest * const q)
    : RedshiftServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateEndpointAccessRequest
 * class' copy constructor.
 */
CreateEndpointAccessRequestPrivate::CreateEndpointAccessRequestPrivate(
    const CreateEndpointAccessRequestPrivate &other, CreateEndpointAccessRequest * const q)
    : RedshiftServerlessRequestPrivate(other, q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
