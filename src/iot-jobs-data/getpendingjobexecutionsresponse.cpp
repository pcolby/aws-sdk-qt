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

#include "getpendingjobexecutionsresponse.h"
#include "getpendingjobexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTJobsDataPlane {

/**
 * @class  GetPendingJobExecutionsResponse
 *
 * @brief  Handles IoTJobsDataPlane GetPendingJobExecutions responses.
 *
 * @see    IoTJobsDataPlaneClient::getPendingJobExecutions
 */

/**
 * @brief  Constructs a new GetPendingJobExecutionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPendingJobExecutionsResponse::GetPendingJobExecutionsResponse(
        const GetPendingJobExecutionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTJobsDataPlaneResponse(new GetPendingJobExecutionsResponsePrivate(this), parent)
{
    setRequest(new GetPendingJobExecutionsRequest(request));
    setReply(reply);
}

const GetPendingJobExecutionsRequest * GetPendingJobExecutionsResponse::request() const
{
    Q_D(const GetPendingJobExecutionsResponse);
    return static_cast<const GetPendingJobExecutionsRequest *>(d->request);
}

/**
 * @brief  Parse a IoTJobsDataPlane GetPendingJobExecutions response.
 *
 * @param  response  Response to parse.
 */
void GetPendingJobExecutionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetPendingJobExecutionsResponsePrivate
 *
 * @brief  Private implementation for GetPendingJobExecutionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPendingJobExecutionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetPendingJobExecutionsResponse instance.
 */
GetPendingJobExecutionsResponsePrivate::GetPendingJobExecutionsResponsePrivate(
    GetPendingJobExecutionsResponse * const q) : IoTJobsDataPlaneResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoTJobsDataPlane GetPendingJobExecutionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetPendingJobExecutionsResponsePrivate::GetPendingJobExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPendingJobExecutionsResponse"));
    /// @todo
}

} // namespace IoTJobsDataPlane
} // namespace QtAws
