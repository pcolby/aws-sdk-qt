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

#include "getdevicedefinitionversionresponse.h"
#include "getdevicedefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  GetDeviceDefinitionVersionResponse
 *
 * @brief  Handles Greengrass GetDeviceDefinitionVersion responses.
 *
 * @see    GreengrassClient::getDeviceDefinitionVersion
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDeviceDefinitionVersionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetDeviceDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new GetDeviceDefinitionVersionRequest(request));
    setReply(reply);
}

const GetDeviceDefinitionVersionRequest * GetDeviceDefinitionVersionResponse::request() const
{
    Q_D(const GetDeviceDefinitionVersionResponse);
    return static_cast<const GetDeviceDefinitionVersionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass GetDeviceDefinitionVersion response.
 *
 * @param  response  Response to parse.
 */
void GetDeviceDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDeviceDefinitionVersionResponsePrivate
 *
 * @brief  Private implementation for GetDeviceDefinitionVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDeviceDefinitionVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDeviceDefinitionVersionResponse instance.
 */
GetDeviceDefinitionVersionResponsePrivate::GetDeviceDefinitionVersionResponsePrivate(
    GetDeviceDefinitionVersionQueueResponse * const q) : GetDeviceDefinitionVersionPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass GetDeviceDefinitionVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDeviceDefinitionVersionResponsePrivate::GetDeviceDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeviceDefinitionVersionResponse"));
    /// @todo
}
