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

#include "listjobsbypipelineresponse.h"
#include "listjobsbypipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticTranscoder {

/**
 * @class  ListJobsByPipelineResponse
 *
 * @brief  Handles ElasticTranscoder ListJobsByPipeline responses.
 *
 * @see    ElasticTranscoderClient::listJobsByPipeline
 */

/**
 * @brief  Constructs a new ListJobsByPipelineResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListJobsByPipelineResponse::ListJobsByPipelineResponse(
        const ListJobsByPipelineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new ListJobsByPipelineResponsePrivate(this), parent)
{
    setRequest(new ListJobsByPipelineRequest(request));
    setReply(reply);
}

const ListJobsByPipelineRequest * ListJobsByPipelineResponse::request() const
{
    Q_D(const ListJobsByPipelineResponse);
    return static_cast<const ListJobsByPipelineRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticTranscoder ListJobsByPipeline response.
 *
 * @param  response  Response to parse.
 */
void ListJobsByPipelineResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListJobsByPipelineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListJobsByPipelineResponsePrivate
 *
 * @brief  Private implementation for ListJobsByPipelineResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListJobsByPipelineResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListJobsByPipelineResponse instance.
 */
ListJobsByPipelineResponsePrivate::ListJobsByPipelineResponsePrivate(
    ListJobsByPipelineResponse * const q) : ElasticTranscoderResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticTranscoder ListJobsByPipelineResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListJobsByPipelineResponsePrivate::parseListJobsByPipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListJobsByPipelineResponse"));
    /// @todo
}

} // namespace ElasticTranscoder
} // namespace QtAws
