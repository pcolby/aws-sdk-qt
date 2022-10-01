// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifydbclusterrequest.h"
#include "modifydbclusterrequest_p.h"
#include "modifydbclusterresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace Rds {

/*!
 * \class QtAws::Rds::ModifyDBClusterRequest
 * \brief The ModifyDBClusterRequest class provides an interface for Rds ModifyDBCluster requests.
 *
 * \inmodule QtAwsRds
 *
 *  <fullname>Amazon Relational Database Service</fullname>
 * 
 *  </p
 * 
 *  Amazon Relational Database Service (Amazon RDS) is a web service that makes it easier to set up, operate, and scale a
 *  relational database in the cloud. It provides cost-efficient, resizeable capacity for an industry-standard relational
 *  database and manages common database administration tasks, freeing up developers to focus on what makes their
 *  applications and businesses
 * 
 *  unique>
 * 
 *  Amazon RDS gives you access to the capabilities of a MySQL, MariaDB, PostgreSQL, Microsoft SQL Server, Oracle, or Amazon
 *  Aurora database server. These capabilities mean that the code, applications, and tools you already use today with your
 *  existing databases work with Amazon RDS without modification. Amazon RDS automatically backs up your database and
 *  maintains the database software that powers your DB instance. Amazon RDS is flexible: you can scale your DB instance's
 *  compute resources and storage capacity to meet your application's demand. As with all Amazon Web Services, there are no
 *  up-front investments, and you pay only for the resources you
 * 
 *  use>
 * 
 *  This interface reference for Amazon RDS contains documentation for a programming or command line interface you can use
 *  to manage Amazon RDS. Amazon RDS is asynchronous, which means that some interfaces might require techniques such as
 *  polling or callback functions to determine when a command has been applied. In this reference, the parameter
 *  descriptions indicate whether a command is applied immediately, on the next instance reboot, or during the maintenance
 *  window. The reference structure is as follows, and we list following some related topics from the user
 * 
 *  guide>
 * 
 *  <b>Amazon RDS API Reference</b>
 * 
 *  </p <ul> <li>
 * 
 *  For the alphabetical list of API actions, see <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_Operations.html">API
 * 
 *  Actions</a>> </li> <li>
 * 
 *  For the alphabetical list of data types, see <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_Types.html">Data
 * 
 *  Types</a>> </li> <li>
 * 
 *  For a list of common query parameters, see <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/CommonParameters.html">Common
 * 
 *  Parameters</a>> </li> <li>
 * 
 *  For descriptions of the error codes, see <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/CommonErrors.html">Common
 * 
 *  Errors</a>> </li> </ul>
 * 
 *  <b>Amazon RDS User Guide</b>
 * 
 *  </p <ul> <li>
 * 
 *  For a summary of the Amazon RDS interfaces, see <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Welcome.html#Welcome.Interfaces">Available RDS
 * 
 *  Interfaces</a>> </li> <li>
 * 
 *  For more information about how to use the Query API, see <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Using_the_Query_API.html">Using the Query
 *
 * \sa RdsClient::modifyDBCluster
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyDBClusterRequest::ModifyDBClusterRequest(const ModifyDBClusterRequest &other)
    : RdsRequest(new ModifyDBClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyDBClusterRequest object.
 */
ModifyDBClusterRequest::ModifyDBClusterRequest()
    : RdsRequest(new ModifyDBClusterRequestPrivate(RdsRequest::ModifyDBClusterAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyDBClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyDBClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyDBClusterRequest::response(QNetworkReply * const reply) const
{
    return new ModifyDBClusterResponse(*this, reply);
}

/*!
 * \class QtAws::Rds::ModifyDBClusterRequestPrivate
 * \brief The ModifyDBClusterRequestPrivate class provides private implementation for ModifyDBClusterRequest.
 * \internal
 *
 * \inmodule QtAwsRds
 */

/*!
 * Constructs a ModifyDBClusterRequestPrivate object for Rds \a action,
 * with public implementation \a q.
 */
ModifyDBClusterRequestPrivate::ModifyDBClusterRequestPrivate(
    const RdsRequest::Action action, ModifyDBClusterRequest * const q)
    : RdsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyDBClusterRequest
 * class' copy constructor.
 */
ModifyDBClusterRequestPrivate::ModifyDBClusterRequestPrivate(
    const ModifyDBClusterRequestPrivate &other, ModifyDBClusterRequest * const q)
    : RdsRequestPrivate(other, q)
{

}

} // namespace Rds
} // namespace QtAws
