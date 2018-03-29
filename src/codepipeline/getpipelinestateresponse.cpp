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

#include "getpipelinestateresponse.h"
#include "getpipelinestateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodePipeline {

/**
 * @class  GetPipelineStateResponse
 *
 * @brief  Handles CodePipeline GetPipelineState responses.
 *
 * @see    CodePipelineClient::getPipelineState
 */

/**
 * @brief  Constructs a new GetPipelineStateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPipelineStateResponse::GetPipelineStateResponse(
        const GetPipelineStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodePipelineResponse(new GetPipelineStateResponsePrivate(this), parent)
{
    setRequest(new GetPipelineStateRequest(request));
    setReply(reply);
}

const GetPipelineStateRequest * GetPipelineStateResponse::request() const
{
    Q_D(const GetPipelineStateResponse);
    return static_cast<const GetPipelineStateRequest *>(d->request);
}

/**
 * @brief  Parse a CodePipeline GetPipelineState response.
 *
 * @param  response  Response to parse.
 */
void GetPipelineStateResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetPipelineStateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetPipelineStateResponsePrivate
 *
 * @brief  Private implementation for GetPipelineStateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPipelineStateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetPipelineStateResponse instance.
 */
GetPipelineStateResponsePrivate::GetPipelineStateResponsePrivate(
    GetPipelineStateResponse * const q) : CodePipelineResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodePipeline GetPipelineStateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetPipelineStateResponsePrivate::GetPipelineStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPipelineStateResponse"));
    /// @todo
}

} // namespace CodePipeline
} // namespace QtAws
