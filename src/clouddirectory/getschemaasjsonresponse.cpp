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

#include "getschemaasjsonresponse.h"
#include "getschemaasjsonresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  GetSchemaAsJsonResponse
 *
 * @brief  Handles CloudDirectory GetSchemaAsJson responses.
 *
 * @see    CloudDirectoryClient::getSchemaAsJson
 */

/**
 * @brief  Constructs a new GetSchemaAsJsonResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSchemaAsJsonResponse::GetSchemaAsJsonResponse(
        const GetSchemaAsJsonRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new GetSchemaAsJsonResponsePrivate(this), parent)
{
    setRequest(new GetSchemaAsJsonRequest(request));
    setReply(reply);
}

const GetSchemaAsJsonRequest * GetSchemaAsJsonResponse::request() const
{
    Q_D(const GetSchemaAsJsonResponse);
    return static_cast<const GetSchemaAsJsonRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory GetSchemaAsJson response.
 *
 * @param  response  Response to parse.
 */
void GetSchemaAsJsonResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetSchemaAsJsonResponsePrivate
 *
 * @brief  Private implementation for GetSchemaAsJsonResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSchemaAsJsonResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSchemaAsJsonResponse instance.
 */
GetSchemaAsJsonResponsePrivate::GetSchemaAsJsonResponsePrivate(
    GetSchemaAsJsonQueueResponse * const q) : GetSchemaAsJsonPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory GetSchemaAsJsonResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSchemaAsJsonResponsePrivate::GetSchemaAsJsonResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSchemaAsJsonResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
