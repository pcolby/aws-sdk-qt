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

#include "pollfortaskresponse.h"
#include "pollfortaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DataPipeline {

/**
 * @class  PollForTaskResponse
 *
 * @brief  Handles DataPipeline PollForTask responses.
 *
 * @see    DataPipelineClient::pollForTask
 */

/**
 * @brief  Constructs a new PollForTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PollForTaskResponse::PollForTaskResponse(
        const PollForTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataPipelineResponse(new PollForTaskResponsePrivate(this), parent)
{
    setRequest(new PollForTaskRequest(request));
    setReply(reply);
}

const PollForTaskRequest * PollForTaskResponse::request() const
{
    Q_D(const PollForTaskResponse);
    return static_cast<const PollForTaskRequest *>(d->request);
}

/**
 * @brief  Parse a DataPipeline PollForTask response.
 *
 * @param  response  Response to parse.
 */
void PollForTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PollForTaskResponsePrivate
 *
 * @brief  Private implementation for PollForTaskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PollForTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PollForTaskResponse instance.
 */
PollForTaskResponsePrivate::PollForTaskResponsePrivate(
    PollForTaskQueueResponse * const q) : PollForTaskPrivate(q)
{

}

/**
 * @brief  Parse an DataPipeline PollForTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PollForTaskResponsePrivate::PollForTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PollForTaskResponse"));
    /// @todo
}

} // namespace DataPipeline
} // namespace AWS
