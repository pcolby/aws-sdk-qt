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

#include "updateaccesskeyresponse.h"
#include "updateaccesskeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  UpdateAccessKeyResponse
 *
 * @brief  Handles IAM UpdateAccessKey responses.
 *
 * @see    IAMClient::updateAccessKey
 */

/**
 * @brief  Constructs a new UpdateAccessKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateAccessKeyResponse::UpdateAccessKeyResponse(
        const UpdateAccessKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new UpdateAccessKeyResponsePrivate(this), parent)
{
    setRequest(new UpdateAccessKeyRequest(request));
    setReply(reply);
}

const UpdateAccessKeyRequest * UpdateAccessKeyResponse::request() const
{
    Q_D(const UpdateAccessKeyResponse);
    return static_cast<const UpdateAccessKeyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM UpdateAccessKey response.
 *
 * @param  response  Response to parse.
 */
void UpdateAccessKeyResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateAccessKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateAccessKeyResponsePrivate
 *
 * @brief  Private implementation for UpdateAccessKeyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAccessKeyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateAccessKeyResponse instance.
 */
UpdateAccessKeyResponsePrivate::UpdateAccessKeyResponsePrivate(
    UpdateAccessKeyResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM UpdateAccessKeyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateAccessKeyResponsePrivate::UpdateAccessKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAccessKeyResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
