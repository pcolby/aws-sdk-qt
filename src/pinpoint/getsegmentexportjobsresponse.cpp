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

#include "getsegmentexportjobsresponse.h"
#include "getsegmentexportjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetSegmentExportJobsResponse
 *
 * @brief  Handles Pinpoint GetSegmentExportJobs responses.
 *
 * @see    PinpointClient::getSegmentExportJobs
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSegmentExportJobsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetSegmentExportJobsResponsePrivate(this), parent)
{
    setRequest(new GetSegmentExportJobsRequest(request));
    setReply(reply);
}

const GetSegmentExportJobsRequest * GetSegmentExportJobsResponse::request() const
{
    Q_D(const GetSegmentExportJobsResponse);
    return static_cast<const GetSegmentExportJobsRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint GetSegmentExportJobs response.
 *
 * @param  response  Response to parse.
 */
void GetSegmentExportJobsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetSegmentExportJobsResponsePrivate
 *
 * @brief  Private implementation for GetSegmentExportJobsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSegmentExportJobsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSegmentExportJobsResponse instance.
 */
GetSegmentExportJobsResponsePrivate::GetSegmentExportJobsResponsePrivate(
    GetSegmentExportJobsQueueResponse * const q) : GetSegmentExportJobsPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint GetSegmentExportJobsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSegmentExportJobsResponsePrivate::GetSegmentExportJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSegmentExportJobsResponse"));
    /// @todo
}
