// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteinboundconnectionresponse.h"
#include "deleteinboundconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::DeleteInboundConnectionResponse
 * \brief The DeleteInboundConnectionResponse class provides an interace for OpenSearch DeleteInboundConnection responses.
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
 * \sa OpenSearchClient::deleteInboundConnection
 */

/*!
 * Constructs a DeleteInboundConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteInboundConnectionResponse::DeleteInboundConnectionResponse(
        const DeleteInboundConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpenSearchResponse(new DeleteInboundConnectionResponsePrivate(this), parent)
{
    setRequest(new DeleteInboundConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteInboundConnectionRequest * DeleteInboundConnectionResponse::request() const
{
    Q_D(const DeleteInboundConnectionResponse);
    return static_cast<const DeleteInboundConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful OpenSearch DeleteInboundConnection \a response.
 */
void DeleteInboundConnectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteInboundConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpenSearch::DeleteInboundConnectionResponsePrivate
 * \brief The DeleteInboundConnectionResponsePrivate class provides private implementation for DeleteInboundConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a DeleteInboundConnectionResponsePrivate object with public implementation \a q.
 */
DeleteInboundConnectionResponsePrivate::DeleteInboundConnectionResponsePrivate(
    DeleteInboundConnectionResponse * const q) : OpenSearchResponsePrivate(q)
{

}

/*!
 * Parses a OpenSearch DeleteInboundConnection response element from \a xml.
 */
void DeleteInboundConnectionResponsePrivate::parseDeleteInboundConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInboundConnectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpenSearch
} // namespace QtAws
