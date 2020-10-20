/*
    Copyright 2013-2020 Paul Colby

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

#include "rebootclusterrequest.h"
#include "rebootclusterrequest_p.h"
#include "rebootclusterresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/*!
 * \class QtAws::Redshift::RebootClusterRequest
 * \brief The RebootClusterRequest class provides an interface for Redshift RebootCluster requests.
 *
 * \inmodule QtAwsRedshift
 *
 *  <fullname>Amazon Redshift</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is an interface reference for Amazon Redshift. It contains documentation for one of the programming or command line
 *  interfaces you can use to manage Amazon Redshift clusters. Note that Amazon Redshift is asynchronous, which means that
 *  some interfaces may require techniques, such as polling or asynchronous callback handlers, to determine when a command
 *  has been applied. In this reference, the parameter descriptions indicate whether a change is applied immediately, on the
 *  next instance reboot, or during the next maintenance window. For a summary of the Amazon Redshift cluster management
 *  interfaces, go to <a href="https://docs.aws.amazon.com/redshift/latest/mgmt/using-aws-sdk.html">Using the Amazon
 *  Redshift Management
 * 
 *  Interfaces</a>>
 * 
 *  Amazon Redshift manages all the work of setting up, operating, and scaling a data warehouse: provisioning capacity,
 *  monitoring and backing up the cluster, and applying patches and upgrades to the Amazon Redshift engine. You can focus on
 *  using your data to acquire new insights for your business and
 * 
 *  customers>
 * 
 *  If you are a first-time user of Amazon Redshift, we recommend that you begin by reading the <a
 *  href="https://docs.aws.amazon.com/redshift/latest/gsg/getting-started.html">Amazon Redshift Getting Started
 * 
 *  Guide</a>>
 * 
 *  If you are a database developer, the <a href="https://docs.aws.amazon.com/redshift/latest/dg/welcome.html">Amazon
 *  Redshift Database Developer Guide</a> explains how to design, build, query, and maintain the databases that make up your
 *  data warehouse.
 *
 * \sa RedshiftClient::rebootCluster
 */

/*!
 * Constructs a copy of \a other.
 */
RebootClusterRequest::RebootClusterRequest(const RebootClusterRequest &other)
    : RedshiftRequest(new RebootClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RebootClusterRequest object.
 */
RebootClusterRequest::RebootClusterRequest()
    : RedshiftRequest(new RebootClusterRequestPrivate(RedshiftRequest::RebootClusterAction, this))
{

}

/*!
 * \reimp
 */
bool RebootClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RebootClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RebootClusterRequest::response(QNetworkReply * const reply) const
{
    return new RebootClusterResponse(*this, reply);
}

/*!
 * \class QtAws::Redshift::RebootClusterRequestPrivate
 * \brief The RebootClusterRequestPrivate class provides private implementation for RebootClusterRequest.
 * \internal
 *
 * \inmodule QtAwsRedshift
 */

/*!
 * Constructs a RebootClusterRequestPrivate object for Redshift \a action,
 * with public implementation \a q.
 */
RebootClusterRequestPrivate::RebootClusterRequestPrivate(
    const RedshiftRequest::Action action, RebootClusterRequest * const q)
    : RedshiftRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RebootClusterRequest
 * class' copy constructor.
 */
RebootClusterRequestPrivate::RebootClusterRequestPrivate(
    const RebootClusterRequestPrivate &other, RebootClusterRequest * const q)
    : RedshiftRequestPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws
