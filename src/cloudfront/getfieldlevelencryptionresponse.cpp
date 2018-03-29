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

#include "getfieldlevelencryptionresponse.h"
#include "getfieldlevelencryptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/**
 * @class  GetFieldLevelEncryptionResponse
 *
 * @brief  Handles CloudFront GetFieldLevelEncryption responses.
 *
 * @see    CloudFrontClient::getFieldLevelEncryption
 */

/**
 * @brief  Constructs a new GetFieldLevelEncryptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetFieldLevelEncryptionResponse::GetFieldLevelEncryptionResponse(
        const GetFieldLevelEncryptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetFieldLevelEncryptionResponsePrivate(this), parent)
{
    setRequest(new GetFieldLevelEncryptionRequest(request));
    setReply(reply);
}

const GetFieldLevelEncryptionRequest * GetFieldLevelEncryptionResponse::request() const
{
    Q_D(const GetFieldLevelEncryptionResponse);
    return static_cast<const GetFieldLevelEncryptionRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront GetFieldLevelEncryption response.
 *
 * @param  response  Response to parse.
 */
void GetFieldLevelEncryptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetFieldLevelEncryptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetFieldLevelEncryptionResponsePrivate
 *
 * @brief  Private implementation for GetFieldLevelEncryptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetFieldLevelEncryptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetFieldLevelEncryptionResponse instance.
 */
GetFieldLevelEncryptionResponsePrivate::GetFieldLevelEncryptionResponsePrivate(
    GetFieldLevelEncryptionResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudFront GetFieldLevelEncryptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetFieldLevelEncryptionResponsePrivate::parseGetFieldLevelEncryptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFieldLevelEncryptionResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
