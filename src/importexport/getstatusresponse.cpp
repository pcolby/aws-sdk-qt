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

#include "getstatusresponse.h"
#include "getstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImportExport {

/**
 * @class  GetStatusResponse
 *
 * @brief  Handles ImportExport GetStatus responses.
 *
 * @see    ImportExportClient::getStatus
 */

/**
 * @brief  Constructs a new GetStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetStatusResponse::GetStatusResponse(
        const GetStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImportExportResponse(new GetStatusResponsePrivate(this), parent)
{
    setRequest(new GetStatusRequest(request));
    setReply(reply);
}

const GetStatusRequest * GetStatusResponse::request() const
{
    Q_D(const GetStatusResponse);
    return static_cast<const GetStatusRequest *>(d->request);
}

/**
 * @brief  Parse a ImportExport GetStatus response.
 *
 * @param  response  Response to parse.
 */
void GetStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetStatusResponsePrivate
 *
 * @brief  Private implementation for GetStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetStatusResponse instance.
 */
GetStatusResponsePrivate::GetStatusResponsePrivate(
    GetStatusResponse * const q) : ImportExportResponsePrivate(q)
{

}

/**
 * @brief  Parse an ImportExport GetStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetStatusResponsePrivate::parseGetStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStatusResponse"));
    /// @todo
}

} // namespace ImportExport
} // namespace QtAws
