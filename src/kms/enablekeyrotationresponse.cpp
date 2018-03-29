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

#include "enablekeyrotationresponse.h"
#include "enablekeyrotationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace KMS {

/**
 * @class  EnableKeyRotationResponse
 *
 * @brief  Handles KMS EnableKeyRotation responses.
 *
 * @see    KMSClient::enableKeyRotation
 */

/**
 * @brief  Constructs a new EnableKeyRotationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnableKeyRotationResponse::EnableKeyRotationResponse(
        const EnableKeyRotationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new EnableKeyRotationResponsePrivate(this), parent)
{
    setRequest(new EnableKeyRotationRequest(request));
    setReply(reply);
}

const EnableKeyRotationRequest * EnableKeyRotationResponse::request() const
{
    Q_D(const EnableKeyRotationResponse);
    return static_cast<const EnableKeyRotationRequest *>(d->request);
}

/**
 * @brief  Parse a KMS EnableKeyRotation response.
 *
 * @param  response  Response to parse.
 */
void EnableKeyRotationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  EnableKeyRotationResponsePrivate
 *
 * @brief  Private implementation for EnableKeyRotationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableKeyRotationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EnableKeyRotationResponse instance.
 */
EnableKeyRotationResponsePrivate::EnableKeyRotationResponsePrivate(
    EnableKeyRotationQueueResponse * const q) : EnableKeyRotationPrivate(q)
{

}

/**
 * @brief  Parse an KMS EnableKeyRotationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EnableKeyRotationResponsePrivate::EnableKeyRotationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableKeyRotationResponse"));
    /// @todo
}

} // namespace KMS
} // namespace AWS
