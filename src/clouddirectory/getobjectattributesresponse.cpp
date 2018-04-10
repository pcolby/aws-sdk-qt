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

#include "getobjectattributesresponse.h"
#include "getobjectattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  GetObjectAttributesResponse
 *
 * @brief  Handles CloudDirectory GetObjectAttributes responses.
 *
 * @see    CloudDirectoryClient::getObjectAttributes
 */

/**
 * @brief  Constructs a new GetObjectAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetObjectAttributesResponse::GetObjectAttributesResponse(
        const GetObjectAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new GetObjectAttributesResponsePrivate(this), parent)
{
    setRequest(new GetObjectAttributesRequest(request));
    setReply(reply);
}

const GetObjectAttributesRequest * GetObjectAttributesResponse::request() const
{
    Q_D(const GetObjectAttributesResponse);
    return static_cast<const GetObjectAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory GetObjectAttributes response.
 *
 * @param  response  Response to parse.
 */
void GetObjectAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetObjectAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetObjectAttributesResponsePrivate
 *
 * @brief  Private implementation for GetObjectAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetObjectAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetObjectAttributesResponse instance.
 */
GetObjectAttributesResponsePrivate::GetObjectAttributesResponsePrivate(
    GetObjectAttributesResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory GetObjectAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetObjectAttributesResponsePrivate::parseGetObjectAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetObjectAttributesResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
