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

#include "getjobrunsresponse.h"
#include "getjobrunsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  GetJobRunsResponse
 *
 * @brief  Handles Glue GetJobRuns responses.
 *
 * @see    GlueClient::getJobRuns
 */

/**
 * @brief  Constructs a new GetJobRunsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetJobRunsResponse::GetJobRunsResponse(
        const GetJobRunsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetJobRunsResponsePrivate(this), parent)
{
    setRequest(new GetJobRunsRequest(request));
    setReply(reply);
}

const GetJobRunsRequest * GetJobRunsResponse::request() const
{
    Q_D(const GetJobRunsResponse);
    return static_cast<const GetJobRunsRequest *>(d->request);
}

/**
 * @brief  Parse a Glue GetJobRuns response.
 *
 * @param  response  Response to parse.
 */
void GetJobRunsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetJobRunsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetJobRunsResponsePrivate
 *
 * @brief  Private implementation for GetJobRunsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetJobRunsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetJobRunsResponse instance.
 */
GetJobRunsResponsePrivate::GetJobRunsResponsePrivate(
    GetJobRunsResponse * const q) : GlueResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glue GetJobRunsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetJobRunsResponsePrivate::GetJobRunsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJobRunsResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
