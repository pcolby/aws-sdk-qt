// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listversionsresponse.h"
#include "listversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::ListVersionsResponse
 * \brief The ListVersionsResponse class provides an interace for OpenSearch ListVersions responses.
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
 * \sa OpenSearchClient::listVersions
 */

/*!
 * Constructs a ListVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListVersionsResponse::ListVersionsResponse(
        const ListVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpenSearchResponse(new ListVersionsResponsePrivate(this), parent)
{
    setRequest(new ListVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListVersionsRequest * ListVersionsResponse::request() const
{
    Q_D(const ListVersionsResponse);
    return static_cast<const ListVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful OpenSearch ListVersions \a response.
 */
void ListVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpenSearch::ListVersionsResponsePrivate
 * \brief The ListVersionsResponsePrivate class provides private implementation for ListVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a ListVersionsResponsePrivate object with public implementation \a q.
 */
ListVersionsResponsePrivate::ListVersionsResponsePrivate(
    ListVersionsResponse * const q) : OpenSearchResponsePrivate(q)
{

}

/*!
 * Parses a OpenSearch ListVersions response element from \a xml.
 */
void ListVersionsResponsePrivate::parseListVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpenSearch
} // namespace QtAws
