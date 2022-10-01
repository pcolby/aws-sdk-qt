// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "acceptinboundconnectionresponse.h"
#include "acceptinboundconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::AcceptInboundConnectionResponse
 * \brief The AcceptInboundConnectionResponse class provides an interace for OpenSearch AcceptInboundConnection responses.
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
 * \sa OpenSearchClient::acceptInboundConnection
 */

/*!
 * Constructs a AcceptInboundConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
AcceptInboundConnectionResponse::AcceptInboundConnectionResponse(
        const AcceptInboundConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpenSearchResponse(new AcceptInboundConnectionResponsePrivate(this), parent)
{
    setRequest(new AcceptInboundConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AcceptInboundConnectionRequest * AcceptInboundConnectionResponse::request() const
{
    Q_D(const AcceptInboundConnectionResponse);
    return static_cast<const AcceptInboundConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful OpenSearch AcceptInboundConnection \a response.
 */
void AcceptInboundConnectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AcceptInboundConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpenSearch::AcceptInboundConnectionResponsePrivate
 * \brief The AcceptInboundConnectionResponsePrivate class provides private implementation for AcceptInboundConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a AcceptInboundConnectionResponsePrivate object with public implementation \a q.
 */
AcceptInboundConnectionResponsePrivate::AcceptInboundConnectionResponsePrivate(
    AcceptInboundConnectionResponse * const q) : OpenSearchResponsePrivate(q)
{

}

/*!
 * Parses a OpenSearch AcceptInboundConnection response element from \a xml.
 */
void AcceptInboundConnectionResponsePrivate::parseAcceptInboundConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptInboundConnectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpenSearch
} // namespace QtAws
