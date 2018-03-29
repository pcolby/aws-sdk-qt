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

#include "updatejobexecutionresponse.h"
#include "updatejobexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTJobsDataPlane {

/**
 * @class  UpdateJobExecutionResponse
 *
 * @brief  Handles IoTJobsDataPlane UpdateJobExecution responses.
 *
 * @see    IoTJobsDataPlaneClient::updateJobExecution
 */

/**
 * @brief  Constructs a new UpdateJobExecutionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateJobExecutionResponse::UpdateJobExecutionResponse(
        const UpdateJobExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTJobsDataPlaneResponse(new UpdateJobExecutionResponsePrivate(this), parent)
{
    setRequest(new UpdateJobExecutionRequest(request));
    setReply(reply);
}

const UpdateJobExecutionRequest * UpdateJobExecutionResponse::request() const
{
    Q_D(const UpdateJobExecutionResponse);
    return static_cast<const UpdateJobExecutionRequest *>(d->request);
}

/**
 * @brief  Parse a IoTJobsDataPlane UpdateJobExecution response.
 *
 * @param  response  Response to parse.
 */
void UpdateJobExecutionResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateJobExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateJobExecutionResponsePrivate
 *
 * @brief  Private implementation for UpdateJobExecutionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateJobExecutionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateJobExecutionResponse instance.
 */
UpdateJobExecutionResponsePrivate::UpdateJobExecutionResponsePrivate(
    UpdateJobExecutionResponse * const q) : IoTJobsDataPlaneResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoTJobsDataPlane UpdateJobExecutionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateJobExecutionResponsePrivate::UpdateJobExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateJobExecutionResponse"));
    /// @todo
}

} // namespace IoTJobsDataPlane
} // namespace QtAws
