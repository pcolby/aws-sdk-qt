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

#include "startexporttaskresponse.h"
#include "startexporttaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ApplicationDiscoveryService {

/**
 * @class  StartExportTaskResponse
 *
 * @brief  Handles ApplicationDiscoveryService StartExportTask responses.
 *
 * @see    ApplicationDiscoveryServiceClient::startExportTask
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartExportTaskResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationDiscoveryServiceResponse(new StartExportTaskResponsePrivate(this), parent)
{
    setRequest(new StartExportTaskRequest(request));
    setReply(reply);
}

const StartExportTaskRequest * StartExportTaskResponse::request() const
{
    Q_D(const StartExportTaskResponse);
    return static_cast<const StartExportTaskRequest *>(d->request);
}

/**
 * @brief  Parse a ApplicationDiscoveryService StartExportTask response.
 *
 * @param  response  Response to parse.
 */
void StartExportTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartExportTaskResponsePrivate
 *
 * @brief  Private implementation for StartExportTaskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartExportTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartExportTaskResponse instance.
 */
StartExportTaskResponsePrivate::StartExportTaskResponsePrivate(
    StartExportTaskQueueResponse * const q) : StartExportTaskPrivate(q)
{

}

/**
 * @brief  Parse an ApplicationDiscoveryService StartExportTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartExportTaskResponsePrivate::StartExportTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartExportTaskResponse"));
    /// @todo
}
