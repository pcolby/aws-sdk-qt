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

#include "getthreatintelsetresponse.h"
#include "getthreatintelsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GuardDuty {

/**
 * @class  GetThreatIntelSetResponse
 *
 * @brief  Handles GuardDuty GetThreatIntelSet responses.
 *
 * @see    GuardDutyClient::getThreatIntelSet
 */

/**
 * @brief  Constructs a new GetThreatIntelSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetThreatIntelSetResponse::GetThreatIntelSetResponse(
        const GetThreatIntelSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new GetThreatIntelSetResponsePrivate(this), parent)
{
    setRequest(new GetThreatIntelSetRequest(request));
    setReply(reply);
}

const GetThreatIntelSetRequest * GetThreatIntelSetResponse::request() const
{
    Q_D(const GetThreatIntelSetResponse);
    return static_cast<const GetThreatIntelSetRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty GetThreatIntelSet response.
 *
 * @param  response  Response to parse.
 */
void GetThreatIntelSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetThreatIntelSetResponsePrivate
 *
 * @brief  Private implementation for GetThreatIntelSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetThreatIntelSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetThreatIntelSetResponse instance.
 */
GetThreatIntelSetResponsePrivate::GetThreatIntelSetResponsePrivate(
    GetThreatIntelSetQueueResponse * const q) : GetThreatIntelSetPrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty GetThreatIntelSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetThreatIntelSetResponsePrivate::GetThreatIntelSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetThreatIntelSetResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace AWS
