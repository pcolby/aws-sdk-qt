// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedomainchangeprogressresponse.h"
#include "describedomainchangeprogressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::DescribeDomainChangeProgressResponse
 * \brief The DescribeDomainChangeProgressResponse class provides an interace for Elasticsearch DescribeDomainChangeProgress responses.
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
 * \sa ElasticsearchClient::describeDomainChangeProgress
 */

/*!
 * Constructs a DescribeDomainChangeProgressResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDomainChangeProgressResponse::DescribeDomainChangeProgressResponse(
        const DescribeDomainChangeProgressRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchResponse(new DescribeDomainChangeProgressResponsePrivate(this), parent)
{
    setRequest(new DescribeDomainChangeProgressRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDomainChangeProgressRequest * DescribeDomainChangeProgressResponse::request() const
{
    Q_D(const DescribeDomainChangeProgressResponse);
    return static_cast<const DescribeDomainChangeProgressRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Elasticsearch DescribeDomainChangeProgress \a response.
 */
void DescribeDomainChangeProgressResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDomainChangeProgressResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Elasticsearch::DescribeDomainChangeProgressResponsePrivate
 * \brief The DescribeDomainChangeProgressResponsePrivate class provides private implementation for DescribeDomainChangeProgressResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a DescribeDomainChangeProgressResponsePrivate object with public implementation \a q.
 */
DescribeDomainChangeProgressResponsePrivate::DescribeDomainChangeProgressResponsePrivate(
    DescribeDomainChangeProgressResponse * const q) : ElasticsearchResponsePrivate(q)
{

}

/*!
 * Parses a Elasticsearch DescribeDomainChangeProgress response element from \a xml.
 */
void DescribeDomainChangeProgressResponsePrivate::parseDescribeDomainChangeProgressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDomainChangeProgressResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Elasticsearch
} // namespace QtAws
