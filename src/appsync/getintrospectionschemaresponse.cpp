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

#include "getintrospectionschemaresponse.h"
#include "getintrospectionschemaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/**
 * @class  GetIntrospectionSchemaResponse
 *
 * @brief  Handles AppSync GetIntrospectionSchema responses.
 *
 * @see    AppSyncClient::getIntrospectionSchema
 */

/**
 * @brief  Constructs a new GetIntrospectionSchemaResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetIntrospectionSchemaResponse::GetIntrospectionSchemaResponse(
        const GetIntrospectionSchemaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new GetIntrospectionSchemaResponsePrivate(this), parent)
{
    setRequest(new GetIntrospectionSchemaRequest(request));
    setReply(reply);
}

const GetIntrospectionSchemaRequest * GetIntrospectionSchemaResponse::request() const
{
    Q_D(const GetIntrospectionSchemaResponse);
    return static_cast<const GetIntrospectionSchemaRequest *>(d->request);
}

/**
 * @brief  Parse a AppSync GetIntrospectionSchema response.
 *
 * @param  response  Response to parse.
 */
void GetIntrospectionSchemaResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetIntrospectionSchemaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetIntrospectionSchemaResponsePrivate
 *
 * @brief  Private implementation for GetIntrospectionSchemaResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIntrospectionSchemaResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetIntrospectionSchemaResponse instance.
 */
GetIntrospectionSchemaResponsePrivate::GetIntrospectionSchemaResponsePrivate(
    GetIntrospectionSchemaResponse * const q) : AppSyncResponsePrivate(q)
{

}

/**
 * @brief  Parse an AppSync GetIntrospectionSchemaResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetIntrospectionSchemaResponsePrivate::parseGetIntrospectionSchemaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIntrospectionSchemaResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace QtAws
