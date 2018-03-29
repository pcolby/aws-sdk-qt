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

#include "getfindingsstatisticsresponse.h"
#include "getfindingsstatisticsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/**
 * @class  GetFindingsStatisticsResponse
 *
 * @brief  Handles GuardDuty GetFindingsStatistics responses.
 *
 * @see    GuardDutyClient::getFindingsStatistics
 */

/**
 * @brief  Constructs a new GetFindingsStatisticsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetFindingsStatisticsResponse::GetFindingsStatisticsResponse(
        const GetFindingsStatisticsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new GetFindingsStatisticsResponsePrivate(this), parent)
{
    setRequest(new GetFindingsStatisticsRequest(request));
    setReply(reply);
}

const GetFindingsStatisticsRequest * GetFindingsStatisticsResponse::request() const
{
    Q_D(const GetFindingsStatisticsResponse);
    return static_cast<const GetFindingsStatisticsRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty GetFindingsStatistics response.
 *
 * @param  response  Response to parse.
 */
void GetFindingsStatisticsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetFindingsStatisticsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetFindingsStatisticsResponsePrivate
 *
 * @brief  Private implementation for GetFindingsStatisticsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetFindingsStatisticsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetFindingsStatisticsResponse instance.
 */
GetFindingsStatisticsResponsePrivate::GetFindingsStatisticsResponsePrivate(
    GetFindingsStatisticsResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty GetFindingsStatisticsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetFindingsStatisticsResponsePrivate::parseGetFindingsStatisticsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFindingsStatisticsResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
