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

#include "getpipelineresponse.h"
#include "getpipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodePipeline {

/**
 * @class  GetPipelineResponse
 *
 * @brief  Handles CodePipeline GetPipeline responses.
 *
 * @see    CodePipelineClient::getPipeline
 */

/**
 * @brief  Constructs a new GetPipelineResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPipelineResponse::GetPipelineResponse(
        const GetPipelineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodePipelineResponse(new GetPipelineResponsePrivate(this), parent)
{
    setRequest(new GetPipelineRequest(request));
    setReply(reply);
}

const GetPipelineRequest * GetPipelineResponse::request() const
{
    Q_D(const GetPipelineResponse);
    return static_cast<const GetPipelineRequest *>(d->request);
}

/**
 * @brief  Parse a CodePipeline GetPipeline response.
 *
 * @param  response  Response to parse.
 */
void GetPipelineResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetPipelineResponsePrivate
 *
 * @brief  Private implementation for GetPipelineResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPipelineResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetPipelineResponse instance.
 */
GetPipelineResponsePrivate::GetPipelineResponsePrivate(
    GetPipelineQueueResponse * const q) : GetPipelinePrivate(q)
{

}

/**
 * @brief  Parse an CodePipeline GetPipelineResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetPipelineResponsePrivate::GetPipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPipelineResponse"));
    /// @todo
}

} // namespace CodePipeline
} // namespace QtAws
