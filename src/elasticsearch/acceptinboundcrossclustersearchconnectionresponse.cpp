// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "acceptinboundcrossclustersearchconnectionresponse.h"
#include "acceptinboundcrossclustersearchconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::AcceptInboundCrossClusterSearchConnectionResponse
 * \brief The AcceptInboundCrossClusterSearchConnectionResponse class provides an interace for Elasticsearch AcceptInboundCrossClusterSearchConnection responses.
 *
 * \inmodule QtAwsElasticsearch
 *
 *  <fullname>Amazon Elasticsearch Configuration Service</fullname>
 * 
 *  Use the Amazon Elasticsearch Configuration API to create, configure, and manage Elasticsearch
 * 
 *  domains>
 * 
 *  For sample code that uses the Configuration API, see the <a
 *  href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-configuration-samples.html">Amazon
 *  Elasticsearch Service Developer Guide</a>. The guide also contains <a
 *  href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-request-signing.html">sample code for
 *  sending signed HTTP requests to the Elasticsearch
 * 
 *  APIs</a>>
 * 
 *  The endpoint for configuration service requests is region-specific: es.<i>region</i>.amazonaws.com. For example,
 *  es.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elasticsearch-service-regions" target="_blank">Regions and
 *
 * \sa ElasticsearchClient::acceptInboundCrossClusterSearchConnection
 */

/*!
 * Constructs a AcceptInboundCrossClusterSearchConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
AcceptInboundCrossClusterSearchConnectionResponse::AcceptInboundCrossClusterSearchConnectionResponse(
        const AcceptInboundCrossClusterSearchConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchResponse(new AcceptInboundCrossClusterSearchConnectionResponsePrivate(this), parent)
{
    setRequest(new AcceptInboundCrossClusterSearchConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AcceptInboundCrossClusterSearchConnectionRequest * AcceptInboundCrossClusterSearchConnectionResponse::request() const
{
    Q_D(const AcceptInboundCrossClusterSearchConnectionResponse);
    return static_cast<const AcceptInboundCrossClusterSearchConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Elasticsearch AcceptInboundCrossClusterSearchConnection \a response.
 */
void AcceptInboundCrossClusterSearchConnectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AcceptInboundCrossClusterSearchConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Elasticsearch::AcceptInboundCrossClusterSearchConnectionResponsePrivate
 * \brief The AcceptInboundCrossClusterSearchConnectionResponsePrivate class provides private implementation for AcceptInboundCrossClusterSearchConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a AcceptInboundCrossClusterSearchConnectionResponsePrivate object with public implementation \a q.
 */
AcceptInboundCrossClusterSearchConnectionResponsePrivate::AcceptInboundCrossClusterSearchConnectionResponsePrivate(
    AcceptInboundCrossClusterSearchConnectionResponse * const q) : ElasticsearchResponsePrivate(q)
{

}

/*!
 * Parses a Elasticsearch AcceptInboundCrossClusterSearchConnection response element from \a xml.
 */
void AcceptInboundCrossClusterSearchConnectionResponsePrivate::parseAcceptInboundCrossClusterSearchConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptInboundCrossClusterSearchConnectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Elasticsearch
} // namespace QtAws
