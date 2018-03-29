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

#include "deactivatepipelineresponse.h"
#include "deactivatepipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataPipeline {

/**
 * @class  DeactivatePipelineResponse
 *
 * @brief  Handles DataPipeline DeactivatePipeline responses.
 *
 * @see    DataPipelineClient::deactivatePipeline
 */

/**
 * @brief  Constructs a new DeactivatePipelineResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeactivatePipelineResponse::DeactivatePipelineResponse(
        const DeactivatePipelineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeactivatePipelineResponse(new DeactivatePipelineResponsePrivate(this), parent)
{
    setRequest(new DeactivatePipelineRequest(request));
    setReply(reply);
}

const DeactivatePipelineRequest * DeactivatePipelineResponse::request() const
{
    Q_D(const DeactivatePipelineResponse);
    return static_cast<const DeactivatePipelineRequest *>(d->request);
}

/**
 * @brief  Parse a DataPipeline DeactivatePipeline response.
 *
 * @param  response  Response to parse.
 */
void DeactivatePipelineResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeactivatePipelineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeactivatePipelineResponsePrivate
 *
 * @brief  Private implementation for DeactivatePipelineResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeactivatePipelineResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeactivatePipelineResponse instance.
 */
DeactivatePipelineResponsePrivate::DeactivatePipelineResponsePrivate(
    DeactivatePipelineResponse * const q) : DataPipelineResponsePrivate(q)
{

}

/**
 * @brief  Parse an DataPipeline DeactivatePipelineResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeactivatePipelineResponsePrivate::parseDeactivatePipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeactivatePipelineResponse"));
    /// @todo
}

} // namespace DataPipeline
} // namespace QtAws
