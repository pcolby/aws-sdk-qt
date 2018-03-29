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

#include "puttracesegmentsresponse.h"
#include "puttracesegmentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/**
 * @class  PutTraceSegmentsResponse
 *
 * @brief  Handles XRay PutTraceSegments responses.
 *
 * @see    XRayClient::putTraceSegments
 */

/**
 * @brief  Constructs a new PutTraceSegmentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutTraceSegmentsResponse::PutTraceSegmentsResponse(
        const PutTraceSegmentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new PutTraceSegmentsResponsePrivate(this), parent)
{
    setRequest(new PutTraceSegmentsRequest(request));
    setReply(reply);
}

const PutTraceSegmentsRequest * PutTraceSegmentsResponse::request() const
{
    Q_D(const PutTraceSegmentsResponse);
    return static_cast<const PutTraceSegmentsRequest *>(d->request);
}

/**
 * @brief  Parse a XRay PutTraceSegments response.
 *
 * @param  response  Response to parse.
 */
void PutTraceSegmentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutTraceSegmentsResponsePrivate
 *
 * @brief  Private implementation for PutTraceSegmentsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutTraceSegmentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutTraceSegmentsResponse instance.
 */
PutTraceSegmentsResponsePrivate::PutTraceSegmentsResponsePrivate(
    PutTraceSegmentsResponse * const q) : XRayResponsePrivate(q)
{

}

/**
 * @brief  Parse an XRay PutTraceSegmentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutTraceSegmentsResponsePrivate::PutTraceSegmentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutTraceSegmentsResponse"));
    /// @todo
}

} // namespace XRay
} // namespace QtAws
