// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedomainautotunesresponse.h"
#include "describedomainautotunesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::DescribeDomainAutoTunesResponse
 * \brief The DescribeDomainAutoTunesResponse class provides an interace for OpenSearch DescribeDomainAutoTunes responses.
 *
 * \inmodule QtAwsOpenSearch
 *
 *  <fullname>Amazon OpenSearch Configuration Service</fullname>
 * 
 *  Use the Amazon OpenSearch configuration API to create, configure, and manage Amazon OpenSearch Service
 * 
 *  domains>
 * 
 *  For sample code that uses the configuration API, see the <a
 *  href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/opensearch-configuration-samples.html">
 *  Amazon OpenSearch Service Developer Guide</a>. The guide also contains <a
 *  href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/request-signing.html"> sample code for
 *  sending signed HTTP requests to the OpenSearch APIs</a>.
 * 
 *  </p
 * 
 *  The endpoint for configuration service requests is region-specific: es.<i>region</i>.amazonaws.com. For example,
 *  es.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#service-regions" target="_blank">Regions and
 *  Endpoints</a>.
 *
 * \sa OpenSearchClient::describeDomainAutoTunes
 */

/*!
 * Constructs a DescribeDomainAutoTunesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDomainAutoTunesResponse::DescribeDomainAutoTunesResponse(
        const DescribeDomainAutoTunesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpenSearchResponse(new DescribeDomainAutoTunesResponsePrivate(this), parent)
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
 * Parses a successful OpenSearch DescribeDomainAutoTunes \a response.
 */
void DescribeDomainAutoTunesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDomainAutoTunesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpenSearch::DescribeDomainAutoTunesResponsePrivate
 * \brief The DescribeDomainAutoTunesResponsePrivate class provides private implementation for DescribeDomainAutoTunesResponse.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a DescribeDomainAutoTunesResponsePrivate object with public implementation \a q.
 */
DescribeDomainAutoTunesResponsePrivate::DescribeDomainAutoTunesResponsePrivate(
    DescribeDomainAutoTunesResponse * const q) : OpenSearchResponsePrivate(q)
{

}

/*!
 * Parses a OpenSearch DescribeDomainAutoTunes response element from \a xml.
 */
void DescribeDomainAutoTunesResponsePrivate::parseDescribeDomainAutoTunesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDomainAutoTunesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpenSearch
} // namespace QtAws
