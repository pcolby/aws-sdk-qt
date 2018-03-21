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

#include "getjobsresponse.h"
#include "getjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  GetJobsResponse
 *
 * @brief  Handles Glue GetJobs responses.
 *
 * @see    GlueClient::getJobs
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetJobsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetJobsResponsePrivate(this), parent)
{
    setRequest(new GetJobsRequest(request));
    setReply(reply);
}

const GetJobsRequest * GetJobsResponse::request() const
{
    Q_D(const GetJobsResponse);
    return static_cast<const GetJobsRequest *>(d->request);
}

/**
 * @brief  Parse a Glue GetJobs response.
 *
 * @param  response  Response to parse.
 */
void GetJobsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetJobsResponsePrivate
 *
 * @brief  Private implementation for GetJobsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetJobsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetJobsResponse instance.
 */
GetJobsResponsePrivate::GetJobsResponsePrivate(
    GetJobsQueueResponse * const q) : GetJobsPrivate(q)
{

}

/**
 * @brief  Parse an Glue GetJobsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetJobsResponsePrivate::GetJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJobsResponse"));
    /// @todo
}
