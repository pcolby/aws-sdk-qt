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

#include "setinstancehealthresponse.h"
#include "setinstancehealthresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/**
 * @class  SetInstanceHealthResponse
 *
 * @brief  Handles AutoScaling SetInstanceHealth responses.
 *
 * @see    AutoScalingClient::setInstanceHealth
 */

/**
 * @brief  Constructs a new SetInstanceHealthResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetInstanceHealthResponse::SetInstanceHealthResponse(
        const SetInstanceHealthRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new SetInstanceHealthResponsePrivate(this), parent)
{
    setRequest(new SetInstanceHealthRequest(request));
    setReply(reply);
}

const SetInstanceHealthRequest * SetInstanceHealthResponse::request() const
{
    Q_D(const SetInstanceHealthResponse);
    return static_cast<const SetInstanceHealthRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling SetInstanceHealth response.
 *
 * @param  response  Response to parse.
 */
void SetInstanceHealthResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetInstanceHealthResponsePrivate
 *
 * @brief  Private implementation for SetInstanceHealthResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetInstanceHealthResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetInstanceHealthResponse instance.
 */
SetInstanceHealthResponsePrivate::SetInstanceHealthResponsePrivate(
    SetInstanceHealthQueueResponse * const q) : SetInstanceHealthPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling SetInstanceHealthResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetInstanceHealthResponsePrivate::SetInstanceHealthResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetInstanceHealthResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
