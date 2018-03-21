/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getresolverresponse.h"
#include "getresolverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AppSync {

/**
 * @class  GetResolverResponse
 *
 * @brief  Handles AppSync GetResolver responses.
 *
 * @see    AppSyncClient::getResolver
 */

/**
 * @brief  Constructs a new GetResolverResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetResolverResponse::GetResolverResponse(
        const GetResolverRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new GetResolverResponsePrivate(this), parent)
{
    setRequest(new GetResolverRequest(request));
    setReply(reply);
}

const GetResolverRequest * GetResolverResponse::request() const
{
    Q_D(const GetResolverResponse);
    return static_cast<const GetResolverRequest *>(d->request);
}

/**
 * @brief  Parse a AppSync GetResolver response.
 *
 * @param  response  Response to parse.
 */
void GetResolverResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetResolverResponsePrivate
 *
 * @brief  Private implementation for GetResolverResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetResolverResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetResolverResponse instance.
 */
GetResolverResponsePrivate::GetResolverResponsePrivate(
    GetResolverQueueResponse * const q) : GetResolverPrivate(q)
{

}

/**
 * @brief  Parse an AppSync GetResolverResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetResolverResponsePrivate::GetResolverResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResolverResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace AWS
