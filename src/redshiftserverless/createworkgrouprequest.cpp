// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createworkgrouprequest.h"
#include "createworkgrouprequest_p.h"
#include "createworkgroupresponse.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::CreateWorkgroupRequest
 * \brief The CreateWorkgroupRequest class provides an interface for RedshiftServerless CreateWorkgroup requests.
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
 * \sa RedshiftServerlessClient::createWorkgroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWorkgroupRequest::CreateWorkgroupRequest(const CreateWorkgroupRequest &other)
    : RedshiftServerlessRequest(new CreateWorkgroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWorkgroupRequest object.
 */
CreateWorkgroupRequest::CreateWorkgroupRequest()
    : RedshiftServerlessRequest(new CreateWorkgroupRequestPrivate(RedshiftServerlessRequest::CreateWorkgroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWorkgroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWorkgroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWorkgroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateWorkgroupResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftServerless::CreateWorkgroupRequestPrivate
 * \brief The CreateWorkgroupRequestPrivate class provides private implementation for CreateWorkgroupRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a CreateWorkgroupRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
CreateWorkgroupRequestPrivate::CreateWorkgroupRequestPrivate(
    const RedshiftServerlessRequest::Action action, CreateWorkgroupRequest * const q)
    : RedshiftServerlessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWorkgroupRequest
 * class' copy constructor.
 */
CreateWorkgroupRequestPrivate::CreateWorkgroupRequestPrivate(
    const CreateWorkgroupRequestPrivate &other, CreateWorkgroupRequest * const q)
    : RedshiftServerlessRequestPrivate(other, q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
