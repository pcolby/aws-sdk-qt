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

#include "changemessagevisibilityresponse.h"
#include "changemessagevisibilityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SQS {

/**
 * @class  ChangeMessageVisibilityResponse
 *
 * @brief  Handles SQS ChangeMessageVisibility responses.
 *
 * @see    SQSClient::changeMessageVisibility
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ChangeMessageVisibilityResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SQSResponse(new ChangeMessageVisibilityResponsePrivate(this), parent)
{
    setRequest(new ChangeMessageVisibilityRequest(request));
    setReply(reply);
}

const ChangeMessageVisibilityRequest * ChangeMessageVisibilityResponse::request() const
{
    Q_D(const ChangeMessageVisibilityResponse);
    return static_cast<const ChangeMessageVisibilityRequest *>(d->request);
}

/**
 * @brief  Parse a SQS ChangeMessageVisibility response.
 *
 * @param  response  Response to parse.
 */
void ChangeMessageVisibilityResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ChangeMessageVisibilityResponsePrivate
 *
 * @brief  Private implementation for ChangeMessageVisibilityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ChangeMessageVisibilityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ChangeMessageVisibilityResponse instance.
 */
ChangeMessageVisibilityResponsePrivate::ChangeMessageVisibilityResponsePrivate(
    ChangeMessageVisibilityQueueResponse * const q) : ChangeMessageVisibilityPrivate(q)
{

}

/**
 * @brief  Parse an SQS ChangeMessageVisibilityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ChangeMessageVisibilityResponsePrivate::ChangeMessageVisibilityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ChangeMessageVisibilityResponse"));
    /// @todo
}

} // namespace SQS
} // namespace AWS
