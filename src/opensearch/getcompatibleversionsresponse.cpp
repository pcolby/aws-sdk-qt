// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcompatibleversionsresponse.h"
#include "getcompatibleversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::GetCompatibleVersionsResponse
 * \brief The GetCompatibleVersionsResponse class provides an interace for OpenSearch GetCompatibleVersions responses.
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
 * \sa OpenSearchClient::getCompatibleVersions
 */

/*!
 * Constructs a GetCompatibleVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetCompatibleVersionsResponse::GetCompatibleVersionsResponse(
        const GetCompatibleVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpenSearchResponse(new GetCompatibleVersionsResponsePrivate(this), parent)
{
    setRequest(new GetCompatibleVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCompatibleVersionsRequest * GetCompatibleVersionsResponse::request() const
{
    Q_D(const GetCompatibleVersionsResponse);
    return static_cast<const GetCompatibleVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful OpenSearch GetCompatibleVersions \a response.
 */
void GetCompatibleVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCompatibleVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpenSearch::GetCompatibleVersionsResponsePrivate
 * \brief The GetCompatibleVersionsResponsePrivate class provides private implementation for GetCompatibleVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a GetCompatibleVersionsResponsePrivate object with public implementation \a q.
 */
GetCompatibleVersionsResponsePrivate::GetCompatibleVersionsResponsePrivate(
    GetCompatibleVersionsResponse * const q) : OpenSearchResponsePrivate(q)
{

}

/*!
 * Parses a OpenSearch GetCompatibleVersions response element from \a xml.
 */
void GetCompatibleVersionsResponsePrivate::parseGetCompatibleVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCompatibleVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpenSearch
} // namespace QtAws
