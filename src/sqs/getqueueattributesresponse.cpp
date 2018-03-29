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

#include "getqueueattributesresponse.h"
#include "getqueueattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SQS {

/**
 * @class  GetQueueAttributesResponse
 *
 * @brief  Handles SQS GetQueueAttributes responses.
 *
 * @see    SQSClient::getQueueAttributes
 */

/**
 * @brief  Constructs a new GetQueueAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetQueueAttributesResponse::GetQueueAttributesResponse(
        const GetQueueAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetQueueAttributesResponse(new GetQueueAttributesResponsePrivate(this), parent)
{
    setRequest(new GetQueueAttributesRequest(request));
    setReply(reply);
}

const GetQueueAttributesRequest * GetQueueAttributesResponse::request() const
{
    Q_D(const GetQueueAttributesResponse);
    return static_cast<const GetQueueAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a SQS GetQueueAttributes response.
 *
 * @param  response  Response to parse.
 */
void GetQueueAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetQueueAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetQueueAttributesResponsePrivate
 *
 * @brief  Private implementation for GetQueueAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetQueueAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetQueueAttributesResponse instance.
 */
GetQueueAttributesResponsePrivate::GetQueueAttributesResponsePrivate(
    GetQueueAttributesResponse * const q) : SQSResponsePrivate(q)
{

}

/**
 * @brief  Parse an SQS GetQueueAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetQueueAttributesResponsePrivate::parseGetQueueAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetQueueAttributesResponse"));
    /// @todo
}

} // namespace SQS
} // namespace QtAws
