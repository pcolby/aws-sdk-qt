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

#include "deletefieldlevelencryptionconfigresponse.h"
#include "deletefieldlevelencryptionconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/**
 * @class  DeleteFieldLevelEncryptionConfigResponse
 *
 * @brief  Handles CloudFront DeleteFieldLevelEncryptionConfig responses.
 *
 * @see    CloudFrontClient::deleteFieldLevelEncryptionConfig
 */

/**
 * @brief  Constructs a new DeleteFieldLevelEncryptionConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteFieldLevelEncryptionConfigResponse::DeleteFieldLevelEncryptionConfigResponse(
        const DeleteFieldLevelEncryptionConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new DeleteFieldLevelEncryptionConfigResponsePrivate(this), parent)
{
    setRequest(new DeleteFieldLevelEncryptionConfigRequest(request));
    setReply(reply);
}

const DeleteFieldLevelEncryptionConfigRequest * DeleteFieldLevelEncryptionConfigResponse::request() const
{
    Q_D(const DeleteFieldLevelEncryptionConfigResponse);
    return static_cast<const DeleteFieldLevelEncryptionConfigRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront DeleteFieldLevelEncryptionConfig response.
 *
 * @param  response  Response to parse.
 */
void DeleteFieldLevelEncryptionConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteFieldLevelEncryptionConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteFieldLevelEncryptionConfigResponsePrivate
 *
 * @brief  Private implementation for DeleteFieldLevelEncryptionConfigResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFieldLevelEncryptionConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteFieldLevelEncryptionConfigResponse instance.
 */
DeleteFieldLevelEncryptionConfigResponsePrivate::DeleteFieldLevelEncryptionConfigResponsePrivate(
    DeleteFieldLevelEncryptionConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudFront DeleteFieldLevelEncryptionConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteFieldLevelEncryptionConfigResponsePrivate::parseDeleteFieldLevelEncryptionConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFieldLevelEncryptionConfigResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
