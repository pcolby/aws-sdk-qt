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

#include "updatekeydescriptionresponse.h"
#include "updatekeydescriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KMS {

/**
 * @class  UpdateKeyDescriptionResponse
 *
 * @brief  Handles KMS UpdateKeyDescription responses.
 *
 * @see    KMSClient::updateKeyDescription
 */

/**
 * @brief  Constructs a new UpdateKeyDescriptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateKeyDescriptionResponse::UpdateKeyDescriptionResponse(
        const UpdateKeyDescriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateKeyDescriptionResponse(new UpdateKeyDescriptionResponsePrivate(this), parent)
{
    setRequest(new UpdateKeyDescriptionRequest(request));
    setReply(reply);
}

const UpdateKeyDescriptionRequest * UpdateKeyDescriptionResponse::request() const
{
    Q_D(const UpdateKeyDescriptionResponse);
    return static_cast<const UpdateKeyDescriptionRequest *>(d->request);
}

/**
 * @brief  Parse a KMS UpdateKeyDescription response.
 *
 * @param  response  Response to parse.
 */
void UpdateKeyDescriptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateKeyDescriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateKeyDescriptionResponsePrivate
 *
 * @brief  Private implementation for UpdateKeyDescriptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateKeyDescriptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateKeyDescriptionResponse instance.
 */
UpdateKeyDescriptionResponsePrivate::UpdateKeyDescriptionResponsePrivate(
    UpdateKeyDescriptionResponse * const q) : KMSResponsePrivate(q)
{

}

/**
 * @brief  Parse an KMS UpdateKeyDescriptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateKeyDescriptionResponsePrivate::parseUpdateKeyDescriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateKeyDescriptionResponse"));
    /// @todo
}

} // namespace KMS
} // namespace QtAws
