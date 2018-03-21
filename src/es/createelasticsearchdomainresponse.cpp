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

#include "createelasticsearchdomainresponse.h"
#include "createelasticsearchdomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticsearchService {

/**
 * @class  CreateElasticsearchDomainResponse
 *
 * @brief  Handles ElasticsearchService CreateElasticsearchDomain responses.
 *
 * @see    ElasticsearchServiceClient::createElasticsearchDomain
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateElasticsearchDomainResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchServiceResponse(new CreateElasticsearchDomainResponsePrivate(this), parent)
{
    setRequest(new CreateElasticsearchDomainRequest(request));
    setReply(reply);
}

const CreateElasticsearchDomainRequest * CreateElasticsearchDomainResponse::request() const
{
    Q_D(const CreateElasticsearchDomainResponse);
    return static_cast<const CreateElasticsearchDomainRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticsearchService CreateElasticsearchDomain response.
 *
 * @param  response  Response to parse.
 */
void CreateElasticsearchDomainResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateElasticsearchDomainResponsePrivate
 *
 * @brief  Private implementation for CreateElasticsearchDomainResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateElasticsearchDomainResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateElasticsearchDomainResponse instance.
 */
CreateElasticsearchDomainResponsePrivate::CreateElasticsearchDomainResponsePrivate(
    CreateElasticsearchDomainQueueResponse * const q) : CreateElasticsearchDomainPrivate(q)
{

}

/**
 * @brief  Parse an ElasticsearchService CreateElasticsearchDomainResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateElasticsearchDomainResponsePrivate::CreateElasticsearchDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateElasticsearchDomainResponse"));
    /// @todo
}
