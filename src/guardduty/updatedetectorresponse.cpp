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

#include "updatedetectorresponse.h"
#include "updatedetectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GuardDuty {

/**
 * @class  UpdateDetectorResponse
 *
 * @brief  Handles GuardDuty UpdateDetector responses.
 *
 * @see    GuardDutyClient::updateDetector
 */

/**
 * @brief  Constructs a new UpdateDetectorResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDetectorResponse::UpdateDetectorResponse(
        const UpdateDetectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new UpdateDetectorResponsePrivate(this), parent)
{
    setRequest(new UpdateDetectorRequest(request));
    setReply(reply);
}

const UpdateDetectorRequest * UpdateDetectorResponse::request() const
{
    Q_D(const UpdateDetectorResponse);
    return static_cast<const UpdateDetectorRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty UpdateDetector response.
 *
 * @param  response  Response to parse.
 */
void UpdateDetectorResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateDetectorResponsePrivate
 *
 * @brief  Private implementation for UpdateDetectorResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDetectorResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateDetectorResponse instance.
 */
UpdateDetectorResponsePrivate::UpdateDetectorResponsePrivate(
    UpdateDetectorQueueResponse * const q) : UpdateDetectorPrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty UpdateDetectorResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateDetectorResponsePrivate::UpdateDetectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDetectorResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace AWS
