// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateendpointaccessrequest.h"
#include "updateendpointaccessrequest_p.h"
#include "updateendpointaccessresponse.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::UpdateEndpointAccessRequest
 * \brief The UpdateEndpointAccessRequest class provides an interface for RedshiftServerless UpdateEndpointAccess requests.
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
 * \sa RedshiftServerlessClient::updateEndpointAccess
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateEndpointAccessRequest::UpdateEndpointAccessRequest(const UpdateEndpointAccessRequest &other)
    : RedshiftServerlessRequest(new UpdateEndpointAccessRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateEndpointAccessRequest object.
 */
UpdateEndpointAccessRequest::UpdateEndpointAccessRequest()
    : RedshiftServerlessRequest(new UpdateEndpointAccessRequestPrivate(RedshiftServerlessRequest::UpdateEndpointAccessAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateEndpointAccessRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateEndpointAccessResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateEndpointAccessRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEndpointAccessResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftServerless::UpdateEndpointAccessRequestPrivate
 * \brief The UpdateEndpointAccessRequestPrivate class provides private implementation for UpdateEndpointAccessRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a UpdateEndpointAccessRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
UpdateEndpointAccessRequestPrivate::UpdateEndpointAccessRequestPrivate(
    const RedshiftServerlessRequest::Action action, UpdateEndpointAccessRequest * const q)
    : RedshiftServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateEndpointAccessRequest
 * class' copy constructor.
 */
UpdateEndpointAccessRequestPrivate::UpdateEndpointAccessRequestPrivate(
    const UpdateEndpointAccessRequestPrivate &other, UpdateEndpointAccessRequest * const q)
    : RedshiftServerlessRequestPrivate(other, q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
