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

#include "getschemacreationstatusresponse.h"
#include "getschemacreationstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/**
 * @class  GetSchemaCreationStatusResponse
 *
 * @brief  Handles AppSync GetSchemaCreationStatus responses.
 *
 * @see    AppSyncClient::getSchemaCreationStatus
 */

/**
 * @brief  Constructs a new GetSchemaCreationStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSchemaCreationStatusResponse::GetSchemaCreationStatusResponse(
        const GetSchemaCreationStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetSchemaCreationStatusResponse(new GetSchemaCreationStatusResponsePrivate(this), parent)
{
    setRequest(new GetSchemaCreationStatusRequest(request));
    setReply(reply);
}

const GetSchemaCreationStatusRequest * GetSchemaCreationStatusResponse::request() const
{
    Q_D(const GetSchemaCreationStatusResponse);
    return static_cast<const GetSchemaCreationStatusRequest *>(d->request);
}

/**
 * @brief  Parse a AppSync GetSchemaCreationStatus response.
 *
 * @param  response  Response to parse.
 */
void GetSchemaCreationStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetSchemaCreationStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetSchemaCreationStatusResponsePrivate
 *
 * @brief  Private implementation for GetSchemaCreationStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSchemaCreationStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSchemaCreationStatusResponse instance.
 */
GetSchemaCreationStatusResponsePrivate::GetSchemaCreationStatusResponsePrivate(
    GetSchemaCreationStatusResponse * const q) : AppSyncResponsePrivate(q)
{

}

/**
 * @brief  Parse an AppSync GetSchemaCreationStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSchemaCreationStatusResponsePrivate::parseGetSchemaCreationStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSchemaCreationStatusResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace QtAws
