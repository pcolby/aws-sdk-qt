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

#include "updatefieldlevelencryptionconfigresponse.h"
#include "updatefieldlevelencryptionconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/**
 * @class  UpdateFieldLevelEncryptionConfigResponse
 *
 * @brief  Handles CloudFront UpdateFieldLevelEncryptionConfig responses.
 *
 * @see    CloudFrontClient::updateFieldLevelEncryptionConfig
 */

/**
 * @brief  Constructs a new UpdateFieldLevelEncryptionConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateFieldLevelEncryptionConfigResponse::UpdateFieldLevelEncryptionConfigResponse(
        const UpdateFieldLevelEncryptionConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new UpdateFieldLevelEncryptionConfigResponsePrivate(this), parent)
{
    setRequest(new UpdateFieldLevelEncryptionConfigRequest(request));
    setReply(reply);
}

const UpdateFieldLevelEncryptionConfigRequest * UpdateFieldLevelEncryptionConfigResponse::request() const
{
    Q_D(const UpdateFieldLevelEncryptionConfigResponse);
    return static_cast<const UpdateFieldLevelEncryptionConfigRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront UpdateFieldLevelEncryptionConfig response.
 *
 * @param  response  Response to parse.
 */
void UpdateFieldLevelEncryptionConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateFieldLevelEncryptionConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateFieldLevelEncryptionConfigResponsePrivate
 *
 * @brief  Private implementation for UpdateFieldLevelEncryptionConfigResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFieldLevelEncryptionConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateFieldLevelEncryptionConfigResponse instance.
 */
UpdateFieldLevelEncryptionConfigResponsePrivate::UpdateFieldLevelEncryptionConfigResponsePrivate(
    UpdateFieldLevelEncryptionConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudFront UpdateFieldLevelEncryptionConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateFieldLevelEncryptionConfigResponsePrivate::parseUpdateFieldLevelEncryptionConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFieldLevelEncryptionConfigResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
