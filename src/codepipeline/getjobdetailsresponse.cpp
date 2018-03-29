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

#include "getjobdetailsresponse.h"
#include "getjobdetailsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodePipeline {

/**
 * @class  GetJobDetailsResponse
 *
 * @brief  Handles CodePipeline GetJobDetails responses.
 *
 * @see    CodePipelineClient::getJobDetails
 */

/**
 * @brief  Constructs a new GetJobDetailsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetJobDetailsResponse::GetJobDetailsResponse(
        const GetJobDetailsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodePipelineResponse(new GetJobDetailsResponsePrivate(this), parent)
{
    setRequest(new GetJobDetailsRequest(request));
    setReply(reply);
}

const GetJobDetailsRequest * GetJobDetailsResponse::request() const
{
    Q_D(const GetJobDetailsResponse);
    return static_cast<const GetJobDetailsRequest *>(d->request);
}

/**
 * @brief  Parse a CodePipeline GetJobDetails response.
 *
 * @param  response  Response to parse.
 */
void GetJobDetailsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetJobDetailsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetJobDetailsResponsePrivate
 *
 * @brief  Private implementation for GetJobDetailsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetJobDetailsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetJobDetailsResponse instance.
 */
GetJobDetailsResponsePrivate::GetJobDetailsResponsePrivate(
    GetJobDetailsResponse * const q) : CodePipelineResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodePipeline GetJobDetailsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetJobDetailsResponsePrivate::parseGetJobDetailsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJobDetailsResponse"));
    /// @todo
}

} // namespace CodePipeline
} // namespace QtAws
