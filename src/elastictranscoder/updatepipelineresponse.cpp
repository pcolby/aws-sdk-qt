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

#include "updatepipelineresponse.h"
#include "updatepipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticTranscoder {

/**
 * @class  UpdatePipelineResponse
 *
 * @brief  Handles ElasticTranscoder UpdatePipeline responses.
 *
 * @see    ElasticTranscoderClient::updatePipeline
 */

/**
 * @brief  Constructs a new UpdatePipelineResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdatePipelineResponse::UpdatePipelineResponse(
        const UpdatePipelineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new UpdatePipelineResponsePrivate(this), parent)
{
    setRequest(new UpdatePipelineRequest(request));
    setReply(reply);
}

const UpdatePipelineRequest * UpdatePipelineResponse::request() const
{
    Q_D(const UpdatePipelineResponse);
    return static_cast<const UpdatePipelineRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticTranscoder UpdatePipeline response.
 *
 * @param  response  Response to parse.
 */
void UpdatePipelineResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdatePipelineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdatePipelineResponsePrivate
 *
 * @brief  Private implementation for UpdatePipelineResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePipelineResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdatePipelineResponse instance.
 */
UpdatePipelineResponsePrivate::UpdatePipelineResponsePrivate(
    UpdatePipelineResponse * const q) : ElasticTranscoderResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticTranscoder UpdatePipelineResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdatePipelineResponsePrivate::UpdatePipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePipelineResponse"));
    /// @todo
}

} // namespace ElasticTranscoder
} // namespace QtAws
