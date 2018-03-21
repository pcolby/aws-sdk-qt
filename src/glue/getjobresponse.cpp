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

#include "getjobresponse.h"
#include "getjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  GetJobResponse
 *
 * @brief  Handles Glue GetJob responses.
 *
 * @see    GlueClient::getJob
 */

/**
 * @brief  Constructs a new GetJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetJobResponse::GetJobResponse(
        const GetJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetJobResponsePrivate(this), parent)
{
    setRequest(new GetJobRequest(request));
    setReply(reply);
}

const GetJobRequest * GetJobResponse::request() const
{
    Q_D(const GetJobResponse);
    return static_cast<const GetJobRequest *>(d->request);
}

/**
 * @brief  Parse a Glue GetJob response.
 *
 * @param  response  Response to parse.
 */
void GetJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetJobResponsePrivate
 *
 * @brief  Private implementation for GetJobResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetJobResponse instance.
 */
GetJobResponsePrivate::GetJobResponsePrivate(
    GetJobQueueResponse * const q) : GetJobPrivate(q)
{

}

/**
 * @brief  Parse an Glue GetJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetJobResponsePrivate::GetJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJobResponse"));
    /// @todo
}

} // namespace Glue
} // namespace AWS
