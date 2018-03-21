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

#include "createmaintenancewindowresponse.h"
#include "createmaintenancewindowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  CreateMaintenanceWindowResponse
 *
 * @brief  Handles SSM CreateMaintenanceWindow responses.
 *
 * @see    SSMClient::createMaintenanceWindow
 */

/**
 * @brief  Constructs a new CreateMaintenanceWindowResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateMaintenanceWindowResponse::CreateMaintenanceWindowResponse(
        const CreateMaintenanceWindowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new CreateMaintenanceWindowResponsePrivate(this), parent)
{
    setRequest(new CreateMaintenanceWindowRequest(request));
    setReply(reply);
}

const CreateMaintenanceWindowRequest * CreateMaintenanceWindowResponse::request() const
{
    Q_D(const CreateMaintenanceWindowResponse);
    return static_cast<const CreateMaintenanceWindowRequest *>(d->request);
}

/**
 * @brief  Parse a SSM CreateMaintenanceWindow response.
 *
 * @param  response  Response to parse.
 */
void CreateMaintenanceWindowResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateMaintenanceWindowResponsePrivate
 *
 * @brief  Private implementation for CreateMaintenanceWindowResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateMaintenanceWindowResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateMaintenanceWindowResponse instance.
 */
CreateMaintenanceWindowResponsePrivate::CreateMaintenanceWindowResponsePrivate(
    CreateMaintenanceWindowQueueResponse * const q) : CreateMaintenanceWindowPrivate(q)
{

}

/**
 * @brief  Parse an SSM CreateMaintenanceWindowResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateMaintenanceWindowResponsePrivate::CreateMaintenanceWindowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMaintenanceWindowResponse"));
    /// @todo
}

} // namespace SSM
} // namespace AWS
