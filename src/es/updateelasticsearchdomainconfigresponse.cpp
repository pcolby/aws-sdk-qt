/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updateelasticsearchdomainconfigresponse.h"
#include "updateelasticsearchdomainconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticsearchService {

/**
 * @class  UpdateElasticsearchDomainConfigResponse
 *
 * @brief  Handles ElasticsearchService UpdateElasticsearchDomainConfig responses.
 *
 * @see    ElasticsearchServiceClient::updateElasticsearchDomainConfig
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateElasticsearchDomainConfigResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchServiceResponse(new UpdateElasticsearchDomainConfigResponsePrivate(this), parent)
{
    setRequest(new UpdateElasticsearchDomainConfigRequest(request));
    setReply(reply);
}

const UpdateElasticsearchDomainConfigRequest * UpdateElasticsearchDomainConfigResponse::request() const
{
    Q_D(const UpdateElasticsearchDomainConfigResponse);
    return static_cast<const UpdateElasticsearchDomainConfigRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticsearchService UpdateElasticsearchDomainConfig response.
 *
 * @param  response  Response to parse.
 */
void UpdateElasticsearchDomainConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateElasticsearchDomainConfigResponsePrivate
 *
 * @brief  Private implementation for UpdateElasticsearchDomainConfigResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateElasticsearchDomainConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateElasticsearchDomainConfigResponse instance.
 */
UpdateElasticsearchDomainConfigResponsePrivate::UpdateElasticsearchDomainConfigResponsePrivate(
    UpdateElasticsearchDomainConfigQueueResponse * const q) : UpdateElasticsearchDomainConfigPrivate(q)
{

}

/**
 * @brief  Parse an ElasticsearchService UpdateElasticsearchDomainConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateElasticsearchDomainConfigResponsePrivate::UpdateElasticsearchDomainConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateElasticsearchDomainConfigResponse"));
    /// @todo
}
