// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedomainautotunesresponse.h"
#include "describedomainautotunesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::DescribeDomainAutoTunesResponse
 * \brief The DescribeDomainAutoTunesResponse class provides an interace for Elasticsearch DescribeDomainAutoTunes responses.
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
 * \sa ElasticsearchClient::describeDomainAutoTunes
 */

/*!
 * Constructs a DescribeDomainAutoTunesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDomainAutoTunesResponse::DescribeDomainAutoTunesResponse(
        const DescribeDomainAutoTunesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchResponse(new DescribeDomainAutoTunesResponsePrivate(this), parent)
{
    setRequest(new DescribeDomainAutoTunesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDomainAutoTunesRequest * DescribeDomainAutoTunesResponse::request() const
{
    Q_D(const DescribeDomainAutoTunesResponse);
    return static_cast<const DescribeDomainAutoTunesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Elasticsearch DescribeDomainAutoTunes \a response.
 */
void DescribeDomainAutoTunesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDomainAutoTunesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Elasticsearch::DescribeDomainAutoTunesResponsePrivate
 * \brief The DescribeDomainAutoTunesResponsePrivate class provides private implementation for DescribeDomainAutoTunesResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a DescribeDomainAutoTunesResponsePrivate object with public implementation \a q.
 */
DescribeDomainAutoTunesResponsePrivate::DescribeDomainAutoTunesResponsePrivate(
    DescribeDomainAutoTunesResponse * const q) : ElasticsearchResponsePrivate(q)
{

}

/*!
 * Parses a Elasticsearch DescribeDomainAutoTunes response element from \a xml.
 */
void DescribeDomainAutoTunesResponsePrivate::parseDescribeDomainAutoTunesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDomainAutoTunesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Elasticsearch
} // namespace QtAws
