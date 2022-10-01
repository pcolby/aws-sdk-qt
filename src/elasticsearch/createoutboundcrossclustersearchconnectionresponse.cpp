// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createoutboundcrossclustersearchconnectionresponse.h"
#include "createoutboundcrossclustersearchconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::CreateOutboundCrossClusterSearchConnectionResponse
 * \brief The CreateOutboundCrossClusterSearchConnectionResponse class provides an interace for Elasticsearch CreateOutboundCrossClusterSearchConnection responses.
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
 * \sa ElasticsearchClient::createOutboundCrossClusterSearchConnection
 */

/*!
 * Constructs a CreateOutboundCrossClusterSearchConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateOutboundCrossClusterSearchConnectionResponse::CreateOutboundCrossClusterSearchConnectionResponse(
        const CreateOutboundCrossClusterSearchConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchResponse(new CreateOutboundCrossClusterSearchConnectionResponsePrivate(this), parent)
{
    setRequest(new CreateOutboundCrossClusterSearchConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateOutboundCrossClusterSearchConnectionRequest * CreateOutboundCrossClusterSearchConnectionResponse::request() const
{
    Q_D(const CreateOutboundCrossClusterSearchConnectionResponse);
    return static_cast<const CreateOutboundCrossClusterSearchConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Elasticsearch CreateOutboundCrossClusterSearchConnection \a response.
 */
void CreateOutboundCrossClusterSearchConnectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateOutboundCrossClusterSearchConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Elasticsearch::CreateOutboundCrossClusterSearchConnectionResponsePrivate
 * \brief The CreateOutboundCrossClusterSearchConnectionResponsePrivate class provides private implementation for CreateOutboundCrossClusterSearchConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a CreateOutboundCrossClusterSearchConnectionResponsePrivate object with public implementation \a q.
 */
CreateOutboundCrossClusterSearchConnectionResponsePrivate::CreateOutboundCrossClusterSearchConnectionResponsePrivate(
    CreateOutboundCrossClusterSearchConnectionResponse * const q) : ElasticsearchResponsePrivate(q)
{

}

/*!
 * Parses a Elasticsearch CreateOutboundCrossClusterSearchConnection response element from \a xml.
 */
void CreateOutboundCrossClusterSearchConnectionResponsePrivate::parseCreateOutboundCrossClusterSearchConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateOutboundCrossClusterSearchConnectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Elasticsearch
} // namespace QtAws
