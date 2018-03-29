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

#include "restoreobjectresponse.h"
#include "restoreobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  RestoreObjectResponse
 *
 * @brief  Handles S3 RestoreObject responses.
 *
 * @see    S3Client::restoreObject
 */

/**
 * @brief  Constructs a new RestoreObjectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RestoreObjectResponse::RestoreObjectResponse(
        const RestoreObjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new RestoreObjectResponsePrivate(this), parent)
{
    setRequest(new RestoreObjectRequest(request));
    setReply(reply);
}

const RestoreObjectRequest * RestoreObjectResponse::request() const
{
    Q_D(const RestoreObjectResponse);
    return static_cast<const RestoreObjectRequest *>(d->request);
}

/**
 * @brief  Parse a S3 RestoreObject response.
 *
 * @param  response  Response to parse.
 */
void RestoreObjectResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RestoreObjectResponsePrivate
 *
 * @brief  Private implementation for RestoreObjectResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreObjectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RestoreObjectResponse instance.
 */
RestoreObjectResponsePrivate::RestoreObjectResponsePrivate(
    RestoreObjectResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 RestoreObjectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RestoreObjectResponsePrivate::RestoreObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreObjectResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
