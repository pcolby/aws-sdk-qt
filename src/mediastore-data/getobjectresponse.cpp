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

#include "getobjectresponse.h"
#include "getobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStoreData {

/**
 * @class  GetObjectResponse
 *
 * @brief  Handles MediaStoreData GetObject responses.
 *
 * @see    MediaStoreDataClient::getObject
 */

/**
 * @brief  Constructs a new GetObjectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetObjectResponse::GetObjectResponse(
        const GetObjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreDataResponse(new GetObjectResponsePrivate(this), parent)
{
    setRequest(new GetObjectRequest(request));
    setReply(reply);
}

const GetObjectRequest * GetObjectResponse::request() const
{
    Q_D(const GetObjectResponse);
    return static_cast<const GetObjectRequest *>(d->request);
}

/**
 * @brief  Parse a MediaStoreData GetObject response.
 *
 * @param  response  Response to parse.
 */
void GetObjectResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetObjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetObjectResponsePrivate
 *
 * @brief  Private implementation for GetObjectResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetObjectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetObjectResponse instance.
 */
GetObjectResponsePrivate::GetObjectResponsePrivate(
    GetObjectResponse * const q) : MediaStoreDataResponsePrivate(q)
{

}

/**
 * @brief  Parse an MediaStoreData GetObjectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetObjectResponsePrivate::GetObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetObjectResponse"));
    /// @todo
}

} // namespace MediaStoreData
} // namespace QtAws
