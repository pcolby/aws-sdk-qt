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

#include "publishresponse.h"
#include "publishresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoTDataPlane {

/**
 * @class  PublishResponse
 *
 * @brief  Handles IoTDataPlane Publish responses.
 *
 * @see    IoTDataPlaneClient::publish
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PublishResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTDataPlaneResponse(new PublishResponsePrivate(this), parent)
{
    setRequest(new PublishRequest(request));
    setReply(reply);
}

const PublishRequest * PublishResponse::request() const
{
    Q_D(const PublishResponse);
    return static_cast<const PublishRequest *>(d->request);
}

/**
 * @brief  Parse a IoTDataPlane Publish response.
 *
 * @param  response  Response to parse.
 */
void PublishResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PublishResponsePrivate
 *
 * @brief  Private implementation for PublishResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PublishResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PublishResponse instance.
 */
PublishResponsePrivate::PublishResponsePrivate(
    PublishQueueResponse * const q) : PublishPrivate(q)
{

}

/**
 * @brief  Parse an IoTDataPlane PublishResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PublishResponsePrivate::PublishResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PublishResponse"));
    /// @todo
}

} // namespace IoTDataPlane
} // namespace AWS
