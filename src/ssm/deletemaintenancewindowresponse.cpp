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

#include "deletemaintenancewindowresponse.h"
#include "deletemaintenancewindowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  DeleteMaintenanceWindowResponse
 *
 * @brief  Handles SSM DeleteMaintenanceWindow responses.
 *
 * @see    SSMClient::deleteMaintenanceWindow
 */

/**
 * @brief  Constructs a new DeleteMaintenanceWindowResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteMaintenanceWindowResponse::DeleteMaintenanceWindowResponse(
        const DeleteMaintenanceWindowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DeleteMaintenanceWindowResponsePrivate(this), parent)
{
    setRequest(new DeleteMaintenanceWindowRequest(request));
    setReply(reply);
}

const DeleteMaintenanceWindowRequest * DeleteMaintenanceWindowResponse::request() const
{
    Q_D(const DeleteMaintenanceWindowResponse);
    return static_cast<const DeleteMaintenanceWindowRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DeleteMaintenanceWindow response.
 *
 * @param  response  Response to parse.
 */
void DeleteMaintenanceWindowResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteMaintenanceWindowResponsePrivate
 *
 * @brief  Private implementation for DeleteMaintenanceWindowResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMaintenanceWindowResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteMaintenanceWindowResponse instance.
 */
DeleteMaintenanceWindowResponsePrivate::DeleteMaintenanceWindowResponsePrivate(
    DeleteMaintenanceWindowResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM DeleteMaintenanceWindowResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteMaintenanceWindowResponsePrivate::DeleteMaintenanceWindowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMaintenanceWindowResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
