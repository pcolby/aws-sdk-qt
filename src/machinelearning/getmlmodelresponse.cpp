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

#include "getmlmodelresponse.h"
#include "getmlmodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/**
 * @class  GetMLModelResponse
 *
 * @brief  Handles MachineLearning GetMLModel responses.
 *
 * @see    MachineLearningClient::getMLModel
 */

/**
 * @brief  Constructs a new GetMLModelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetMLModelResponse::GetMLModelResponse(
        const GetMLModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new GetMLModelResponsePrivate(this), parent)
{
    setRequest(new GetMLModelRequest(request));
    setReply(reply);
}

const GetMLModelRequest * GetMLModelResponse::request() const
{
    Q_D(const GetMLModelResponse);
    return static_cast<const GetMLModelRequest *>(d->request);
}

/**
 * @brief  Parse a MachineLearning GetMLModel response.
 *
 * @param  response  Response to parse.
 */
void GetMLModelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetMLModelResponsePrivate
 *
 * @brief  Private implementation for GetMLModelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMLModelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetMLModelResponse instance.
 */
GetMLModelResponsePrivate::GetMLModelResponsePrivate(
    GetMLModelQueueResponse * const q) : GetMLModelPrivate(q)
{

}

/**
 * @brief  Parse an MachineLearning GetMLModelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetMLModelResponsePrivate::GetMLModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMLModelResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace QtAws
