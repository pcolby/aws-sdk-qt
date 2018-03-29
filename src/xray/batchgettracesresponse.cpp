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

#include "batchgettracesresponse.h"
#include "batchgettracesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/**
 * @class  BatchGetTracesResponse
 *
 * @brief  Handles XRay BatchGetTraces responses.
 *
 * @see    XRayClient::batchGetTraces
 */

/**
 * @brief  Constructs a new BatchGetTracesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchGetTracesResponse::BatchGetTracesResponse(
        const BatchGetTracesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new BatchGetTracesResponsePrivate(this), parent)
{
    setRequest(new BatchGetTracesRequest(request));
    setReply(reply);
}

const BatchGetTracesRequest * BatchGetTracesResponse::request() const
{
    Q_D(const BatchGetTracesResponse);
    return static_cast<const BatchGetTracesRequest *>(d->request);
}

/**
 * @brief  Parse a XRay BatchGetTraces response.
 *
 * @param  response  Response to parse.
 */
void BatchGetTracesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchGetTracesResponsePrivate
 *
 * @brief  Private implementation for BatchGetTracesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetTracesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchGetTracesResponse instance.
 */
BatchGetTracesResponsePrivate::BatchGetTracesResponsePrivate(
    BatchGetTracesQueueResponse * const q) : BatchGetTracesPrivate(q)
{

}

/**
 * @brief  Parse an XRay BatchGetTracesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchGetTracesResponsePrivate::BatchGetTracesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetTracesResponse"));
    /// @todo
}

} // namespace XRay
} // namespace QtAws
