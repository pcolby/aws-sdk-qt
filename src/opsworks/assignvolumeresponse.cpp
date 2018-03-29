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

#include "assignvolumeresponse.h"
#include "assignvolumeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  AssignVolumeResponse
 *
 * @brief  Handles OpsWorks AssignVolume responses.
 *
 * @see    OpsWorksClient::assignVolume
 */

/**
 * @brief  Constructs a new AssignVolumeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssignVolumeResponse::AssignVolumeResponse(
        const AssignVolumeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new AssignVolumeResponsePrivate(this), parent)
{
    setRequest(new AssignVolumeRequest(request));
    setReply(reply);
}

const AssignVolumeRequest * AssignVolumeResponse::request() const
{
    Q_D(const AssignVolumeResponse);
    return static_cast<const AssignVolumeRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks AssignVolume response.
 *
 * @param  response  Response to parse.
 */
void AssignVolumeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssignVolumeResponsePrivate
 *
 * @brief  Private implementation for AssignVolumeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssignVolumeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssignVolumeResponse instance.
 */
AssignVolumeResponsePrivate::AssignVolumeResponsePrivate(
    AssignVolumeQueueResponse * const q) : AssignVolumePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks AssignVolumeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssignVolumeResponsePrivate::AssignVolumeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssignVolumeResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace AWS
