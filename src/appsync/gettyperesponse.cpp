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

#include "gettyperesponse.h"
#include "gettyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/**
 * @class  GetTypeResponse
 *
 * @brief  Handles AppSync GetType responses.
 *
 * @see    AppSyncClient::getType
 */

/**
 * @brief  Constructs a new GetTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTypeResponse::GetTypeResponse(
        const GetTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new GetTypeResponsePrivate(this), parent)
{
    setRequest(new GetTypeRequest(request));
    setReply(reply);
}

const GetTypeRequest * GetTypeResponse::request() const
{
    Q_D(const GetTypeResponse);
    return static_cast<const GetTypeRequest *>(d->request);
}

/**
 * @brief  Parse a AppSync GetType response.
 *
 * @param  response  Response to parse.
 */
void GetTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetTypeResponsePrivate
 *
 * @brief  Private implementation for GetTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetTypeResponse instance.
 */
GetTypeResponsePrivate::GetTypeResponsePrivate(
    GetTypeResponse * const q) : AppSyncResponsePrivate(q)
{

}

/**
 * @brief  Parse an AppSync GetTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetTypeResponsePrivate::GetTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTypeResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace QtAws
