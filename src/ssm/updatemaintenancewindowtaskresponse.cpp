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

#include "updatemaintenancewindowtaskresponse.h"
#include "updatemaintenancewindowtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  UpdateMaintenanceWindowTaskResponse
 *
 * @brief  Handles SSM UpdateMaintenanceWindowTask responses.
 *
 * @see    SSMClient::updateMaintenanceWindowTask
 */

/**
 * @brief  Constructs a new UpdateMaintenanceWindowTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateMaintenanceWindowTaskResponse::UpdateMaintenanceWindowTaskResponse(
        const UpdateMaintenanceWindowTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new UpdateMaintenanceWindowTaskResponsePrivate(this), parent)
{
    setRequest(new UpdateMaintenanceWindowTaskRequest(request));
    setReply(reply);
}

const UpdateMaintenanceWindowTaskRequest * UpdateMaintenanceWindowTaskResponse::request() const
{
    Q_D(const UpdateMaintenanceWindowTaskResponse);
    return static_cast<const UpdateMaintenanceWindowTaskRequest *>(d->request);
}

/**
 * @brief  Parse a SSM UpdateMaintenanceWindowTask response.
 *
 * @param  response  Response to parse.
 */
void UpdateMaintenanceWindowTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateMaintenanceWindowTaskResponsePrivate
 *
 * @brief  Private implementation for UpdateMaintenanceWindowTaskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateMaintenanceWindowTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateMaintenanceWindowTaskResponse instance.
 */
UpdateMaintenanceWindowTaskResponsePrivate::UpdateMaintenanceWindowTaskResponsePrivate(
    UpdateMaintenanceWindowTaskQueueResponse * const q) : UpdateMaintenanceWindowTaskPrivate(q)
{

}

/**
 * @brief  Parse an SSM UpdateMaintenanceWindowTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateMaintenanceWindowTaskResponsePrivate::UpdateMaintenanceWindowTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMaintenanceWindowTaskResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
