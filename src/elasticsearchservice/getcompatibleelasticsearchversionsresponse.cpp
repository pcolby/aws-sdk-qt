/*
    Copyright 2013-2018 Paul Colby

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

#include "getcompatibleelasticsearchversionsresponse.h"
#include "getcompatibleelasticsearchversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::GetCompatibleElasticsearchVersionsResponse
 * \brief The GetCompatibleElasticsearchVersionsResponse class provides an interace for ElasticsearchService GetCompatibleElasticsearchVersions responses.
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
 * \sa ElasticsearchServiceClient::getCompatibleElasticsearchVersions
 */

/*!
 * Constructs a GetCompatibleElasticsearchVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetCompatibleElasticsearchVersionsResponse::GetCompatibleElasticsearchVersionsResponse(
        const GetCompatibleElasticsearchVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchServiceResponse(new GetCompatibleElasticsearchVersionsResponsePrivate(this), parent)
{
    setRequest(new GetCompatibleElasticsearchVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCompatibleElasticsearchVersionsRequest * GetCompatibleElasticsearchVersionsResponse::request() const
{
    Q_D(const GetCompatibleElasticsearchVersionsResponse);
    return static_cast<const GetCompatibleElasticsearchVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticsearchService GetCompatibleElasticsearchVersions \a response.
 */
void GetCompatibleElasticsearchVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCompatibleElasticsearchVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticsearchService::GetCompatibleElasticsearchVersionsResponsePrivate
 * \brief The GetCompatibleElasticsearchVersionsResponsePrivate class provides private implementation for GetCompatibleElasticsearchVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearchService
 */

/*!
 * Constructs a GetCompatibleElasticsearchVersionsResponsePrivate object with public implementation \a q.
 */
GetCompatibleElasticsearchVersionsResponsePrivate::GetCompatibleElasticsearchVersionsResponsePrivate(
    GetCompatibleElasticsearchVersionsResponse * const q) : ElasticsearchServiceResponsePrivate(q)
{

}

/*!
 * Parses a ElasticsearchService GetCompatibleElasticsearchVersions response element from \a xml.
 */
void GetCompatibleElasticsearchVersionsResponsePrivate::parseGetCompatibleElasticsearchVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCompatibleElasticsearchVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticsearchService
} // namespace QtAws
