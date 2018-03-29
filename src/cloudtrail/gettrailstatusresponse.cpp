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

#include "gettrailstatusresponse.h"
#include "gettrailstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudTrail {

/**
 * @class  GetTrailStatusResponse
 *
 * @brief  Handles CloudTrail GetTrailStatus responses.
 *
 * @see    CloudTrailClient::getTrailStatus
 */

/**
 * @brief  Constructs a new GetTrailStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTrailStatusResponse::GetTrailStatusResponse(
        const GetTrailStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudTrailResponse(new GetTrailStatusResponsePrivate(this), parent)
{
    setRequest(new GetTrailStatusRequest(request));
    setReply(reply);
}

const GetTrailStatusRequest * GetTrailStatusResponse::request() const
{
    Q_D(const GetTrailStatusResponse);
    return static_cast<const GetTrailStatusRequest *>(d->request);
}

/**
 * @brief  Parse a CloudTrail GetTrailStatus response.
 *
 * @param  response  Response to parse.
 */
void GetTrailStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetTrailStatusResponsePrivate
 *
 * @brief  Private implementation for GetTrailStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTrailStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetTrailStatusResponse instance.
 */
GetTrailStatusResponsePrivate::GetTrailStatusResponsePrivate(
    GetTrailStatusQueueResponse * const q) : GetTrailStatusPrivate(q)
{

}

/**
 * @brief  Parse an CloudTrail GetTrailStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetTrailStatusResponsePrivate::GetTrailStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTrailStatusResponse"));
    /// @todo
}

} // namespace CloudTrail
} // namespace QtAws
