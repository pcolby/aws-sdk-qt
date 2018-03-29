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

#include "updatevolumeresponse.h"
#include "updatevolumeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  UpdateVolumeResponse
 *
 * @brief  Handles OpsWorks UpdateVolume responses.
 *
 * @see    OpsWorksClient::updateVolume
 */

/**
 * @brief  Constructs a new UpdateVolumeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateVolumeResponse::UpdateVolumeResponse(
        const UpdateVolumeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new UpdateVolumeResponsePrivate(this), parent)
{
    setRequest(new UpdateVolumeRequest(request));
    setReply(reply);
}

const UpdateVolumeRequest * UpdateVolumeResponse::request() const
{
    Q_D(const UpdateVolumeResponse);
    return static_cast<const UpdateVolumeRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks UpdateVolume response.
 *
 * @param  response  Response to parse.
 */
void UpdateVolumeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateVolumeResponsePrivate
 *
 * @brief  Private implementation for UpdateVolumeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateVolumeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateVolumeResponse instance.
 */
UpdateVolumeResponsePrivate::UpdateVolumeResponsePrivate(
    UpdateVolumeQueueResponse * const q) : UpdateVolumePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks UpdateVolumeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateVolumeResponsePrivate::UpdateVolumeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateVolumeResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
