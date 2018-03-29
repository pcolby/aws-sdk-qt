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

#include "getqueueurlresponse.h"
#include "getqueueurlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SQS {

/**
 * @class  GetQueueUrlResponse
 *
 * @brief  Handles SQS GetQueueUrl responses.
 *
 * @see    SQSClient::getQueueUrl
 */

/**
 * @brief  Constructs a new GetQueueUrlResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetQueueUrlResponse::GetQueueUrlResponse(
        const GetQueueUrlRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SQSResponse(new GetQueueUrlResponsePrivate(this), parent)
{
    setRequest(new GetQueueUrlRequest(request));
    setReply(reply);
}

const GetQueueUrlRequest * GetQueueUrlResponse::request() const
{
    Q_D(const GetQueueUrlResponse);
    return static_cast<const GetQueueUrlRequest *>(d->request);
}

/**
 * @brief  Parse a SQS GetQueueUrl response.
 *
 * @param  response  Response to parse.
 */
void GetQueueUrlResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetQueueUrlResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetQueueUrlResponsePrivate
 *
 * @brief  Private implementation for GetQueueUrlResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetQueueUrlResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetQueueUrlResponse instance.
 */
GetQueueUrlResponsePrivate::GetQueueUrlResponsePrivate(
    GetQueueUrlResponse * const q) : SQSResponsePrivate(q)
{

}

/**
 * @brief  Parse an SQS GetQueueUrlResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetQueueUrlResponsePrivate::GetQueueUrlResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetQueueUrlResponse"));
    /// @todo
}

} // namespace SQS
} // namespace QtAws
