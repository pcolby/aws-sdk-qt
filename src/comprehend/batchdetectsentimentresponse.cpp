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

#include "batchdetectsentimentresponse.h"
#include "batchdetectsentimentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/**
 * @class  BatchDetectSentimentResponse
 *
 * @brief  Handles Comprehend BatchDetectSentiment responses.
 *
 * @see    ComprehendClient::batchDetectSentiment
 */

/**
 * @brief  Constructs a new BatchDetectSentimentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchDetectSentimentResponse::BatchDetectSentimentResponse(
        const BatchDetectSentimentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new BatchDetectSentimentResponsePrivate(this), parent)
{
    setRequest(new BatchDetectSentimentRequest(request));
    setReply(reply);
}

const BatchDetectSentimentRequest * BatchDetectSentimentResponse::request() const
{
    Q_D(const BatchDetectSentimentResponse);
    return static_cast<const BatchDetectSentimentRequest *>(d->request);
}

/**
 * @brief  Parse a Comprehend BatchDetectSentiment response.
 *
 * @param  response  Response to parse.
 */
void BatchDetectSentimentResponse::parseSuccess(QIODevice &response)
{
    Q_D(BatchDetectSentimentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchDetectSentimentResponsePrivate
 *
 * @brief  Private implementation for BatchDetectSentimentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchDetectSentimentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchDetectSentimentResponse instance.
 */
BatchDetectSentimentResponsePrivate::BatchDetectSentimentResponsePrivate(
    BatchDetectSentimentResponse * const q) : ComprehendResponsePrivate(q)
{

}

/**
 * @brief  Parse an Comprehend BatchDetectSentimentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchDetectSentimentResponsePrivate::parseBatchDetectSentimentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDetectSentimentResponse"));
    /// @todo
}

} // namespace Comprehend
} // namespace QtAws
