// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpackageversionhistoryresponse.h"
#include "getpackageversionhistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::GetPackageVersionHistoryResponse
 * \brief The GetPackageVersionHistoryResponse class provides an interace for OpenSearch GetPackageVersionHistory responses.
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
 * \sa OpenSearchClient::getPackageVersionHistory
 */

/*!
 * Constructs a GetPackageVersionHistoryResponse object for \a reply to \a request, with parent \a parent.
 */
GetPackageVersionHistoryResponse::GetPackageVersionHistoryResponse(
        const GetPackageVersionHistoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpenSearchResponse(new GetPackageVersionHistoryResponsePrivate(this), parent)
{
    setRequest(new GetPackageVersionHistoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPackageVersionHistoryRequest * GetPackageVersionHistoryResponse::request() const
{
    Q_D(const GetPackageVersionHistoryResponse);
    return static_cast<const GetPackageVersionHistoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful OpenSearch GetPackageVersionHistory \a response.
 */
void GetPackageVersionHistoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPackageVersionHistoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpenSearch::GetPackageVersionHistoryResponsePrivate
 * \brief The GetPackageVersionHistoryResponsePrivate class provides private implementation for GetPackageVersionHistoryResponse.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a GetPackageVersionHistoryResponsePrivate object with public implementation \a q.
 */
GetPackageVersionHistoryResponsePrivate::GetPackageVersionHistoryResponsePrivate(
    GetPackageVersionHistoryResponse * const q) : OpenSearchResponsePrivate(q)
{

}

/*!
 * Parses a OpenSearch GetPackageVersionHistory response element from \a xml.
 */
void GetPackageVersionHistoryResponsePrivate::parseGetPackageVersionHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPackageVersionHistoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpenSearch
} // namespace QtAws
