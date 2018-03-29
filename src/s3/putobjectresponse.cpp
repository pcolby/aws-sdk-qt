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

#include "putobjectresponse.h"
#include "putobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  PutObjectResponse
 *
 * @brief  Handles S3 PutObject responses.
 *
 * @see    S3Client::putObject
 */

/**
 * @brief  Constructs a new PutObjectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutObjectResponse::PutObjectResponse(
        const PutObjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutObjectResponsePrivate(this), parent)
{
    setRequest(new PutObjectRequest(request));
    setReply(reply);
}

const PutObjectRequest * PutObjectResponse::request() const
{
    Q_D(const PutObjectResponse);
    return static_cast<const PutObjectRequest *>(d->request);
}

/**
 * @brief  Parse a S3 PutObject response.
 *
 * @param  response  Response to parse.
 */
void PutObjectResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutObjectResponsePrivate
 *
 * @brief  Private implementation for PutObjectResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutObjectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutObjectResponse instance.
 */
PutObjectResponsePrivate::PutObjectResponsePrivate(
    PutObjectResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 PutObjectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutObjectResponsePrivate::PutObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutObjectResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
