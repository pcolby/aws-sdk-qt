// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletehsmconfigurationrequest.h"
#include "deletehsmconfigurationrequest_p.h"
#include "deletehsmconfigurationresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/*!
 * \class QtAws::Redshift::DeleteHsmConfigurationRequest
 * \brief The DeleteHsmConfigurationRequest class provides an interface for Redshift DeleteHsmConfiguration requests.
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
 * \sa RedshiftClient::deleteHsmConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteHsmConfigurationRequest::DeleteHsmConfigurationRequest(const DeleteHsmConfigurationRequest &other)
    : RedshiftRequest(new DeleteHsmConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteHsmConfigurationRequest object.
 */
DeleteHsmConfigurationRequest::DeleteHsmConfigurationRequest()
    : RedshiftRequest(new DeleteHsmConfigurationRequestPrivate(RedshiftRequest::DeleteHsmConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteHsmConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteHsmConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteHsmConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteHsmConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Redshift::DeleteHsmConfigurationRequestPrivate
 * \brief The DeleteHsmConfigurationRequestPrivate class provides private implementation for DeleteHsmConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsRedshift
 */

/*!
 * Constructs a DeleteHsmConfigurationRequestPrivate object for Redshift \a action,
 * with public implementation \a q.
 */
DeleteHsmConfigurationRequestPrivate::DeleteHsmConfigurationRequestPrivate(
    const RedshiftRequest::Action action, DeleteHsmConfigurationRequest * const q)
    : RedshiftRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteHsmConfigurationRequest
 * class' copy constructor.
 */
DeleteHsmConfigurationRequestPrivate::DeleteHsmConfigurationRequestPrivate(
    const DeleteHsmConfigurationRequestPrivate &other, DeleteHsmConfigurationRequest * const q)
    : RedshiftRequestPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws
