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

/**
 * @class  DeleteElasticsearchDomainResponse
 *
 * @brief  Handles ElasticsearchService DeleteElasticsearchDomain responses.
 *
 * @see    ElasticsearchServiceClient::deleteElasticsearchDomain
 */

/**
 * @brief  Constructs a new DeleteElasticsearchDomainResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const DeleteElasticsearchDomainRequest * DeleteElasticsearchDomainResponse::request() const
{
    Q_D(const DeleteElasticsearchDomainResponse);
    return static_cast<const DeleteElasticsearchDomainRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticsearchService DeleteElasticsearchDomain response.
 *
 * @param  response  Response to parse.
 */
void DeleteElasticsearchDomainResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteElasticsearchDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteElasticsearchDomainResponsePrivate
 *
 * @brief  Private implementation for DeleteElasticsearchDomainResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteElasticsearchDomainResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteElasticsearchDomainResponse instance.
 */
DeleteElasticsearchDomainResponsePrivate::DeleteElasticsearchDomainResponsePrivate(
    DeleteElasticsearchDomainResponse * const q) : ElasticsearchServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticsearchService DeleteElasticsearchDomainResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteElasticsearchDomainResponsePrivate::parseDeleteElasticsearchDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteElasticsearchDomainResponse"));
    /// @todo
}

} // namespace ElasticsearchService
} // namespace QtAws
