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

#include "getjobrunresponse.h"
#include "getjobrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  GetJobRunResponse
 *
 * @brief  Handles Glue GetJobRun responses.
 *
 * @see    GlueClient::getJobRun
 */

/**
 * @brief  Constructs a new GetJobRunResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetJobRunResponse::GetJobRunResponse(
        const GetJobRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetJobRunResponsePrivate(this), parent)
{
    setRequest(new GetJobRunRequest(request));
    setReply(reply);
}

const GetJobRunRequest * GetJobRunResponse::request() const
{
    Q_D(const GetJobRunResponse);
    return static_cast<const GetJobRunRequest *>(d->request);
}

/**
 * @brief  Parse a Glue GetJobRun response.
 *
 * @param  response  Response to parse.
 */
void GetJobRunResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetJobRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetJobRunResponsePrivate
 *
 * @brief  Private implementation for GetJobRunResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetJobRunResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetJobRunResponse instance.
 */
GetJobRunResponsePrivate::GetJobRunResponsePrivate(
    GetJobRunResponse * const q) : GlueResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glue GetJobRunResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetJobRunResponsePrivate::GetJobRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJobRunResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
