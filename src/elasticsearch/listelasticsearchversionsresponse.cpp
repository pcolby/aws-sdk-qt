// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listelasticsearchversionsresponse.h"
#include "listelasticsearchversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::ListElasticsearchVersionsResponse
 * \brief The ListElasticsearchVersionsResponse class provides an interace for Elasticsearch ListElasticsearchVersions responses.
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
 * \sa ElasticsearchClient::listElasticsearchVersions
 */

/*!
 * Constructs a ListElasticsearchVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListElasticsearchVersionsResponse::ListElasticsearchVersionsResponse(
        const ListElasticsearchVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchResponse(new ListElasticsearchVersionsResponsePrivate(this), parent)
{
    setRequest(new ListElasticsearchVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListElasticsearchVersionsRequest * ListElasticsearchVersionsResponse::request() const
{
    Q_D(const ListElasticsearchVersionsResponse);
    return static_cast<const ListElasticsearchVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Elasticsearch ListElasticsearchVersions \a response.
 */
void ListElasticsearchVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListElasticsearchVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Elasticsearch::ListElasticsearchVersionsResponsePrivate
 * \brief The ListElasticsearchVersionsResponsePrivate class provides private implementation for ListElasticsearchVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a ListElasticsearchVersionsResponsePrivate object with public implementation \a q.
 */
ListElasticsearchVersionsResponsePrivate::ListElasticsearchVersionsResponsePrivate(
    ListElasticsearchVersionsResponse * const q) : ElasticsearchResponsePrivate(q)
{

}

/*!
 * Parses a Elasticsearch ListElasticsearchVersions response element from \a xml.
 */
void ListElasticsearchVersionsResponsePrivate::parseListElasticsearchVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListElasticsearchVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Elasticsearch
} // namespace QtAws
