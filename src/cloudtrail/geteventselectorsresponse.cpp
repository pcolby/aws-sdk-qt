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

#include "geteventselectorsresponse.h"
#include "geteventselectorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudTrail {

/**
 * @class  GetEventSelectorsResponse
 *
 * @brief  Handles CloudTrail GetEventSelectors responses.
 *
 * @see    CloudTrailClient::getEventSelectors
 */

/**
 * @brief  Constructs a new GetEventSelectorsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetEventSelectorsResponse::GetEventSelectorsResponse(
        const GetEventSelectorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudTrailResponse(new GetEventSelectorsResponsePrivate(this), parent)
{
    setRequest(new GetEventSelectorsRequest(request));
    setReply(reply);
}

const GetEventSelectorsRequest * GetEventSelectorsResponse::request() const
{
    Q_D(const GetEventSelectorsResponse);
    return static_cast<const GetEventSelectorsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudTrail GetEventSelectors response.
 *
 * @param  response  Response to parse.
 */
void GetEventSelectorsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetEventSelectorsResponsePrivate
 *
 * @brief  Private implementation for GetEventSelectorsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetEventSelectorsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetEventSelectorsResponse instance.
 */
GetEventSelectorsResponsePrivate::GetEventSelectorsResponsePrivate(
    GetEventSelectorsQueueResponse * const q) : GetEventSelectorsPrivate(q)
{

}

/**
 * @brief  Parse an CloudTrail GetEventSelectorsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetEventSelectorsResponsePrivate::GetEventSelectorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEventSelectorsResponse"));
    /// @todo
}

} // namespace CloudTrail
} // namespace AWS
