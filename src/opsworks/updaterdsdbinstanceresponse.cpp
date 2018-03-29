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

#include "updaterdsdbinstanceresponse.h"
#include "updaterdsdbinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  UpdateRdsDbInstanceResponse
 *
 * @brief  Handles OpsWorks UpdateRdsDbInstance responses.
 *
 * @see    OpsWorksClient::updateRdsDbInstance
 */

/**
 * @brief  Constructs a new UpdateRdsDbInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateRdsDbInstanceResponse::UpdateRdsDbInstanceResponse(
        const UpdateRdsDbInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new UpdateRdsDbInstanceResponsePrivate(this), parent)
{
    setRequest(new UpdateRdsDbInstanceRequest(request));
    setReply(reply);
}

const UpdateRdsDbInstanceRequest * UpdateRdsDbInstanceResponse::request() const
{
    Q_D(const UpdateRdsDbInstanceResponse);
    return static_cast<const UpdateRdsDbInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks UpdateRdsDbInstance response.
 *
 * @param  response  Response to parse.
 */
void UpdateRdsDbInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateRdsDbInstanceResponsePrivate
 *
 * @brief  Private implementation for UpdateRdsDbInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRdsDbInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateRdsDbInstanceResponse instance.
 */
UpdateRdsDbInstanceResponsePrivate::UpdateRdsDbInstanceResponsePrivate(
    UpdateRdsDbInstanceQueueResponse * const q) : UpdateRdsDbInstancePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks UpdateRdsDbInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateRdsDbInstanceResponsePrivate::UpdateRdsDbInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRdsDbInstanceResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace AWS
