// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getworkgrouprequest.h"
#include "getworkgrouprequest_p.h"
#include "getworkgroupresponse.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::GetWorkgroupRequest
 * \brief The GetWorkgroupRequest class provides an interface for RedshiftServerless GetWorkgroup requests.
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
 * \sa RedshiftServerlessClient::getWorkgroup
 */

/*!
 * Constructs a copy of \a other.
 */
GetWorkgroupRequest::GetWorkgroupRequest(const GetWorkgroupRequest &other)
    : RedshiftServerlessRequest(new GetWorkgroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetWorkgroupRequest object.
 */
GetWorkgroupRequest::GetWorkgroupRequest()
    : RedshiftServerlessRequest(new GetWorkgroupRequestPrivate(RedshiftServerlessRequest::GetWorkgroupAction, this))
{

}

/*!
 * \reimp
 */
bool GetWorkgroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetWorkgroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetWorkgroupRequest::response(QNetworkReply * const reply) const
{
    return new GetWorkgroupResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftServerless::GetWorkgroupRequestPrivate
 * \brief The GetWorkgroupRequestPrivate class provides private implementation for GetWorkgroupRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a GetWorkgroupRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
GetWorkgroupRequestPrivate::GetWorkgroupRequestPrivate(
    const RedshiftServerlessRequest::Action action, GetWorkgroupRequest * const q)
    : RedshiftServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetWorkgroupRequest
 * class' copy constructor.
 */
GetWorkgroupRequestPrivate::GetWorkgroupRequestPrivate(
    const GetWorkgroupRequestPrivate &other, GetWorkgroupRequest * const q)
    : RedshiftServerlessRequestPrivate(other, q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
