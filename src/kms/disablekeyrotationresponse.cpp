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

#include "disablekeyrotationresponse.h"
#include "disablekeyrotationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KMS {

/**
 * @class  DisableKeyRotationResponse
 *
 * @brief  Handles KMS DisableKeyRotation responses.
 *
 * @see    KMSClient::disableKeyRotation
 */

/**
 * @brief  Constructs a new DisableKeyRotationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisableKeyRotationResponse::DisableKeyRotationResponse(
        const DisableKeyRotationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DisableKeyRotationResponse(new DisableKeyRotationResponsePrivate(this), parent)
{
    setRequest(new DisableKeyRotationRequest(request));
    setReply(reply);
}

const DisableKeyRotationRequest * DisableKeyRotationResponse::request() const
{
    Q_D(const DisableKeyRotationResponse);
    return static_cast<const DisableKeyRotationRequest *>(d->request);
}

/**
 * @brief  Parse a KMS DisableKeyRotation response.
 *
 * @param  response  Response to parse.
 */
void DisableKeyRotationResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisableKeyRotationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisableKeyRotationResponsePrivate
 *
 * @brief  Private implementation for DisableKeyRotationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableKeyRotationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisableKeyRotationResponse instance.
 */
DisableKeyRotationResponsePrivate::DisableKeyRotationResponsePrivate(
    DisableKeyRotationResponse * const q) : KMSResponsePrivate(q)
{

}

/**
 * @brief  Parse an KMS DisableKeyRotationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisableKeyRotationResponsePrivate::parseDisableKeyRotationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableKeyRotationResponse"));
    /// @todo
}

} // namespace KMS
} // namespace QtAws
