// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeglobalclustersresponse.h"
#include "describeglobalclustersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Neptune {

/*!
 * \class QtAws::Neptune::DescribeGlobalClustersResponse
 * \brief The DescribeGlobalClustersResponse class provides an interace for Neptune DescribeGlobalClusters responses.
 *
 * \inmodule QtAwsNeptune
 *
 *  <fullname>Amazon Neptune</fullname>
 * 
 *  Amazon Neptune is a fast, reliable, fully-managed graph database service that makes it easy to build and run
 *  applications that work with highly connected datasets. The core of Amazon Neptune is a purpose-built, high-performance
 *  graph database engine optimized for storing billions of relationships and querying the graph with milliseconds latency.
 *  Amazon Neptune supports popular graph models Property Graph and W3C's RDF, and their respective query languages Apache
 *  TinkerPop Gremlin and SPARQL, allowing you to easily build queries that efficiently navigate highly connected datasets.
 *  Neptune powers graph use cases such as recommendation engines, fraud detection, knowledge graphs, drug discovery, and
 *  network
 * 
 *  security>
 * 
 *  This interface reference for Amazon Neptune contains documentation for a programming or command line interface you can
 *  use to manage Amazon Neptune. Note that Amazon Neptune is asynchronous, which means that some interfaces might require
 *  techniques such as polling or callback functions to determine when a command has been applied. In this reference, the
 *  parameter descriptions indicate whether a command is applied immediately, on the next instance reboot, or during the
 *  maintenance window. The reference structure is as follows, and we list following some related topics from the user
 *
 * \sa NeptuneClient::describeGlobalClusters
 */

/*!
 * Constructs a DescribeGlobalClustersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeGlobalClustersResponse::DescribeGlobalClustersResponse(
        const DescribeGlobalClustersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NeptuneResponse(new DescribeGlobalClustersResponsePrivate(this), parent)
{
    setRequest(new DescribeGlobalClustersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeGlobalClustersRequest * DescribeGlobalClustersResponse::request() const
{
    Q_D(const DescribeGlobalClustersResponse);
    return static_cast<const DescribeGlobalClustersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Neptune DescribeGlobalClusters \a response.
 */
void DescribeGlobalClustersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeGlobalClustersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Neptune::DescribeGlobalClustersResponsePrivate
 * \brief The DescribeGlobalClustersResponsePrivate class provides private implementation for DescribeGlobalClustersResponse.
 * \internal
 *
 * \inmodule QtAwsNeptune
 */

/*!
 * Constructs a DescribeGlobalClustersResponsePrivate object with public implementation \a q.
 */
DescribeGlobalClustersResponsePrivate::DescribeGlobalClustersResponsePrivate(
    DescribeGlobalClustersResponse * const q) : NeptuneResponsePrivate(q)
{

}

/*!
 * Parses a Neptune DescribeGlobalClusters response element from \a xml.
 */
void DescribeGlobalClustersResponsePrivate::parseDescribeGlobalClustersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeGlobalClustersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Neptune
} // namespace QtAws
