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

#include "setqueueattributesresponse.h"
#include "setqueueattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SQS {

/**
 * @class  SetQueueAttributesResponse
 *
 * @brief  Handles SQS SetQueueAttributes responses.
 *
 * @see    SQSClient::setQueueAttributes
 */

/**
 * @brief  Constructs a new SetQueueAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetQueueAttributesResponse::SetQueueAttributesResponse(
        const SetQueueAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SQSResponse(new SetQueueAttributesResponsePrivate(this), parent)
{
    setRequest(new SetQueueAttributesRequest(request));
    setReply(reply);
}

const SetQueueAttributesRequest * SetQueueAttributesResponse::request() const
{
    Q_D(const SetQueueAttributesResponse);
    return static_cast<const SetQueueAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a SQS SetQueueAttributes response.
 *
 * @param  response  Response to parse.
 */
void SetQueueAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetQueueAttributesResponsePrivate
 *
 * @brief  Private implementation for SetQueueAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetQueueAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetQueueAttributesResponse instance.
 */
SetQueueAttributesResponsePrivate::SetQueueAttributesResponsePrivate(
    SetQueueAttributesResponse * const q) : SQSResponsePrivate(q)
{

}

/**
 * @brief  Parse an SQS SetQueueAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetQueueAttributesResponsePrivate::SetQueueAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetQueueAttributesResponse"));
    /// @todo
}

} // namespace SQS
} // namespace QtAws
