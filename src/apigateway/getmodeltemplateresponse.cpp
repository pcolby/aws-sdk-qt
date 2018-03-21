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

#include "getmodeltemplateresponse.h"
#include "getmodeltemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  GetModelTemplateResponse
 *
 * @brief  Handles APIGateway GetModelTemplate responses.
 *
 * @see    APIGatewayClient::getModelTemplate
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetModelTemplateResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetModelTemplateResponsePrivate(this), parent)
{
    setRequest(new GetModelTemplateRequest(request));
    setReply(reply);
}

const GetModelTemplateRequest * GetModelTemplateResponse::request() const
{
    Q_D(const GetModelTemplateResponse);
    return static_cast<const GetModelTemplateRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetModelTemplate response.
 *
 * @param  response  Response to parse.
 */
void GetModelTemplateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetModelTemplateResponsePrivate
 *
 * @brief  Private implementation for GetModelTemplateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetModelTemplateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetModelTemplateResponse instance.
 */
GetModelTemplateResponsePrivate::GetModelTemplateResponsePrivate(
    GetModelTemplateQueueResponse * const q) : GetModelTemplatePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetModelTemplateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetModelTemplateResponsePrivate::GetModelTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetModelTemplateResponse"));
    /// @todo
}
