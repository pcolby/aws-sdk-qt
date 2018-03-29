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

#include "startmaintenanceresponse.h"
#include "startmaintenanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorksCM {

/**
 * @class  StartMaintenanceResponse
 *
 * @brief  Handles OpsWorksCM StartMaintenance responses.
 *
 * @see    OpsWorksCMClient::startMaintenance
 */

/**
 * @brief  Constructs a new StartMaintenanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartMaintenanceResponse::StartMaintenanceResponse(
        const StartMaintenanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksCMResponse(new StartMaintenanceResponsePrivate(this), parent)
{
    setRequest(new StartMaintenanceRequest(request));
    setReply(reply);
}

const StartMaintenanceRequest * StartMaintenanceResponse::request() const
{
    Q_D(const StartMaintenanceResponse);
    return static_cast<const StartMaintenanceRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorksCM StartMaintenance response.
 *
 * @param  response  Response to parse.
 */
void StartMaintenanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartMaintenanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartMaintenanceResponsePrivate
 *
 * @brief  Private implementation for StartMaintenanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartMaintenanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartMaintenanceResponse instance.
 */
StartMaintenanceResponsePrivate::StartMaintenanceResponsePrivate(
    StartMaintenanceResponse * const q) : OpsWorksCMResponsePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorksCM StartMaintenanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartMaintenanceResponsePrivate::parseStartMaintenanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartMaintenanceResponse"));
    /// @todo
}

} // namespace OpsWorksCM
} // namespace QtAws
