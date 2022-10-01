// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteworkgrouprequest.h"
#include "deleteworkgrouprequest_p.h"
#include "deleteworkgroupresponse.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::DeleteWorkgroupRequest
 * \brief The DeleteWorkgroupRequest class provides an interface for RedshiftServerless DeleteWorkgroup requests.
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
 * \sa RedshiftServerlessClient::deleteWorkgroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWorkgroupRequest::DeleteWorkgroupRequest(const DeleteWorkgroupRequest &other)
    : RedshiftServerlessRequest(new DeleteWorkgroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWorkgroupRequest object.
 */
DeleteWorkgroupRequest::DeleteWorkgroupRequest()
    : RedshiftServerlessRequest(new DeleteWorkgroupRequestPrivate(RedshiftServerlessRequest::DeleteWorkgroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWorkgroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWorkgroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWorkgroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWorkgroupResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftServerless::DeleteWorkgroupRequestPrivate
 * \brief The DeleteWorkgroupRequestPrivate class provides private implementation for DeleteWorkgroupRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a DeleteWorkgroupRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
DeleteWorkgroupRequestPrivate::DeleteWorkgroupRequestPrivate(
    const RedshiftServerlessRequest::Action action, DeleteWorkgroupRequest * const q)
    : RedshiftServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWorkgroupRequest
 * class' copy constructor.
 */
DeleteWorkgroupRequestPrivate::DeleteWorkgroupRequestPrivate(
    const DeleteWorkgroupRequestPrivate &other, DeleteWorkgroupRequest * const q)
    : RedshiftServerlessRequestPrivate(other, q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
