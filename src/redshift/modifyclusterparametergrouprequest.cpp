// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyclusterparametergrouprequest.h"
#include "modifyclusterparametergrouprequest_p.h"
#include "modifyclusterparametergroupresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/*!
 * \class QtAws::Redshift::ModifyClusterParameterGroupRequest
 * \brief The ModifyClusterParameterGroupRequest class provides an interface for Redshift ModifyClusterParameterGroup requests.
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
 * \sa RedshiftClient::modifyClusterParameterGroup
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyClusterParameterGroupRequest::ModifyClusterParameterGroupRequest(const ModifyClusterParameterGroupRequest &other)
    : RedshiftRequest(new ModifyClusterParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyClusterParameterGroupRequest object.
 */
ModifyClusterParameterGroupRequest::ModifyClusterParameterGroupRequest()
    : RedshiftRequest(new ModifyClusterParameterGroupRequestPrivate(RedshiftRequest::ModifyClusterParameterGroupAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyClusterParameterGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyClusterParameterGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyClusterParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new ModifyClusterParameterGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Redshift::ModifyClusterParameterGroupRequestPrivate
 * \brief The ModifyClusterParameterGroupRequestPrivate class provides private implementation for ModifyClusterParameterGroupRequest.
 * \internal
 *
 * \inmodule QtAwsRedshift
 */

/*!
 * Constructs a ModifyClusterParameterGroupRequestPrivate object for Redshift \a action,
 * with public implementation \a q.
 */
ModifyClusterParameterGroupRequestPrivate::ModifyClusterParameterGroupRequestPrivate(
    const RedshiftRequest::Action action, ModifyClusterParameterGroupRequest * const q)
    : RedshiftRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyClusterParameterGroupRequest
 * class' copy constructor.
 */
ModifyClusterParameterGroupRequestPrivate::ModifyClusterParameterGroupRequestPrivate(
    const ModifyClusterParameterGroupRequestPrivate &other, ModifyClusterParameterGroupRequest * const q)
    : RedshiftRequestPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws
