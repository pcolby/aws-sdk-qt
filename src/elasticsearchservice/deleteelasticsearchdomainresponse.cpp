/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteelasticsearchdomainresponse.h"
#include "deleteelasticsearchdomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::DeleteElasticsearchDomainResponse
 * \brief The DeleteElasticsearchDomainResponse class provides an interace for ElasticsearchService DeleteElasticsearchDomain responses.
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
 * \sa ElasticsearchServiceClient::deleteElasticsearchDomain
 */

/*!
 * Constructs a DeleteElasticsearchDomainResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteElasticsearchDomainResponse::DeleteElasticsearchDomainResponse(
        const DeleteElasticsearchDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchServiceResponse(new DeleteElasticsearchDomainResponsePrivate(this), parent)
{
    setRequest(new DeleteElasticsearchDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteElasticsearchDomainRequest * DeleteElasticsearchDomainResponse::request() const
{
    Q_D(const DeleteElasticsearchDomainResponse);
    return static_cast<const DeleteElasticsearchDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticsearchService DeleteElasticsearchDomain \a response.
 */
void DeleteElasticsearchDomainResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteElasticsearchDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticsearchService::DeleteElasticsearchDomainResponsePrivate
 * \brief The DeleteElasticsearchDomainResponsePrivate class provides private implementation for DeleteElasticsearchDomainResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearchService
 */

/*!
 * Constructs a DeleteElasticsearchDomainResponsePrivate object with public implementation \a q.
 */
DeleteElasticsearchDomainResponsePrivate::DeleteElasticsearchDomainResponsePrivate(
    DeleteElasticsearchDomainResponse * const q) : ElasticsearchServiceResponsePrivate(q)
{

}

/*!
 * Parses a ElasticsearchService DeleteElasticsearchDomain response element from \a xml.
 */
void DeleteElasticsearchDomainResponsePrivate::parseDeleteElasticsearchDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteElasticsearchDomainResponse"));
    /// @todo
}

} // namespace ElasticsearchService
} // namespace QtAws
