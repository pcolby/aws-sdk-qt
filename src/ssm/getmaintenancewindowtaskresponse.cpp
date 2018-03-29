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

#include "getmaintenancewindowtaskresponse.h"
#include "getmaintenancewindowtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  GetMaintenanceWindowTaskResponse
 *
 * @brief  Handles SSM GetMaintenanceWindowTask responses.
 *
 * @see    SSMClient::getMaintenanceWindowTask
 */

/**
 * @brief  Constructs a new GetMaintenanceWindowTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetMaintenanceWindowTaskResponse::GetMaintenanceWindowTaskResponse(
        const GetMaintenanceWindowTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new GetMaintenanceWindowTaskResponsePrivate(this), parent)
{
    setRequest(new GetMaintenanceWindowTaskRequest(request));
    setReply(reply);
}

const GetMaintenanceWindowTaskRequest * GetMaintenanceWindowTaskResponse::request() const
{
    Q_D(const GetMaintenanceWindowTaskResponse);
    return static_cast<const GetMaintenanceWindowTaskRequest *>(d->request);
}

/**
 * @brief  Parse a SSM GetMaintenanceWindowTask response.
 *
 * @param  response  Response to parse.
 */
void GetMaintenanceWindowTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetMaintenanceWindowTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetMaintenanceWindowTaskResponsePrivate
 *
 * @brief  Private implementation for GetMaintenanceWindowTaskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMaintenanceWindowTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetMaintenanceWindowTaskResponse instance.
 */
GetMaintenanceWindowTaskResponsePrivate::GetMaintenanceWindowTaskResponsePrivate(
    GetMaintenanceWindowTaskResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM GetMaintenanceWindowTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetMaintenanceWindowTaskResponsePrivate::parseGetMaintenanceWindowTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMaintenanceWindowTaskResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
