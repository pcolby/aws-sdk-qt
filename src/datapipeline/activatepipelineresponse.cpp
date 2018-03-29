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

#include "activatepipelineresponse.h"
#include "activatepipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DataPipeline {

/**
 * @class  ActivatePipelineResponse
 *
 * @brief  Handles DataPipeline ActivatePipeline responses.
 *
 * @see    DataPipelineClient::activatePipeline
 */

/**
 * @brief  Constructs a new ActivatePipelineResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ActivatePipelineResponse::ActivatePipelineResponse(
        const ActivatePipelineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataPipelineResponse(new ActivatePipelineResponsePrivate(this), parent)
{
    setRequest(new ActivatePipelineRequest(request));
    setReply(reply);
}

const ActivatePipelineRequest * ActivatePipelineResponse::request() const
{
    Q_D(const ActivatePipelineResponse);
    return static_cast<const ActivatePipelineRequest *>(d->request);
}

/**
 * @brief  Parse a DataPipeline ActivatePipeline response.
 *
 * @param  response  Response to parse.
 */
void ActivatePipelineResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ActivatePipelineResponsePrivate
 *
 * @brief  Private implementation for ActivatePipelineResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ActivatePipelineResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ActivatePipelineResponse instance.
 */
ActivatePipelineResponsePrivate::ActivatePipelineResponsePrivate(
    ActivatePipelineQueueResponse * const q) : ActivatePipelinePrivate(q)
{

}

/**
 * @brief  Parse an DataPipeline ActivatePipelineResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ActivatePipelineResponsePrivate::ActivatePipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ActivatePipelineResponse"));
    /// @todo
}

} // namespace DataPipeline
} // namespace AWS
