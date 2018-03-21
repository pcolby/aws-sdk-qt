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

#include "detectsentimentresponse.h"
#include "detectsentimentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Comprehend {

/**
 * @class  DetectSentimentResponse
 *
 * @brief  Handles Comprehend DetectSentiment responses.
 *
 * @see    ComprehendClient::detectSentiment
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetectSentimentResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DetectSentimentResponsePrivate(this), parent)
{
    setRequest(new DetectSentimentRequest(request));
    setReply(reply);
}

const DetectSentimentRequest * DetectSentimentResponse::request() const
{
    Q_D(const DetectSentimentResponse);
    return static_cast<const DetectSentimentRequest *>(d->request);
}

/**
 * @brief  Parse a Comprehend DetectSentiment response.
 *
 * @param  response  Response to parse.
 */
void DetectSentimentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetectSentimentResponsePrivate
 *
 * @brief  Private implementation for DetectSentimentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetectSentimentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetectSentimentResponse instance.
 */
DetectSentimentResponsePrivate::DetectSentimentResponsePrivate(
    DetectSentimentQueueResponse * const q) : DetectSentimentPrivate(q)
{

}

/**
 * @brief  Parse an Comprehend DetectSentimentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetectSentimentResponsePrivate::DetectSentimentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectSentimentResponse"));
    /// @todo
}

} // namespace Comprehend
} // namespace AWS
