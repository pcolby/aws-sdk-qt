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

#include "createusageplankeyresponse.h"
#include "createusageplankeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  CreateUsagePlanKeyResponse
 *
 * @brief  Handles APIGateway CreateUsagePlanKey responses.
 *
 * @see    APIGatewayClient::createUsagePlanKey
 */

/**
 * @brief  Constructs a new CreateUsagePlanKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateUsagePlanKeyResponse::CreateUsagePlanKeyResponse(
        const CreateUsagePlanKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new CreateUsagePlanKeyResponsePrivate(this), parent)
{
    setRequest(new CreateUsagePlanKeyRequest(request));
    setReply(reply);
}

const CreateUsagePlanKeyRequest * CreateUsagePlanKeyResponse::request() const
{
    Q_D(const CreateUsagePlanKeyResponse);
    return static_cast<const CreateUsagePlanKeyRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway CreateUsagePlanKey response.
 *
 * @param  response  Response to parse.
 */
void CreateUsagePlanKeyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateUsagePlanKeyResponsePrivate
 *
 * @brief  Private implementation for CreateUsagePlanKeyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateUsagePlanKeyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateUsagePlanKeyResponse instance.
 */
CreateUsagePlanKeyResponsePrivate::CreateUsagePlanKeyResponsePrivate(
    CreateUsagePlanKeyQueueResponse * const q) : CreateUsagePlanKeyPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway CreateUsagePlanKeyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateUsagePlanKeyResponsePrivate::CreateUsagePlanKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUsagePlanKeyResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
