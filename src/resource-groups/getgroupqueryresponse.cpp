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

#include "getgroupqueryresponse.h"
#include "getgroupqueryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResourceGroups {

/**
 * @class  GetGroupQueryResponse
 *
 * @brief  Handles ResourceGroups GetGroupQuery responses.
 *
 * @see    ResourceGroupsClient::getGroupQuery
 */

/**
 * @brief  Constructs a new GetGroupQueryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetGroupQueryResponse::GetGroupQueryResponse(
        const GetGroupQueryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsResponse(new GetGroupQueryResponsePrivate(this), parent)
{
    setRequest(new GetGroupQueryRequest(request));
    setReply(reply);
}

const GetGroupQueryRequest * GetGroupQueryResponse::request() const
{
    Q_D(const GetGroupQueryResponse);
    return static_cast<const GetGroupQueryRequest *>(d->request);
}

/**
 * @brief  Parse a ResourceGroups GetGroupQuery response.
 *
 * @param  response  Response to parse.
 */
void GetGroupQueryResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetGroupQueryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetGroupQueryResponsePrivate
 *
 * @brief  Private implementation for GetGroupQueryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetGroupQueryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetGroupQueryResponse instance.
 */
GetGroupQueryResponsePrivate::GetGroupQueryResponsePrivate(
    GetGroupQueryResponse * const q) : ResourceGroupsResponsePrivate(q)
{

}

/**
 * @brief  Parse an ResourceGroups GetGroupQueryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetGroupQueryResponsePrivate::parseGetGroupQueryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGroupQueryResponse"));
    /// @todo
}

} // namespace ResourceGroups
} // namespace QtAws
