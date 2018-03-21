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

#include "getmaintenancewindowresponse.h"
#include "getmaintenancewindowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  GetMaintenanceWindowResponse
 *
 * @brief  Handles SSM GetMaintenanceWindow responses.
 *
 * @see    SSMClient::getMaintenanceWindow
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetMaintenanceWindowResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new GetMaintenanceWindowResponsePrivate(this), parent)
{
    setRequest(new GetMaintenanceWindowRequest(request));
    setReply(reply);
}

const GetMaintenanceWindowRequest * GetMaintenanceWindowResponse::request() const
{
    Q_D(const GetMaintenanceWindowResponse);
    return static_cast<const GetMaintenanceWindowRequest *>(d->request);
}

/**
 * @brief  Parse a SSM GetMaintenanceWindow response.
 *
 * @param  response  Response to parse.
 */
void GetMaintenanceWindowResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetMaintenanceWindowResponsePrivate
 *
 * @brief  Private implementation for GetMaintenanceWindowResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMaintenanceWindowResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetMaintenanceWindowResponse instance.
 */
GetMaintenanceWindowResponsePrivate::GetMaintenanceWindowResponsePrivate(
    GetMaintenanceWindowQueueResponse * const q) : GetMaintenanceWindowPrivate(q)
{

}

/**
 * @brief  Parse an SSM GetMaintenanceWindowResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetMaintenanceWindowResponsePrivate::GetMaintenanceWindowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMaintenanceWindowResponse"));
    /// @todo
}
