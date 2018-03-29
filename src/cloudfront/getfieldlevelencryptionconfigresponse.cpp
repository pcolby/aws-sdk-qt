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

#include "getfieldlevelencryptionconfigresponse.h"
#include "getfieldlevelencryptionconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/**
 * @class  GetFieldLevelEncryptionConfigResponse
 *
 * @brief  Handles CloudFront GetFieldLevelEncryptionConfig responses.
 *
 * @see    CloudFrontClient::getFieldLevelEncryptionConfig
 */

/**
 * @brief  Constructs a new GetFieldLevelEncryptionConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetFieldLevelEncryptionConfigResponse::GetFieldLevelEncryptionConfigResponse(
        const GetFieldLevelEncryptionConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetFieldLevelEncryptionConfigResponsePrivate(this), parent)
{
    setRequest(new GetFieldLevelEncryptionConfigRequest(request));
    setReply(reply);
}

const GetFieldLevelEncryptionConfigRequest * GetFieldLevelEncryptionConfigResponse::request() const
{
    Q_D(const GetFieldLevelEncryptionConfigResponse);
    return static_cast<const GetFieldLevelEncryptionConfigRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront GetFieldLevelEncryptionConfig response.
 *
 * @param  response  Response to parse.
 */
void GetFieldLevelEncryptionConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetFieldLevelEncryptionConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetFieldLevelEncryptionConfigResponsePrivate
 *
 * @brief  Private implementation for GetFieldLevelEncryptionConfigResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetFieldLevelEncryptionConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetFieldLevelEncryptionConfigResponse instance.
 */
GetFieldLevelEncryptionConfigResponsePrivate::GetFieldLevelEncryptionConfigResponsePrivate(
    GetFieldLevelEncryptionConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudFront GetFieldLevelEncryptionConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetFieldLevelEncryptionConfigResponsePrivate::parseGetFieldLevelEncryptionConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFieldLevelEncryptionConfigResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
