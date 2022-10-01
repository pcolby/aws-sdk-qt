// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedatasharesforproducerresponse.h"
#include "describedatasharesforproducerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/*!
 * \class QtAws::Redshift::DescribeDataSharesForProducerResponse
 * \brief The DescribeDataSharesForProducerResponse class provides an interace for Redshift DescribeDataSharesForProducer responses.
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
 * \sa RedshiftClient::describeDataSharesForProducer
 */

/*!
 * Constructs a DescribeDataSharesForProducerResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDataSharesForProducerResponse::DescribeDataSharesForProducerResponse(
        const DescribeDataSharesForProducerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DescribeDataSharesForProducerResponsePrivate(this), parent)
{
    setRequest(new DescribeDataSharesForProducerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDataSharesForProducerRequest * DescribeDataSharesForProducerResponse::request() const
{
    Q_D(const DescribeDataSharesForProducerResponse);
    return static_cast<const DescribeDataSharesForProducerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Redshift DescribeDataSharesForProducer \a response.
 */
void DescribeDataSharesForProducerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDataSharesForProducerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Redshift::DescribeDataSharesForProducerResponsePrivate
 * \brief The DescribeDataSharesForProducerResponsePrivate class provides private implementation for DescribeDataSharesForProducerResponse.
 * \internal
 *
 * \inmodule QtAwsRedshift
 */

/*!
 * Constructs a DescribeDataSharesForProducerResponsePrivate object with public implementation \a q.
 */
DescribeDataSharesForProducerResponsePrivate::DescribeDataSharesForProducerResponsePrivate(
    DescribeDataSharesForProducerResponse * const q) : RedshiftResponsePrivate(q)
{

}

/*!
 * Parses a Redshift DescribeDataSharesForProducer response element from \a xml.
 */
void DescribeDataSharesForProducerResponsePrivate::parseDescribeDataSharesForProducerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDataSharesForProducerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Redshift
} // namespace QtAws
