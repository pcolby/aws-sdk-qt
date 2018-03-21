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

#include "creategraphqlapiresponse.h"
#include "creategraphqlapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AppSync {

/**
 * @class  CreateGraphqlApiResponse
 *
 * @brief  Handles AppSync CreateGraphqlApi responses.
 *
 * @see    AppSyncClient::createGraphqlApi
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateGraphqlApiResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new CreateGraphqlApiResponsePrivate(this), parent)
{
    setRequest(new CreateGraphqlApiRequest(request));
    setReply(reply);
}

const CreateGraphqlApiRequest * CreateGraphqlApiResponse::request() const
{
    Q_D(const CreateGraphqlApiResponse);
    return static_cast<const CreateGraphqlApiRequest *>(d->request);
}

/**
 * @brief  Parse a AppSync CreateGraphqlApi response.
 *
 * @param  response  Response to parse.
 */
void CreateGraphqlApiResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateGraphqlApiResponsePrivate
 *
 * @brief  Private implementation for CreateGraphqlApiResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateGraphqlApiResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateGraphqlApiResponse instance.
 */
CreateGraphqlApiResponsePrivate::CreateGraphqlApiResponsePrivate(
    CreateGraphqlApiQueueResponse * const q) : CreateGraphqlApiPrivate(q)
{

}

/**
 * @brief  Parse an AppSync CreateGraphqlApiResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateGraphqlApiResponsePrivate::CreateGraphqlApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGraphqlApiResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace AWS
