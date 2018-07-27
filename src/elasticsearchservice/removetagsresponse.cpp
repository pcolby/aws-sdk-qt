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

#include "removetagsresponse.h"
#include "removetagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::RemoveTagsResponse
 * \brief The RemoveTagsResponse class provides an interace for ElasticsearchService RemoveTags responses.
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
 * \sa ElasticsearchServiceClient::removeTags
 */

/*!
 * Constructs a RemoveTagsResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveTagsResponse::RemoveTagsResponse(
        const RemoveTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchServiceResponse(new RemoveTagsResponsePrivate(this), parent)
{
    setRequest(new RemoveTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveTagsRequest * RemoveTagsResponse::request() const
{
    Q_D(const RemoveTagsResponse);
    return static_cast<const RemoveTagsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticsearchService RemoveTags \a response.
 */
void RemoveTagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticsearchService::RemoveTagsResponsePrivate
 * \brief The RemoveTagsResponsePrivate class provides private implementation for RemoveTagsResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearchService
 */

/*!
 * Constructs a RemoveTagsResponsePrivate object with public implementation \a q.
 */
RemoveTagsResponsePrivate::RemoveTagsResponsePrivate(
    RemoveTagsResponse * const q) : ElasticsearchServiceResponsePrivate(q)
{

}

/*!
 * Parses a ElasticsearchService RemoveTags response element from \a xml.
 */
void RemoveTagsResponsePrivate::parseRemoveTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveTagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticsearchService
} // namespace QtAws
