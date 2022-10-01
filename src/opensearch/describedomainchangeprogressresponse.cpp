// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedomainchangeprogressresponse.h"
#include "describedomainchangeprogressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::DescribeDomainChangeProgressResponse
 * \brief The DescribeDomainChangeProgressResponse class provides an interace for OpenSearch DescribeDomainChangeProgress responses.
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
 * \sa OpenSearchClient::describeDomainChangeProgress
 */

/*!
 * Constructs a DescribeDomainChangeProgressResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDomainChangeProgressResponse::DescribeDomainChangeProgressResponse(
        const DescribeDomainChangeProgressRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpenSearchResponse(new DescribeDomainChangeProgressResponsePrivate(this), parent)
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
 * Parses a successful OpenSearch DescribeDomainChangeProgress \a response.
 */
void DescribeDomainChangeProgressResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDomainChangeProgressResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpenSearch::DescribeDomainChangeProgressResponsePrivate
 * \brief The DescribeDomainChangeProgressResponsePrivate class provides private implementation for DescribeDomainChangeProgressResponse.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a DescribeDomainChangeProgressResponsePrivate object with public implementation \a q.
 */
DescribeDomainChangeProgressResponsePrivate::DescribeDomainChangeProgressResponsePrivate(
    DescribeDomainChangeProgressResponse * const q) : OpenSearchResponsePrivate(q)
{

}

/*!
 * Parses a OpenSearch DescribeDomainChangeProgress response element from \a xml.
 */
void DescribeDomainChangeProgressResponsePrivate::parseDescribeDomainChangeProgressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDomainChangeProgressResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpenSearch
} // namespace QtAws
