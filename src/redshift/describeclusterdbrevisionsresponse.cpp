/*
    Copyright 2013-2019 Paul Colby

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

#include "describeclusterdbrevisionsresponse.h"
#include "describeclusterdbrevisionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/*!
 * \class QtAws::Redshift::DescribeClusterDbRevisionsResponse
 * \brief The DescribeClusterDbRevisionsResponse class provides an interace for Redshift DescribeClusterDbRevisions responses.
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
 * \sa RedshiftClient::describeClusterDbRevisions
 */

/*!
 * Constructs a DescribeClusterDbRevisionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeClusterDbRevisionsResponse::DescribeClusterDbRevisionsResponse(
        const DescribeClusterDbRevisionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DescribeClusterDbRevisionsResponsePrivate(this), parent)
{
    setRequest(new DescribeClusterDbRevisionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeClusterDbRevisionsRequest * DescribeClusterDbRevisionsResponse::request() const
{
    Q_D(const DescribeClusterDbRevisionsResponse);
    return static_cast<const DescribeClusterDbRevisionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Redshift DescribeClusterDbRevisions \a response.
 */
void DescribeClusterDbRevisionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeClusterDbRevisionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Redshift::DescribeClusterDbRevisionsResponsePrivate
 * \brief The DescribeClusterDbRevisionsResponsePrivate class provides private implementation for DescribeClusterDbRevisionsResponse.
 * \internal
 *
 * \inmodule QtAwsRedshift
 */

/*!
 * Constructs a DescribeClusterDbRevisionsResponsePrivate object with public implementation \a q.
 */
DescribeClusterDbRevisionsResponsePrivate::DescribeClusterDbRevisionsResponsePrivate(
    DescribeClusterDbRevisionsResponse * const q) : RedshiftResponsePrivate(q)
{

}

/*!
 * Parses a Redshift DescribeClusterDbRevisions response element from \a xml.
 */
void DescribeClusterDbRevisionsResponsePrivate::parseDescribeClusterDbRevisionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeClusterDbRevisionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Redshift
} // namespace QtAws
