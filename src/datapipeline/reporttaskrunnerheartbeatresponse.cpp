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

#include "reporttaskrunnerheartbeatresponse.h"
#include "reporttaskrunnerheartbeatresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataPipeline {

/**
 * @class  ReportTaskRunnerHeartbeatResponse
 *
 * @brief  Handles DataPipeline ReportTaskRunnerHeartbeat responses.
 *
 * @see    DataPipelineClient::reportTaskRunnerHeartbeat
 */

/**
 * @brief  Constructs a new ReportTaskRunnerHeartbeatResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ReportTaskRunnerHeartbeatResponse::ReportTaskRunnerHeartbeatResponse(
        const ReportTaskRunnerHeartbeatRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataPipelineResponse(new ReportTaskRunnerHeartbeatResponsePrivate(this), parent)
{
    setRequest(new ReportTaskRunnerHeartbeatRequest(request));
    setReply(reply);
}

const ReportTaskRunnerHeartbeatRequest * ReportTaskRunnerHeartbeatResponse::request() const
{
    Q_D(const ReportTaskRunnerHeartbeatResponse);
    return static_cast<const ReportTaskRunnerHeartbeatRequest *>(d->request);
}

/**
 * @brief  Parse a DataPipeline ReportTaskRunnerHeartbeat response.
 *
 * @param  response  Response to parse.
 */
void ReportTaskRunnerHeartbeatResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ReportTaskRunnerHeartbeatResponsePrivate
 *
 * @brief  Private implementation for ReportTaskRunnerHeartbeatResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReportTaskRunnerHeartbeatResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ReportTaskRunnerHeartbeatResponse instance.
 */
ReportTaskRunnerHeartbeatResponsePrivate::ReportTaskRunnerHeartbeatResponsePrivate(
    ReportTaskRunnerHeartbeatResponse * const q) : DataPipelineResponsePrivate(q)
{

}

/**
 * @brief  Parse an DataPipeline ReportTaskRunnerHeartbeatResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ReportTaskRunnerHeartbeatResponsePrivate::ReportTaskRunnerHeartbeatResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReportTaskRunnerHeartbeatResponse"));
    /// @todo
}

} // namespace DataPipeline
} // namespace QtAws
