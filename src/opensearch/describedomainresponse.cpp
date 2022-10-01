// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedomainresponse.h"
#include "describedomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::DescribeDomainResponse
 * \brief The DescribeDomainResponse class provides an interace for OpenSearch DescribeDomain responses.
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
 * \sa OpenSearchClient::describeDomain
 */

/*!
 * Constructs a DescribeDomainResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDomainResponse::DescribeDomainResponse(
        const DescribeDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpenSearchResponse(new DescribeDomainResponsePrivate(this), parent)
{
    setRequest(new DescribeDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDomainRequest * DescribeDomainResponse::request() const
{
    Q_D(const DescribeDomainResponse);
    return static_cast<const DescribeDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful OpenSearch DescribeDomain \a response.
 */
void DescribeDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpenSearch::DescribeDomainResponsePrivate
 * \brief The DescribeDomainResponsePrivate class provides private implementation for DescribeDomainResponse.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a DescribeDomainResponsePrivate object with public implementation \a q.
 */
DescribeDomainResponsePrivate::DescribeDomainResponsePrivate(
    DescribeDomainResponse * const q) : OpenSearchResponsePrivate(q)
{

}

/*!
 * Parses a OpenSearch DescribeDomain response element from \a xml.
 */
void DescribeDomainResponsePrivate::parseDescribeDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpenSearch
} // namespace QtAws
