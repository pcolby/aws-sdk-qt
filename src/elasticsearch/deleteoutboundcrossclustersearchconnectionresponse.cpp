// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteoutboundcrossclustersearchconnectionresponse.h"
#include "deleteoutboundcrossclustersearchconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::DeleteOutboundCrossClusterSearchConnectionResponse
 * \brief The DeleteOutboundCrossClusterSearchConnectionResponse class provides an interace for Elasticsearch DeleteOutboundCrossClusterSearchConnection responses.
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
 * \sa ElasticsearchClient::deleteOutboundCrossClusterSearchConnection
 */

/*!
 * Constructs a DeleteOutboundCrossClusterSearchConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteOutboundCrossClusterSearchConnectionResponse::DeleteOutboundCrossClusterSearchConnectionResponse(
        const DeleteOutboundCrossClusterSearchConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchResponse(new DeleteOutboundCrossClusterSearchConnectionResponsePrivate(this), parent)
{
    setRequest(new DeleteOutboundCrossClusterSearchConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteOutboundCrossClusterSearchConnectionRequest * DeleteOutboundCrossClusterSearchConnectionResponse::request() const
{
    Q_D(const DeleteOutboundCrossClusterSearchConnectionResponse);
    return static_cast<const DeleteOutboundCrossClusterSearchConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Elasticsearch DeleteOutboundCrossClusterSearchConnection \a response.
 */
void DeleteOutboundCrossClusterSearchConnectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteOutboundCrossClusterSearchConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Elasticsearch::DeleteOutboundCrossClusterSearchConnectionResponsePrivate
 * \brief The DeleteOutboundCrossClusterSearchConnectionResponsePrivate class provides private implementation for DeleteOutboundCrossClusterSearchConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a DeleteOutboundCrossClusterSearchConnectionResponsePrivate object with public implementation \a q.
 */
DeleteOutboundCrossClusterSearchConnectionResponsePrivate::DeleteOutboundCrossClusterSearchConnectionResponsePrivate(
    DeleteOutboundCrossClusterSearchConnectionResponse * const q) : ElasticsearchResponsePrivate(q)
{

}

/*!
 * Parses a Elasticsearch DeleteOutboundCrossClusterSearchConnection response element from \a xml.
 */
void DeleteOutboundCrossClusterSearchConnectionResponsePrivate::parseDeleteOutboundCrossClusterSearchConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteOutboundCrossClusterSearchConnectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Elasticsearch
} // namespace QtAws
