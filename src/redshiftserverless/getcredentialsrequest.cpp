/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getcredentialsrequest.h"
#include "getcredentialsrequest_p.h"
#include "getcredentialsresponse.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::GetCredentialsRequest
 * \brief The GetCredentialsRequest class provides an interface for RedshiftServerless GetCredentials requests.
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
 * \sa RedshiftServerlessClient::getCredentials
 */

/*!
 * Constructs a copy of \a other.
 */
GetCredentialsRequest::GetCredentialsRequest(const GetCredentialsRequest &other)
    : RedshiftServerlessRequest(new GetCredentialsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCredentialsRequest object.
 */
GetCredentialsRequest::GetCredentialsRequest()
    : RedshiftServerlessRequest(new GetCredentialsRequestPrivate(RedshiftServerlessRequest::GetCredentialsAction, this))
{

}

/*!
 * \reimp
 */
bool GetCredentialsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCredentialsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCredentialsRequest::response(QNetworkReply * const reply) const
{
    return new GetCredentialsResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftServerless::GetCredentialsRequestPrivate
 * \brief The GetCredentialsRequestPrivate class provides private implementation for GetCredentialsRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a GetCredentialsRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
GetCredentialsRequestPrivate::GetCredentialsRequestPrivate(
    const RedshiftServerlessRequest::Action action, GetCredentialsRequest * const q)
    : RedshiftServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCredentialsRequest
 * class' copy constructor.
 */
GetCredentialsRequestPrivate::GetCredentialsRequestPrivate(
    const GetCredentialsRequestPrivate &other, GetCredentialsRequest * const q)
    : RedshiftServerlessRequestPrivate(other, q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
