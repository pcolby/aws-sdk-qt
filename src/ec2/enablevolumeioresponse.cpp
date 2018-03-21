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

#include "enablevolumeioresponse.h"
#include "enablevolumeioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  EnableVolumeIOResponse
 *
 * @brief  Handles EC2 EnableVolumeIO responses.
 *
 * @see    EC2Client::enableVolumeIO
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnableVolumeIOResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new EnableVolumeIOResponsePrivate(this), parent)
{
    setRequest(new EnableVolumeIORequest(request));
    setReply(reply);
}

const EnableVolumeIORequest * EnableVolumeIOResponse::request() const
{
    Q_D(const EnableVolumeIOResponse);
    return static_cast<const EnableVolumeIORequest *>(d->request);
}

/**
 * @brief  Parse a EC2 EnableVolumeIO response.
 *
 * @param  response  Response to parse.
 */
void EnableVolumeIOResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  EnableVolumeIOResponsePrivate
 *
 * @brief  Private implementation for EnableVolumeIOResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableVolumeIOResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EnableVolumeIOResponse instance.
 */
EnableVolumeIOResponsePrivate::EnableVolumeIOResponsePrivate(
    EnableVolumeIOQueueResponse * const q) : EnableVolumeIOPrivate(q)
{

}

/**
 * @brief  Parse an EC2 EnableVolumeIOResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EnableVolumeIOResponsePrivate::EnableVolumeIOResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableVolumeIOResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
