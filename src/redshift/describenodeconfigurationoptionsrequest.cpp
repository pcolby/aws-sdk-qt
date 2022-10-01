// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describenodeconfigurationoptionsrequest.h"
#include "describenodeconfigurationoptionsrequest_p.h"
#include "describenodeconfigurationoptionsresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/*!
 * \class QtAws::Redshift::DescribeNodeConfigurationOptionsRequest
 * \brief The DescribeNodeConfigurationOptionsRequest class provides an interface for Redshift DescribeNodeConfigurationOptions requests.
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
 * \sa RedshiftClient::describeNodeConfigurationOptions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeNodeConfigurationOptionsRequest::DescribeNodeConfigurationOptionsRequest(const DescribeNodeConfigurationOptionsRequest &other)
    : RedshiftRequest(new DescribeNodeConfigurationOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeNodeConfigurationOptionsRequest object.
 */
DescribeNodeConfigurationOptionsRequest::DescribeNodeConfigurationOptionsRequest()
    : RedshiftRequest(new DescribeNodeConfigurationOptionsRequestPrivate(RedshiftRequest::DescribeNodeConfigurationOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeNodeConfigurationOptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeNodeConfigurationOptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeNodeConfigurationOptionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeNodeConfigurationOptionsResponse(*this, reply);
}

/*!
 * \class QtAws::Redshift::DescribeNodeConfigurationOptionsRequestPrivate
 * \brief The DescribeNodeConfigurationOptionsRequestPrivate class provides private implementation for DescribeNodeConfigurationOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsRedshift
 */

/*!
 * Constructs a DescribeNodeConfigurationOptionsRequestPrivate object for Redshift \a action,
 * with public implementation \a q.
 */
DescribeNodeConfigurationOptionsRequestPrivate::DescribeNodeConfigurationOptionsRequestPrivate(
    const RedshiftRequest::Action action, DescribeNodeConfigurationOptionsRequest * const q)
    : RedshiftRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeNodeConfigurationOptionsRequest
 * class' copy constructor.
 */
DescribeNodeConfigurationOptionsRequestPrivate::DescribeNodeConfigurationOptionsRequestPrivate(
    const DescribeNodeConfigurationOptionsRequestPrivate &other, DescribeNodeConfigurationOptionsRequest * const q)
    : RedshiftRequestPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws
