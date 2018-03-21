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

#include "puttelemetryrecordsresponse.h"
#include "puttelemetryrecordsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace XRay {

/**
 * @class  PutTelemetryRecordsResponse
 *
 * @brief  Handles XRay PutTelemetryRecords responses.
 *
 * @see    XRayClient::putTelemetryRecords
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutTelemetryRecordsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new PutTelemetryRecordsResponsePrivate(this), parent)
{
    setRequest(new PutTelemetryRecordsRequest(request));
    setReply(reply);
}

const PutTelemetryRecordsRequest * PutTelemetryRecordsResponse::request() const
{
    Q_D(const PutTelemetryRecordsResponse);
    return static_cast<const PutTelemetryRecordsRequest *>(d->request);
}

/**
 * @brief  Parse a XRay PutTelemetryRecords response.
 *
 * @param  response  Response to parse.
 */
void PutTelemetryRecordsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutTelemetryRecordsResponsePrivate
 *
 * @brief  Private implementation for PutTelemetryRecordsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutTelemetryRecordsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutTelemetryRecordsResponse instance.
 */
PutTelemetryRecordsResponsePrivate::PutTelemetryRecordsResponsePrivate(
    PutTelemetryRecordsQueueResponse * const q) : PutTelemetryRecordsPrivate(q)
{

}

/**
 * @brief  Parse an XRay PutTelemetryRecordsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutTelemetryRecordsResponsePrivate::PutTelemetryRecordsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutTelemetryRecordsResponse"));
    /// @todo
}
