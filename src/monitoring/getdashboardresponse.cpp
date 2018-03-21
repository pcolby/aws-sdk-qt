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

#include "getdashboardresponse.h"
#include "getdashboardresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatch {

/**
 * @class  GetDashboardResponse
 *
 * @brief  Handles CloudWatch GetDashboard responses.
 *
 * @see    CloudWatchClient::getDashboard
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDashboardResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new GetDashboardResponsePrivate(this), parent)
{
    setRequest(new GetDashboardRequest(request));
    setReply(reply);
}

const GetDashboardRequest * GetDashboardResponse::request() const
{
    Q_D(const GetDashboardResponse);
    return static_cast<const GetDashboardRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatch GetDashboard response.
 *
 * @param  response  Response to parse.
 */
void GetDashboardResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDashboardResponsePrivate
 *
 * @brief  Private implementation for GetDashboardResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDashboardResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDashboardResponse instance.
 */
GetDashboardResponsePrivate::GetDashboardResponsePrivate(
    GetDashboardQueueResponse * const q) : GetDashboardPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatch GetDashboardResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDashboardResponsePrivate::GetDashboardResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDashboardResponse"));
    /// @todo
}
