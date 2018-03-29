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

#include "getconsolescreenshotresponse.h"
#include "getconsolescreenshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  GetConsoleScreenshotResponse
 *
 * @brief  Handles EC2 GetConsoleScreenshot responses.
 *
 * @see    EC2Client::getConsoleScreenshot
 */

/**
 * @brief  Constructs a new GetConsoleScreenshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetConsoleScreenshotResponse::GetConsoleScreenshotResponse(
        const GetConsoleScreenshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new GetConsoleScreenshotResponsePrivate(this), parent)
{
    setRequest(new GetConsoleScreenshotRequest(request));
    setReply(reply);
}

const GetConsoleScreenshotRequest * GetConsoleScreenshotResponse::request() const
{
    Q_D(const GetConsoleScreenshotResponse);
    return static_cast<const GetConsoleScreenshotRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 GetConsoleScreenshot response.
 *
 * @param  response  Response to parse.
 */
void GetConsoleScreenshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetConsoleScreenshotResponsePrivate
 *
 * @brief  Private implementation for GetConsoleScreenshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetConsoleScreenshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetConsoleScreenshotResponse instance.
 */
GetConsoleScreenshotResponsePrivate::GetConsoleScreenshotResponsePrivate(
    GetConsoleScreenshotQueueResponse * const q) : GetConsoleScreenshotPrivate(q)
{

}

/**
 * @brief  Parse an EC2 GetConsoleScreenshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetConsoleScreenshotResponsePrivate::GetConsoleScreenshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConsoleScreenshotResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
