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

#include "createfieldlevelencryptionconfigresponse.h"
#include "createfieldlevelencryptionconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/**
 * @class  CreateFieldLevelEncryptionConfigResponse
 *
 * @brief  Handles CloudFront CreateFieldLevelEncryptionConfig responses.
 *
 * @see    CloudFrontClient::createFieldLevelEncryptionConfig
 */

/**
 * @brief  Constructs a new CreateFieldLevelEncryptionConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateFieldLevelEncryptionConfigResponse::CreateFieldLevelEncryptionConfigResponse(
        const CreateFieldLevelEncryptionConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreateFieldLevelEncryptionConfigResponsePrivate(this), parent)
{
    setRequest(new CreateFieldLevelEncryptionConfigRequest(request));
    setReply(reply);
}

const CreateFieldLevelEncryptionConfigRequest * CreateFieldLevelEncryptionConfigResponse::request() const
{
    Q_D(const CreateFieldLevelEncryptionConfigResponse);
    return static_cast<const CreateFieldLevelEncryptionConfigRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront CreateFieldLevelEncryptionConfig response.
 *
 * @param  response  Response to parse.
 */
void CreateFieldLevelEncryptionConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateFieldLevelEncryptionConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateFieldLevelEncryptionConfigResponsePrivate
 *
 * @brief  Private implementation for CreateFieldLevelEncryptionConfigResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateFieldLevelEncryptionConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateFieldLevelEncryptionConfigResponse instance.
 */
CreateFieldLevelEncryptionConfigResponsePrivate::CreateFieldLevelEncryptionConfigResponsePrivate(
    CreateFieldLevelEncryptionConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudFront CreateFieldLevelEncryptionConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateFieldLevelEncryptionConfigResponsePrivate::parseCreateFieldLevelEncryptionConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFieldLevelEncryptionConfigResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
