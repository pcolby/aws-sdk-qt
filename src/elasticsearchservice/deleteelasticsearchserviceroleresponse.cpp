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

#include "deleteelasticsearchserviceroleresponse.h"
#include "deleteelasticsearchserviceroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::DeleteElasticsearchServiceRoleResponse
 * \brief The DeleteElasticsearchServiceRoleResponse class provides an interace for ElasticsearchService DeleteElasticsearchServiceRole responses.
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
 * \sa ElasticsearchServiceClient::deleteElasticsearchServiceRole
 */

/*!
 * Constructs a DeleteElasticsearchServiceRoleResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteElasticsearchServiceRoleResponse::DeleteElasticsearchServiceRoleResponse(
        const DeleteElasticsearchServiceRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchServiceResponse(new DeleteElasticsearchServiceRoleResponsePrivate(this), parent)
{
    setRequest(new DeleteElasticsearchServiceRoleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteElasticsearchServiceRoleRequest * DeleteElasticsearchServiceRoleResponse::request() const
{
    return static_cast<const DeleteElasticsearchServiceRoleRequest *>(ElasticsearchServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful ElasticsearchService DeleteElasticsearchServiceRole \a response.
 */
void DeleteElasticsearchServiceRoleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteElasticsearchServiceRoleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticsearchService::DeleteElasticsearchServiceRoleResponsePrivate
 * \brief The DeleteElasticsearchServiceRoleResponsePrivate class provides private implementation for DeleteElasticsearchServiceRoleResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearchService
 */

/*!
 * Constructs a DeleteElasticsearchServiceRoleResponsePrivate object with public implementation \a q.
 */
DeleteElasticsearchServiceRoleResponsePrivate::DeleteElasticsearchServiceRoleResponsePrivate(
    DeleteElasticsearchServiceRoleResponse * const q) : ElasticsearchServiceResponsePrivate(q)
{

}

/*!
 * Parses a ElasticsearchService DeleteElasticsearchServiceRole response element from \a xml.
 */
void DeleteElasticsearchServiceRoleResponsePrivate::parseDeleteElasticsearchServiceRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteElasticsearchServiceRoleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticsearchService
} // namespace QtAws
