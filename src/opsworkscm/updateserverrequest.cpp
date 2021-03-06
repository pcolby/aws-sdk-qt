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

#include "updateserverrequest.h"
#include "updateserverrequest_p.h"
#include "updateserverresponse.h"
#include "opsworkscmrequest_p.h"

namespace QtAws {
namespace OpsWorksCM {

/*!
 * \class QtAws::OpsWorksCM::UpdateServerRequest
 * \brief The UpdateServerRequest class provides an interface for OpsWorksCM UpdateServer requests.
 *
 * \inmodule QtAwsOpsWorksCM
 *
 *  <fullname>AWS OpsWorks CM</fullname>
 * 
 *  AWS OpsWorks for configuration management (CM) is a service that runs and manages configuration management servers. You
 *  can use AWS OpsWorks CM to create and manage AWS OpsWorks for Chef Automate and AWS OpsWorks for Puppet Enterprise
 *  servers, and add or remove nodes for the servers to
 * 
 *  manage>
 * 
 *  <b>Glossary of terms</b>
 * 
 *  </p <ul> <li>
 * 
 *  <b>Server</b>: A configuration management server that can be highly-available. The configuration management server runs
 *  on an Amazon Elastic Compute Cloud (EC2) instance, and may use various other AWS services, such as Amazon Relational
 *  Database Service (RDS) and Elastic Load Balancing. A server is a generic abstraction over the configuration manager that
 *  you want to use, much like Amazon RDS. In AWS OpsWorks CM, you do not start or stop servers. After you create servers,
 *  they continue to run until they are
 * 
 *  deleted> </li> <li>
 * 
 *  <b>Engine</b>: The engine is the specific configuration manager that you want to use. Valid values in this release
 *  include <code>ChefAutomate</code> and
 * 
 *  <code>Puppet</code>> </li> <li>
 * 
 *  <b>Backup</b>: This is an application-level backup of the data that the configuration manager stores. AWS OpsWorks CM
 *  creates an S3 bucket for backups when you launch the first server. A backup maintains a snapshot of a server's
 *  configuration-related attributes at the time the backup
 * 
 *  starts> </li> <li>
 * 
 *  <b>Events</b>: Events are always related to a server. Events are written during server creation, when health checks run,
 *  when backups are created, when system maintenance is performed, etc. When you delete a server, the server's events are
 *  also
 * 
 *  deleted> </li> <li>
 * 
 *  <b>Account attributes</b>: Every account has attributes that are assigned in the AWS OpsWorks CM database. These
 *  attributes store information about configuration limits (servers, backups, etc.) and your customer account.
 * 
 *  </p </li> </ul>
 * 
 *  <b>Endpoints</b>
 * 
 *  </p
 * 
 *  AWS OpsWorks CM supports the following endpoints, all HTTPS. You must connect to one of the following endpoints. Your
 *  servers can only be accessed or managed within the endpoint in which they are
 * 
 *  created> <ul> <li>
 * 
 *  opsworks-cm.us-east-1.amazonaws.co> </li> <li>
 * 
 *  opsworks-cm.us-east-2.amazonaws.co> </li> <li>
 * 
 *  opsworks-cm.us-west-1.amazonaws.co> </li> <li>
 * 
 *  opsworks-cm.us-west-2.amazonaws.co> </li> <li>
 * 
 *  opsworks-cm.ap-northeast-1.amazonaws.co> </li> <li>
 * 
 *  opsworks-cm.ap-southeast-1.amazonaws.co> </li> <li>
 * 
 *  opsworks-cm.ap-southeast-2.amazonaws.co> </li> <li>
 * 
 *  opsworks-cm.eu-central-1.amazonaws.co> </li> <li>
 * 
 *  opsworks-cm.eu-west-1.amazonaws.co> </li> </ul>
 * 
 *  For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/opsworks-service.html">AWS OpsWorks
 *  endpoints and quotas</a> in the AWS General
 * 
 *  Reference>
 * 
 *  <b>Throttling limits</b>
 * 
 *  </p
 * 
 *  All API operations allow for five requests per second with a burst of 10 requests per
 *
 * \sa OpsWorksCMClient::updateServer
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateServerRequest::UpdateServerRequest(const UpdateServerRequest &other)
    : OpsWorksCMRequest(new UpdateServerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateServerRequest object.
 */
UpdateServerRequest::UpdateServerRequest()
    : OpsWorksCMRequest(new UpdateServerRequestPrivate(OpsWorksCMRequest::UpdateServerAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateServerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateServerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateServerRequest::response(QNetworkReply * const reply) const
{
    return new UpdateServerResponse(*this, reply);
}

/*!
 * \class QtAws::OpsWorksCM::UpdateServerRequestPrivate
 * \brief The UpdateServerRequestPrivate class provides private implementation for UpdateServerRequest.
 * \internal
 *
 * \inmodule QtAwsOpsWorksCM
 */

/*!
 * Constructs a UpdateServerRequestPrivate object for OpsWorksCM \a action,
 * with public implementation \a q.
 */
UpdateServerRequestPrivate::UpdateServerRequestPrivate(
    const OpsWorksCMRequest::Action action, UpdateServerRequest * const q)
    : OpsWorksCMRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateServerRequest
 * class' copy constructor.
 */
UpdateServerRequestPrivate::UpdateServerRequestPrivate(
    const UpdateServerRequestPrivate &other, UpdateServerRequest * const q)
    : OpsWorksCMRequestPrivate(other, q)
{

}

} // namespace OpsWorksCM
} // namespace QtAws
