/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeresizerequest.h"
#include "describeresizerequest_p.h"
#include "describeresizeresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/*!
 * \class QtAws::Redshift::DescribeResizeRequest
 * \brief The DescribeResizeRequest class provides an interface for Redshift DescribeResize requests.
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
 *  interfaces, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/using-aws-sdk.html">Using the Amazon Redshift
 *  Management
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
 *  href="http://docs.aws.amazon.com/redshift/latest/gsg/getting-started.html">Amazon Redshift Getting Started
 * 
 *  Guide</a>>
 * 
 *  If you are a database developer, the <a href="http://docs.aws.amazon.com/redshift/latest/dg/welcome.html">Amazon
 *  Redshift Database Developer Guide</a> explains how to design, build, query, and maintain the databases that make up your
 *  data warehouse.
 *
 * \sa RedshiftClient::describeResize
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeResizeRequest::DescribeResizeRequest(const DescribeResizeRequest &other)
    : RedshiftRequest(new DescribeResizeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeResizeRequest object.
 */
DescribeResizeRequest::DescribeResizeRequest()
    : RedshiftRequest(new DescribeResizeRequestPrivate(RedshiftRequest::DescribeResizeAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeResizeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeResizeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeResizeRequest::response(QNetworkReply * const reply) const
{
    return new DescribeResizeResponse(*this, reply);
}

/*!
 * \class QtAws::Redshift::DescribeResizeRequestPrivate
 * \brief The DescribeResizeRequestPrivate class provides private implementation for DescribeResizeRequest.
 * \internal
 *
 * \inmodule QtAwsRedshift
 */

/*!
 * Constructs a DescribeResizeRequestPrivate object for Redshift \a action,
 * with public implementation \a q.
 */
DescribeResizeRequestPrivate::DescribeResizeRequestPrivate(
    const RedshiftRequest::Action action, DescribeResizeRequest * const q)
    : RedshiftRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeResizeRequest
 * class' copy constructor.
 */
DescribeResizeRequestPrivate::DescribeResizeRequestPrivate(
    const DescribeResizeRequestPrivate &other, DescribeResizeRequest * const q)
    : RedshiftRequestPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws
