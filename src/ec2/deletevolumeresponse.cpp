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

#include "deletevolumeresponse.h"
#include "deletevolumeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DeleteVolumeResponse
 *
 * @brief  Handles EC2 DeleteVolume responses.
 *
 * @see    EC2Client::deleteVolume
 */

/**
 * @brief  Constructs a new DeleteVolumeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteVolumeResponse::DeleteVolumeResponse(
        const DeleteVolumeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DeleteVolumeResponsePrivate(this), parent)
{
    setRequest(new DeleteVolumeRequest(request));
    setReply(reply);
}

const DeleteVolumeRequest * DeleteVolumeResponse::request() const
{
    Q_D(const DeleteVolumeResponse);
    return static_cast<const DeleteVolumeRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DeleteVolume response.
 *
 * @param  response  Response to parse.
 */
void DeleteVolumeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteVolumeResponsePrivate
 *
 * @brief  Private implementation for DeleteVolumeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVolumeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteVolumeResponse instance.
 */
DeleteVolumeResponsePrivate::DeleteVolumeResponsePrivate(
    DeleteVolumeQueueResponse * const q) : DeleteVolumePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DeleteVolumeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteVolumeResponsePrivate::DeleteVolumeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVolumeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
