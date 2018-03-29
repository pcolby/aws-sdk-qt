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

#include "updateinstanceresponse.h"
#include "updateinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  UpdateInstanceResponse
 *
 * @brief  Handles OpsWorks UpdateInstance responses.
 *
 * @see    OpsWorksClient::updateInstance
 */

/**
 * @brief  Constructs a new UpdateInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateInstanceResponse::UpdateInstanceResponse(
        const UpdateInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new UpdateInstanceResponsePrivate(this), parent)
{
    setRequest(new UpdateInstanceRequest(request));
    setReply(reply);
}

const UpdateInstanceRequest * UpdateInstanceResponse::request() const
{
    Q_D(const UpdateInstanceResponse);
    return static_cast<const UpdateInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks UpdateInstance response.
 *
 * @param  response  Response to parse.
 */
void UpdateInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateInstanceResponsePrivate
 *
 * @brief  Private implementation for UpdateInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateInstanceResponse instance.
 */
UpdateInstanceResponsePrivate::UpdateInstanceResponsePrivate(
    UpdateInstanceQueueResponse * const q) : UpdateInstancePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks UpdateInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateInstanceResponsePrivate::UpdateInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateInstanceResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
