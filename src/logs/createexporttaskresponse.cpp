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

#include "createexporttaskresponse.h"
#include "createexporttaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchLogs {

/**
 * @class  CreateExportTaskResponse
 *
 * @brief  Handles CloudWatchLogs CreateExportTask responses.
 *
 * @see    CloudWatchLogsClient::createExportTask
 */

/**
 * @brief  Constructs a new CreateExportTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateExportTaskResponse::CreateExportTaskResponse(
        const CreateExportTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateExportTaskResponse(new CreateExportTaskResponsePrivate(this), parent)
{
    setRequest(new CreateExportTaskRequest(request));
    setReply(reply);
}

const CreateExportTaskRequest * CreateExportTaskResponse::request() const
{
    Q_D(const CreateExportTaskResponse);
    return static_cast<const CreateExportTaskRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs CreateExportTask response.
 *
 * @param  response  Response to parse.
 */
void CreateExportTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateExportTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateExportTaskResponsePrivate
 *
 * @brief  Private implementation for CreateExportTaskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateExportTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateExportTaskResponse instance.
 */
CreateExportTaskResponsePrivate::CreateExportTaskResponsePrivate(
    CreateExportTaskResponse * const q) : CloudWatchLogsResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs CreateExportTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateExportTaskResponsePrivate::parseCreateExportTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateExportTaskResponse"));
    /// @todo
}

} // namespace CloudWatchLogs
} // namespace QtAws
