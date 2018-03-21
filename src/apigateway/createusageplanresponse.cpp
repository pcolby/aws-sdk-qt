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

#include "createusageplanresponse.h"
#include "createusageplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  CreateUsagePlanResponse
 *
 * @brief  Handles APIGateway CreateUsagePlan responses.
 *
 * @see    APIGatewayClient::createUsagePlan
 */

/**
 * @brief  Constructs a new CreateUsagePlanResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateUsagePlanResponse::CreateUsagePlanResponse(
        const CreateUsagePlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new CreateUsagePlanResponsePrivate(this), parent)
{
    setRequest(new CreateUsagePlanRequest(request));
    setReply(reply);
}

const CreateUsagePlanRequest * CreateUsagePlanResponse::request() const
{
    Q_D(const CreateUsagePlanResponse);
    return static_cast<const CreateUsagePlanRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway CreateUsagePlan response.
 *
 * @param  response  Response to parse.
 */
void CreateUsagePlanResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateUsagePlanResponsePrivate
 *
 * @brief  Private implementation for CreateUsagePlanResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateUsagePlanResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateUsagePlanResponse instance.
 */
CreateUsagePlanResponsePrivate::CreateUsagePlanResponsePrivate(
    CreateUsagePlanQueueResponse * const q) : CreateUsagePlanPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway CreateUsagePlanResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateUsagePlanResponsePrivate::CreateUsagePlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUsagePlanResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
