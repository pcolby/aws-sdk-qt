// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateworkgrouprequest.h"
#include "updateworkgrouprequest_p.h"
#include "updateworkgroupresponse.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::UpdateWorkgroupRequest
 * \brief The UpdateWorkgroupRequest class provides an interface for RedshiftServerless UpdateWorkgroup requests.
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
 * \sa RedshiftServerlessClient::updateWorkgroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateWorkgroupRequest::UpdateWorkgroupRequest(const UpdateWorkgroupRequest &other)
    : RedshiftServerlessRequest(new UpdateWorkgroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateWorkgroupRequest object.
 */
UpdateWorkgroupRequest::UpdateWorkgroupRequest()
    : RedshiftServerlessRequest(new UpdateWorkgroupRequestPrivate(RedshiftServerlessRequest::UpdateWorkgroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateWorkgroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateWorkgroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateWorkgroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateWorkgroupResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftServerless::UpdateWorkgroupRequestPrivate
 * \brief The UpdateWorkgroupRequestPrivate class provides private implementation for UpdateWorkgroupRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a UpdateWorkgroupRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
UpdateWorkgroupRequestPrivate::UpdateWorkgroupRequestPrivate(
    const RedshiftServerlessRequest::Action action, UpdateWorkgroupRequest * const q)
    : RedshiftServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateWorkgroupRequest
 * class' copy constructor.
 */
UpdateWorkgroupRequestPrivate::UpdateWorkgroupRequestPrivate(
    const UpdateWorkgroupRequestPrivate &other, UpdateWorkgroupRequest * const q)
    : RedshiftServerlessRequestPrivate(other, q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
