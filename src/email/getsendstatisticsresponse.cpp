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

#include "getsendstatisticsresponse.h"
#include "getsendstatisticsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/**
 * @class  GetSendStatisticsResponse
 *
 * @brief  Handles SES GetSendStatistics responses.
 *
 * @see    SESClient::getSendStatistics
 */

/**
 * @brief  Constructs a new GetSendStatisticsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSendStatisticsResponse::GetSendStatisticsResponse(
        const GetSendStatisticsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new GetSendStatisticsResponsePrivate(this), parent)
{
    setRequest(new GetSendStatisticsRequest(request));
    setReply(reply);
}

const GetSendStatisticsRequest * GetSendStatisticsResponse::request() const
{
    Q_D(const GetSendStatisticsResponse);
    return static_cast<const GetSendStatisticsRequest *>(d->request);
}

/**
 * @brief  Parse a SES GetSendStatistics response.
 *
 * @param  response  Response to parse.
 */
void GetSendStatisticsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetSendStatisticsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetSendStatisticsResponsePrivate
 *
 * @brief  Private implementation for GetSendStatisticsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSendStatisticsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSendStatisticsResponse instance.
 */
GetSendStatisticsResponsePrivate::GetSendStatisticsResponsePrivate(
    GetSendStatisticsResponse * const q) : SESResponsePrivate(q)
{

}

/**
 * @brief  Parse an SES GetSendStatisticsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSendStatisticsResponsePrivate::parseGetSendStatisticsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSendStatisticsResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
