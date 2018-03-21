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

#include "describeinputresponse.h"
#include "describeinputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MediaLive {

/**
 * @class  DescribeInputResponse
 *
 * @brief  Handles MediaLive DescribeInput responses.
 *
 * @see    MediaLiveClient::describeInput
 */

/**
 * @brief  Constructs a new DescribeInputResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeInputResponse::DescribeInputResponse(
        const DescribeInputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new DescribeInputResponsePrivate(this), parent)
{
    setRequest(new DescribeInputRequest(request));
    setReply(reply);
}

const DescribeInputRequest * DescribeInputResponse::request() const
{
    Q_D(const DescribeInputResponse);
    return static_cast<const DescribeInputRequest *>(d->request);
}

/**
 * @brief  Parse a MediaLive DescribeInput response.
 *
 * @param  response  Response to parse.
 */
void DescribeInputResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeInputResponsePrivate
 *
 * @brief  Private implementation for DescribeInputResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInputResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeInputResponse instance.
 */
DescribeInputResponsePrivate::DescribeInputResponsePrivate(
    DescribeInputQueueResponse * const q) : DescribeInputPrivate(q)
{

}

/**
 * @brief  Parse an MediaLive DescribeInputResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeInputResponsePrivate::DescribeInputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInputResponse"));
    /// @todo
}

} // namespace MediaLive
} // namespace AWS
