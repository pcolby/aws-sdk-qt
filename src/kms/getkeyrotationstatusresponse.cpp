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

#include "getkeyrotationstatusresponse.h"
#include "getkeyrotationstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KMS {

/**
 * @class  GetKeyRotationStatusResponse
 *
 * @brief  Handles KMS GetKeyRotationStatus responses.
 *
 * @see    KMSClient::getKeyRotationStatus
 */

/**
 * @brief  Constructs a new GetKeyRotationStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetKeyRotationStatusResponse::GetKeyRotationStatusResponse(
        const GetKeyRotationStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new GetKeyRotationStatusResponsePrivate(this), parent)
{
    setRequest(new GetKeyRotationStatusRequest(request));
    setReply(reply);
}

const GetKeyRotationStatusRequest * GetKeyRotationStatusResponse::request() const
{
    Q_D(const GetKeyRotationStatusResponse);
    return static_cast<const GetKeyRotationStatusRequest *>(d->request);
}

/**
 * @brief  Parse a KMS GetKeyRotationStatus response.
 *
 * @param  response  Response to parse.
 */
void GetKeyRotationStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetKeyRotationStatusResponsePrivate
 *
 * @brief  Private implementation for GetKeyRotationStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetKeyRotationStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetKeyRotationStatusResponse instance.
 */
GetKeyRotationStatusResponsePrivate::GetKeyRotationStatusResponsePrivate(
    GetKeyRotationStatusQueueResponse * const q) : GetKeyRotationStatusPrivate(q)
{

}

/**
 * @brief  Parse an KMS GetKeyRotationStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetKeyRotationStatusResponsePrivate::GetKeyRotationStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetKeyRotationStatusResponse"));
    /// @todo
}

} // namespace KMS
} // namespace QtAws
