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

#include "deletefieldlevelencryptionprofileresponse.h"
#include "deletefieldlevelencryptionprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/**
 * @class  DeleteFieldLevelEncryptionProfileResponse
 *
 * @brief  Handles CloudFront DeleteFieldLevelEncryptionProfile responses.
 *
 * @see    CloudFrontClient::deleteFieldLevelEncryptionProfile
 */

/**
 * @brief  Constructs a new DeleteFieldLevelEncryptionProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteFieldLevelEncryptionProfileResponse::DeleteFieldLevelEncryptionProfileResponse(
        const DeleteFieldLevelEncryptionProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new DeleteFieldLevelEncryptionProfileResponsePrivate(this), parent)
{
    setRequest(new DeleteFieldLevelEncryptionProfileRequest(request));
    setReply(reply);
}

const DeleteFieldLevelEncryptionProfileRequest * DeleteFieldLevelEncryptionProfileResponse::request() const
{
    Q_D(const DeleteFieldLevelEncryptionProfileResponse);
    return static_cast<const DeleteFieldLevelEncryptionProfileRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront DeleteFieldLevelEncryptionProfile response.
 *
 * @param  response  Response to parse.
 */
void DeleteFieldLevelEncryptionProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteFieldLevelEncryptionProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteFieldLevelEncryptionProfileResponsePrivate
 *
 * @brief  Private implementation for DeleteFieldLevelEncryptionProfileResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFieldLevelEncryptionProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteFieldLevelEncryptionProfileResponse instance.
 */
DeleteFieldLevelEncryptionProfileResponsePrivate::DeleteFieldLevelEncryptionProfileResponsePrivate(
    DeleteFieldLevelEncryptionProfileResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudFront DeleteFieldLevelEncryptionProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteFieldLevelEncryptionProfileResponsePrivate::parseDeleteFieldLevelEncryptionProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFieldLevelEncryptionProfileResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
