// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteoutboundconnectionresponse.h"
#include "deleteoutboundconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::DeleteOutboundConnectionResponse
 * \brief The DeleteOutboundConnectionResponse class provides an interace for OpenSearch DeleteOutboundConnection responses.
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
 * \sa OpenSearchClient::deleteOutboundConnection
 */

/*!
 * Constructs a DeleteOutboundConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteOutboundConnectionResponse::DeleteOutboundConnectionResponse(
        const DeleteOutboundConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpenSearchResponse(new DeleteOutboundConnectionResponsePrivate(this), parent)
{
    setRequest(new DeleteOutboundConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteOutboundConnectionRequest * DeleteOutboundConnectionResponse::request() const
{
    Q_D(const DeleteOutboundConnectionResponse);
    return static_cast<const DeleteOutboundConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful OpenSearch DeleteOutboundConnection \a response.
 */
void DeleteOutboundConnectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteOutboundConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpenSearch::DeleteOutboundConnectionResponsePrivate
 * \brief The DeleteOutboundConnectionResponsePrivate class provides private implementation for DeleteOutboundConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a DeleteOutboundConnectionResponsePrivate object with public implementation \a q.
 */
DeleteOutboundConnectionResponsePrivate::DeleteOutboundConnectionResponsePrivate(
    DeleteOutboundConnectionResponse * const q) : OpenSearchResponsePrivate(q)
{

}

/*!
 * Parses a OpenSearch DeleteOutboundConnection response element from \a xml.
 */
void DeleteOutboundConnectionResponsePrivate::parseDeleteOutboundConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteOutboundConnectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpenSearch
} // namespace QtAws
