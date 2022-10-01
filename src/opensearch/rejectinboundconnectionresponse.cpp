// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rejectinboundconnectionresponse.h"
#include "rejectinboundconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::RejectInboundConnectionResponse
 * \brief The RejectInboundConnectionResponse class provides an interace for OpenSearch RejectInboundConnection responses.
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
 * \sa OpenSearchClient::rejectInboundConnection
 */

/*!
 * Constructs a RejectInboundConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
RejectInboundConnectionResponse::RejectInboundConnectionResponse(
        const RejectInboundConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpenSearchResponse(new RejectInboundConnectionResponsePrivate(this), parent)
{
    setRequest(new RejectInboundConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RejectInboundConnectionRequest * RejectInboundConnectionResponse::request() const
{
    Q_D(const RejectInboundConnectionResponse);
    return static_cast<const RejectInboundConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful OpenSearch RejectInboundConnection \a response.
 */
void RejectInboundConnectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RejectInboundConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpenSearch::RejectInboundConnectionResponsePrivate
 * \brief The RejectInboundConnectionResponsePrivate class provides private implementation for RejectInboundConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a RejectInboundConnectionResponsePrivate object with public implementation \a q.
 */
RejectInboundConnectionResponsePrivate::RejectInboundConnectionResponsePrivate(
    RejectInboundConnectionResponse * const q) : OpenSearchResponsePrivate(q)
{

}

/*!
 * Parses a OpenSearch RejectInboundConnection response element from \a xml.
 */
void RejectInboundConnectionResponsePrivate::parseRejectInboundConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RejectInboundConnectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpenSearch
} // namespace QtAws
