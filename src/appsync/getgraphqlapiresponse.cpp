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

#include "getgraphqlapiresponse.h"
#include "getgraphqlapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/**
 * @class  GetGraphqlApiResponse
 *
 * @brief  Handles AppSync GetGraphqlApi responses.
 *
 * @see    AppSyncClient::getGraphqlApi
 */

/**
 * @brief  Constructs a new GetGraphqlApiResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetGraphqlApiResponse::GetGraphqlApiResponse(
        const GetGraphqlApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new GetGraphqlApiResponsePrivate(this), parent)
{
    setRequest(new GetGraphqlApiRequest(request));
    setReply(reply);
}

const GetGraphqlApiRequest * GetGraphqlApiResponse::request() const
{
    Q_D(const GetGraphqlApiResponse);
    return static_cast<const GetGraphqlApiRequest *>(d->request);
}

/**
 * @brief  Parse a AppSync GetGraphqlApi response.
 *
 * @param  response  Response to parse.
 */
void GetGraphqlApiResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetGraphqlApiResponsePrivate
 *
 * @brief  Private implementation for GetGraphqlApiResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetGraphqlApiResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetGraphqlApiResponse instance.
 */
GetGraphqlApiResponsePrivate::GetGraphqlApiResponsePrivate(
    GetGraphqlApiResponse * const q) : AppSyncResponsePrivate(q)
{

}

/**
 * @brief  Parse an AppSync GetGraphqlApiResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetGraphqlApiResponsePrivate::GetGraphqlApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGraphqlApiResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace QtAws
