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

#include "importvolumeresponse.h"
#include "importvolumeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  ImportVolumeResponse
 *
 * @brief  Handles EC2 ImportVolume responses.
 *
 * @see    EC2Client::importVolume
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ImportVolumeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ImportVolumeResponsePrivate(this), parent)
{
    setRequest(new ImportVolumeRequest(request));
    setReply(reply);
}

const ImportVolumeRequest * ImportVolumeResponse::request() const
{
    Q_D(const ImportVolumeResponse);
    return static_cast<const ImportVolumeRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ImportVolume response.
 *
 * @param  response  Response to parse.
 */
void ImportVolumeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ImportVolumeResponsePrivate
 *
 * @brief  Private implementation for ImportVolumeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ImportVolumeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ImportVolumeResponse instance.
 */
ImportVolumeResponsePrivate::ImportVolumeResponsePrivate(
    ImportVolumeQueueResponse * const q) : ImportVolumePrivate(q)
{

}

/**
 * @brief  Parse an EC2 ImportVolumeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ImportVolumeResponsePrivate::ImportVolumeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportVolumeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
