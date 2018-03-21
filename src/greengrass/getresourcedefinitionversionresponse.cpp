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

#include "getresourcedefinitionversionresponse.h"
#include "getresourcedefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  GetResourceDefinitionVersionResponse
 *
 * @brief  Handles Greengrass GetResourceDefinitionVersion responses.
 *
 * @see    GreengrassClient::getResourceDefinitionVersion
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetResourceDefinitionVersionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetResourceDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new GetResourceDefinitionVersionRequest(request));
    setReply(reply);
}

const GetResourceDefinitionVersionRequest * GetResourceDefinitionVersionResponse::request() const
{
    Q_D(const GetResourceDefinitionVersionResponse);
    return static_cast<const GetResourceDefinitionVersionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass GetResourceDefinitionVersion response.
 *
 * @param  response  Response to parse.
 */
void GetResourceDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetResourceDefinitionVersionResponsePrivate
 *
 * @brief  Private implementation for GetResourceDefinitionVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetResourceDefinitionVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetResourceDefinitionVersionResponse instance.
 */
GetResourceDefinitionVersionResponsePrivate::GetResourceDefinitionVersionResponsePrivate(
    GetResourceDefinitionVersionQueueResponse * const q) : GetResourceDefinitionVersionPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass GetResourceDefinitionVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetResourceDefinitionVersionResponsePrivate::GetResourceDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourceDefinitionVersionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace AWS
