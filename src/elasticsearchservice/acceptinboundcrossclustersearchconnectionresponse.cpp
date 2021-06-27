/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "acceptinboundcrossclustersearchconnectionresponse.h"
#include "acceptinboundcrossclustersearchconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::AcceptInboundCrossClusterSearchConnectionResponse
 * \brief The AcceptInboundCrossClusterSearchConnectionResponse class provides an interace for ElasticsearchService AcceptInboundCrossClusterSearchConnection responses.
 *
 * \inmodule QtAwsElasticsearchService
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
 * \sa ElasticsearchServiceClient::acceptInboundCrossClusterSearchConnection
 */

/*!
 * Constructs a AcceptInboundCrossClusterSearchConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
AcceptInboundCrossClusterSearchConnectionResponse::AcceptInboundCrossClusterSearchConnectionResponse(
        const AcceptInboundCrossClusterSearchConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchServiceResponse(new AcceptInboundCrossClusterSearchConnectionResponsePrivate(this), parent)
{
    setRequest(new AcceptInboundCrossClusterSearchConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AcceptInboundCrossClusterSearchConnectionRequest * AcceptInboundCrossClusterSearchConnectionResponse::request() const
{
    return static_cast<const AcceptInboundCrossClusterSearchConnectionRequest *>(ElasticsearchServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful ElasticsearchService AcceptInboundCrossClusterSearchConnection \a response.
 */
void AcceptInboundCrossClusterSearchConnectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AcceptInboundCrossClusterSearchConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticsearchService::AcceptInboundCrossClusterSearchConnectionResponsePrivate
 * \brief The AcceptInboundCrossClusterSearchConnectionResponsePrivate class provides private implementation for AcceptInboundCrossClusterSearchConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearchService
 */

/*!
 * Constructs a AcceptInboundCrossClusterSearchConnectionResponsePrivate object with public implementation \a q.
 */
AcceptInboundCrossClusterSearchConnectionResponsePrivate::AcceptInboundCrossClusterSearchConnectionResponsePrivate(
    AcceptInboundCrossClusterSearchConnectionResponse * const q) : ElasticsearchServiceResponsePrivate(q)
{

}

/*!
 * Parses a ElasticsearchService AcceptInboundCrossClusterSearchConnection response element from \a xml.
 */
void AcceptInboundCrossClusterSearchConnectionResponsePrivate::parseAcceptInboundCrossClusterSearchConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptInboundCrossClusterSearchConnectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticsearchService
} // namespace QtAws
