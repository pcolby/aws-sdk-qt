/*
    Copyright 2013-2020 Paul Colby

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

#include "listelasticsearchversionsresponse.h"
#include "listelasticsearchversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::ListElasticsearchVersionsResponse
 * \brief The ListElasticsearchVersionsResponse class provides an interace for ElasticsearchService ListElasticsearchVersions responses.
 *
 * \inmodule QtAwsElasticsearchService
 *
 *  <fullname>Amazon Elasticsearch Configuration Service</fullname>
 * 
 *  Use the Amazon Elasticsearch configuration API to create, configure, and manage Elasticsearch
 * 
 *  domains>
 * 
 *  The endpoint for configuration service requests is region-specific: es.<i>region</i>.amazonaws.com. For example,
 *  es.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elasticsearch-service-regions" target="_blank">Regions and
 *
 * \sa ElasticsearchServiceClient::listElasticsearchVersions
 */

/*!
 * Constructs a ListElasticsearchVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListElasticsearchVersionsResponse::ListElasticsearchVersionsResponse(
        const ListElasticsearchVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchServiceResponse(new ListElasticsearchVersionsResponsePrivate(this), parent)
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
 * Parses a successful ElasticsearchService ListElasticsearchVersions \a response.
 */
void ListElasticsearchVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListElasticsearchVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticsearchService::ListElasticsearchVersionsResponsePrivate
 * \brief The ListElasticsearchVersionsResponsePrivate class provides private implementation for ListElasticsearchVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearchService
 */

/*!
 * Constructs a ListElasticsearchVersionsResponsePrivate object with public implementation \a q.
 */
ListElasticsearchVersionsResponsePrivate::ListElasticsearchVersionsResponsePrivate(
    ListElasticsearchVersionsResponse * const q) : ElasticsearchServiceResponsePrivate(q)
{

}

/*!
 * Parses a ElasticsearchService ListElasticsearchVersions response element from \a xml.
 */
void ListElasticsearchVersionsResponsePrivate::parseListElasticsearchVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListElasticsearchVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticsearchService
} // namespace QtAws
