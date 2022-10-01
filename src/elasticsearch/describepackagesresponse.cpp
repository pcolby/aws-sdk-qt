// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describepackagesresponse.h"
#include "describepackagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::DescribePackagesResponse
 * \brief The DescribePackagesResponse class provides an interace for Elasticsearch DescribePackages responses.
 *
 * \inmodule QtAwsElasticsearch
 *
 *  <fullname>Amazon Elasticsearch Configuration Service</fullname>
 * 
 *  Use the Amazon Elasticsearch Configuration API to create, configure, and manage Elasticsearch
 * 
 *  domains>
 * 
 *  For sample code that uses the Configuration API, see the <a
 *  href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-configuration-samples.html">Amazon
 *  Elasticsearch Service Developer Guide</a>. The guide also contains <a
 *  href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-request-signing.html">sample code for
 *  sending signed HTTP requests to the Elasticsearch
 * 
 *  APIs</a>>
 * 
 *  The endpoint for configuration service requests is region-specific: es.<i>region</i>.amazonaws.com. For example,
 *  es.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elasticsearch-service-regions" target="_blank">Regions and
 *
 * \sa ElasticsearchClient::describePackages
 */

/*!
 * Constructs a DescribePackagesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePackagesResponse::DescribePackagesResponse(
        const DescribePackagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchResponse(new DescribePackagesResponsePrivate(this), parent)
{
    setRequest(new DescribePackagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePackagesRequest * DescribePackagesResponse::request() const
{
    Q_D(const DescribePackagesResponse);
    return static_cast<const DescribePackagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Elasticsearch DescribePackages \a response.
 */
void DescribePackagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePackagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Elasticsearch::DescribePackagesResponsePrivate
 * \brief The DescribePackagesResponsePrivate class provides private implementation for DescribePackagesResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a DescribePackagesResponsePrivate object with public implementation \a q.
 */
DescribePackagesResponsePrivate::DescribePackagesResponsePrivate(
    DescribePackagesResponse * const q) : ElasticsearchResponsePrivate(q)
{

}

/*!
 * Parses a Elasticsearch DescribePackages response element from \a xml.
 */
void DescribePackagesResponsePrivate::parseDescribePackagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePackagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Elasticsearch
} // namespace QtAws
