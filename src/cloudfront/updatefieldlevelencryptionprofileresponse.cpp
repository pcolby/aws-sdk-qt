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

#include "updatefieldlevelencryptionprofileresponse.h"
#include "updatefieldlevelencryptionprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/**
 * @class  UpdateFieldLevelEncryptionProfileResponse
 *
 * @brief  Handles CloudFront UpdateFieldLevelEncryptionProfile responses.
 *
 * @see    CloudFrontClient::updateFieldLevelEncryptionProfile
 */

/**
 * @brief  Constructs a new UpdateFieldLevelEncryptionProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateFieldLevelEncryptionProfileResponse::UpdateFieldLevelEncryptionProfileResponse(
        const UpdateFieldLevelEncryptionProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new UpdateFieldLevelEncryptionProfileResponsePrivate(this), parent)
{
    setRequest(new UpdateFieldLevelEncryptionProfileRequest(request));
    setReply(reply);
}

const UpdateFieldLevelEncryptionProfileRequest * UpdateFieldLevelEncryptionProfileResponse::request() const
{
    Q_D(const UpdateFieldLevelEncryptionProfileResponse);
    return static_cast<const UpdateFieldLevelEncryptionProfileRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront UpdateFieldLevelEncryptionProfile response.
 *
 * @param  response  Response to parse.
 */
void UpdateFieldLevelEncryptionProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateFieldLevelEncryptionProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateFieldLevelEncryptionProfileResponsePrivate
 *
 * @brief  Private implementation for UpdateFieldLevelEncryptionProfileResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFieldLevelEncryptionProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateFieldLevelEncryptionProfileResponse instance.
 */
UpdateFieldLevelEncryptionProfileResponsePrivate::UpdateFieldLevelEncryptionProfileResponsePrivate(
    UpdateFieldLevelEncryptionProfileResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudFront UpdateFieldLevelEncryptionProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateFieldLevelEncryptionProfileResponsePrivate::parseUpdateFieldLevelEncryptionProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFieldLevelEncryptionProfileResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
