// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelelasticsearchservicesoftwareupdateresponse.h"
#include "cancelelasticsearchservicesoftwareupdateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::CancelElasticsearchServiceSoftwareUpdateResponse
 * \brief The CancelElasticsearchServiceSoftwareUpdateResponse class provides an interace for Elasticsearch CancelElasticsearchServiceSoftwareUpdate responses.
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
 * \sa ElasticsearchClient::cancelElasticsearchServiceSoftwareUpdate
 */

/*!
 * Constructs a CancelElasticsearchServiceSoftwareUpdateResponse object for \a reply to \a request, with parent \a parent.
 */
CancelElasticsearchServiceSoftwareUpdateResponse::CancelElasticsearchServiceSoftwareUpdateResponse(
        const CancelElasticsearchServiceSoftwareUpdateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchResponse(new CancelElasticsearchServiceSoftwareUpdateResponsePrivate(this), parent)
{
    setRequest(new CancelElasticsearchServiceSoftwareUpdateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelElasticsearchServiceSoftwareUpdateRequest * CancelElasticsearchServiceSoftwareUpdateResponse::request() const
{
    Q_D(const CancelElasticsearchServiceSoftwareUpdateResponse);
    return static_cast<const CancelElasticsearchServiceSoftwareUpdateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Elasticsearch CancelElasticsearchServiceSoftwareUpdate \a response.
 */
void CancelElasticsearchServiceSoftwareUpdateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelElasticsearchServiceSoftwareUpdateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Elasticsearch::CancelElasticsearchServiceSoftwareUpdateResponsePrivate
 * \brief The CancelElasticsearchServiceSoftwareUpdateResponsePrivate class provides private implementation for CancelElasticsearchServiceSoftwareUpdateResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a CancelElasticsearchServiceSoftwareUpdateResponsePrivate object with public implementation \a q.
 */
CancelElasticsearchServiceSoftwareUpdateResponsePrivate::CancelElasticsearchServiceSoftwareUpdateResponsePrivate(
    CancelElasticsearchServiceSoftwareUpdateResponse * const q) : ElasticsearchResponsePrivate(q)
{

}

/*!
 * Parses a Elasticsearch CancelElasticsearchServiceSoftwareUpdate response element from \a xml.
 */
void CancelElasticsearchServiceSoftwareUpdateResponsePrivate::parseCancelElasticsearchServiceSoftwareUpdateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelElasticsearchServiceSoftwareUpdateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Elasticsearch
} // namespace QtAws
