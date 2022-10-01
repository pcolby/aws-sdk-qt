// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeendpointaccessresponse.h"
#include "describeendpointaccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/*!
 * \class QtAws::Redshift::DescribeEndpointAccessResponse
 * \brief The DescribeEndpointAccessResponse class provides an interace for Redshift DescribeEndpointAccess responses.
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
 * \sa RedshiftClient::describeEndpointAccess
 */

/*!
 * Constructs a DescribeEndpointAccessResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEndpointAccessResponse::DescribeEndpointAccessResponse(
        const DescribeEndpointAccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DescribeEndpointAccessResponsePrivate(this), parent)
{
    setRequest(new DescribeEndpointAccessRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEndpointAccessRequest * DescribeEndpointAccessResponse::request() const
{
    Q_D(const DescribeEndpointAccessResponse);
    return static_cast<const DescribeEndpointAccessRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Redshift DescribeEndpointAccess \a response.
 */
void DescribeEndpointAccessResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEndpointAccessResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Redshift::DescribeEndpointAccessResponsePrivate
 * \brief The DescribeEndpointAccessResponsePrivate class provides private implementation for DescribeEndpointAccessResponse.
 * \internal
 *
 * \inmodule QtAwsRedshift
 */

/*!
 * Constructs a DescribeEndpointAccessResponsePrivate object with public implementation \a q.
 */
DescribeEndpointAccessResponsePrivate::DescribeEndpointAccessResponsePrivate(
    DescribeEndpointAccessResponse * const q) : RedshiftResponsePrivate(q)
{

}

/*!
 * Parses a Redshift DescribeEndpointAccess response element from \a xml.
 */
void DescribeEndpointAccessResponsePrivate::parseDescribeEndpointAccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEndpointAccessResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Redshift
} // namespace QtAws
