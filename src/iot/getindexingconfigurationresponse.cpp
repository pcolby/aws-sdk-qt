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

#include "getindexingconfigurationresponse.h"
#include "getindexingconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  GetIndexingConfigurationResponse
 *
 * @brief  Handles IoT GetIndexingConfiguration responses.
 *
 * @see    IoTClient::getIndexingConfiguration
 */

/**
 * @brief  Constructs a new GetIndexingConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetIndexingConfigurationResponse::GetIndexingConfigurationResponse(
        const GetIndexingConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new GetIndexingConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetIndexingConfigurationRequest(request));
    setReply(reply);
}

const GetIndexingConfigurationRequest * GetIndexingConfigurationResponse::request() const
{
    Q_D(const GetIndexingConfigurationResponse);
    return static_cast<const GetIndexingConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a IoT GetIndexingConfiguration response.
 *
 * @param  response  Response to parse.
 */
void GetIndexingConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetIndexingConfigurationResponsePrivate
 *
 * @brief  Private implementation for GetIndexingConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIndexingConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetIndexingConfigurationResponse instance.
 */
GetIndexingConfigurationResponsePrivate::GetIndexingConfigurationResponsePrivate(
    GetIndexingConfigurationQueueResponse * const q) : GetIndexingConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an IoT GetIndexingConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetIndexingConfigurationResponsePrivate::GetIndexingConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIndexingConfigurationResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
