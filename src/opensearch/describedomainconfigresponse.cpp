// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedomainconfigresponse.h"
#include "describedomainconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::DescribeDomainConfigResponse
 * \brief The DescribeDomainConfigResponse class provides an interace for OpenSearch DescribeDomainConfig responses.
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
 * \sa OpenSearchClient::describeDomainConfig
 */

/*!
 * Constructs a DescribeDomainConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDomainConfigResponse::DescribeDomainConfigResponse(
        const DescribeDomainConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpenSearchResponse(new DescribeDomainConfigResponsePrivate(this), parent)
{
    setRequest(new DescribeDomainConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDomainConfigRequest * DescribeDomainConfigResponse::request() const
{
    Q_D(const DescribeDomainConfigResponse);
    return static_cast<const DescribeDomainConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful OpenSearch DescribeDomainConfig \a response.
 */
void DescribeDomainConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDomainConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpenSearch::DescribeDomainConfigResponsePrivate
 * \brief The DescribeDomainConfigResponsePrivate class provides private implementation for DescribeDomainConfigResponse.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a DescribeDomainConfigResponsePrivate object with public implementation \a q.
 */
DescribeDomainConfigResponsePrivate::DescribeDomainConfigResponsePrivate(
    DescribeDomainConfigResponse * const q) : OpenSearchResponsePrivate(q)
{

}

/*!
 * Parses a OpenSearch DescribeDomainConfig response element from \a xml.
 */
void DescribeDomainConfigResponsePrivate::parseDescribeDomainConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDomainConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpenSearch
} // namespace QtAws
