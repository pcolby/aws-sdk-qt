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

#include "getsegmentversionsresponse.h"
#include "getsegmentversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/**
 * @class  GetSegmentVersionsResponse
 *
 * @brief  Handles Pinpoint GetSegmentVersions responses.
 *
 * @see    PinpointClient::getSegmentVersions
 */

/**
 * @brief  Constructs a new GetSegmentVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSegmentVersionsResponse::GetSegmentVersionsResponse(
        const GetSegmentVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetSegmentVersionsResponsePrivate(this), parent)
{
    setRequest(new GetSegmentVersionsRequest(request));
    setReply(reply);
}

const GetSegmentVersionsRequest * GetSegmentVersionsResponse::request() const
{
    Q_D(const GetSegmentVersionsResponse);
    return static_cast<const GetSegmentVersionsRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint GetSegmentVersions response.
 *
 * @param  response  Response to parse.
 */
void GetSegmentVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetSegmentVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetSegmentVersionsResponsePrivate
 *
 * @brief  Private implementation for GetSegmentVersionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSegmentVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSegmentVersionsResponse instance.
 */
GetSegmentVersionsResponsePrivate::GetSegmentVersionsResponsePrivate(
    GetSegmentVersionsResponse * const q) : PinpointResponsePrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint GetSegmentVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSegmentVersionsResponsePrivate::GetSegmentVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSegmentVersionsResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
