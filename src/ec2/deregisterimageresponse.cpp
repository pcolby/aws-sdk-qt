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

#include "deregisterimageresponse.h"
#include "deregisterimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DeregisterImageResponse
 *
 * @brief  Handles EC2 DeregisterImage responses.
 *
 * @see    EC2Client::deregisterImage
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeregisterImageResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DeregisterImageResponsePrivate(this), parent)
{
    setRequest(new DeregisterImageRequest(request));
    setReply(reply);
}

const DeregisterImageRequest * DeregisterImageResponse::request() const
{
    Q_D(const DeregisterImageResponse);
    return static_cast<const DeregisterImageRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DeregisterImage response.
 *
 * @param  response  Response to parse.
 */
void DeregisterImageResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeregisterImageResponsePrivate
 *
 * @brief  Private implementation for DeregisterImageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterImageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeregisterImageResponse instance.
 */
DeregisterImageResponsePrivate::DeregisterImageResponsePrivate(
    DeregisterImageQueueResponse * const q) : DeregisterImagePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DeregisterImageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeregisterImageResponsePrivate::DeregisterImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterImageResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
