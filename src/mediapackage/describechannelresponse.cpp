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

#include "describechannelresponse.h"
#include "describechannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MediaPackage {

/**
 * @class  DescribeChannelResponse
 *
 * @brief  Handles MediaPackage DescribeChannel responses.
 *
 * @see    MediaPackageClient::describeChannel
 */

/**
 * @brief  Constructs a new DescribeChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeChannelResponse::DescribeChannelResponse(
        const DescribeChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new DescribeChannelResponsePrivate(this), parent)
{
    setRequest(new DescribeChannelRequest(request));
    setReply(reply);
}

const DescribeChannelRequest * DescribeChannelResponse::request() const
{
    Q_D(const DescribeChannelResponse);
    return static_cast<const DescribeChannelRequest *>(d->request);
}

/**
 * @brief  Parse a MediaPackage DescribeChannel response.
 *
 * @param  response  Response to parse.
 */
void DescribeChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeChannelResponsePrivate
 *
 * @brief  Private implementation for DescribeChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeChannelResponse instance.
 */
DescribeChannelResponsePrivate::DescribeChannelResponsePrivate(
    DescribeChannelQueueResponse * const q) : DescribeChannelPrivate(q)
{

}

/**
 * @brief  Parse an MediaPackage DescribeChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeChannelResponsePrivate::DescribeChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeChannelResponse"));
    /// @todo
}

} // namespace MediaPackage
} // namespace AWS
