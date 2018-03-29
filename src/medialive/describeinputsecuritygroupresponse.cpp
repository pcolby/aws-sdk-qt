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

#include "describeinputsecuritygroupresponse.h"
#include "describeinputsecuritygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/**
 * @class  DescribeInputSecurityGroupResponse
 *
 * @brief  Handles MediaLive DescribeInputSecurityGroup responses.
 *
 * @see    MediaLiveClient::describeInputSecurityGroup
 */

/**
 * @brief  Constructs a new DescribeInputSecurityGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeInputSecurityGroupResponse::DescribeInputSecurityGroupResponse(
        const DescribeInputSecurityGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new DescribeInputSecurityGroupResponsePrivate(this), parent)
{
    setRequest(new DescribeInputSecurityGroupRequest(request));
    setReply(reply);
}

const DescribeInputSecurityGroupRequest * DescribeInputSecurityGroupResponse::request() const
{
    Q_D(const DescribeInputSecurityGroupResponse);
    return static_cast<const DescribeInputSecurityGroupRequest *>(d->request);
}

/**
 * @brief  Parse a MediaLive DescribeInputSecurityGroup response.
 *
 * @param  response  Response to parse.
 */
void DescribeInputSecurityGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeInputSecurityGroupResponsePrivate
 *
 * @brief  Private implementation for DescribeInputSecurityGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInputSecurityGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeInputSecurityGroupResponse instance.
 */
DescribeInputSecurityGroupResponsePrivate::DescribeInputSecurityGroupResponsePrivate(
    DescribeInputSecurityGroupQueueResponse * const q) : DescribeInputSecurityGroupPrivate(q)
{

}

/**
 * @brief  Parse an MediaLive DescribeInputSecurityGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeInputSecurityGroupResponsePrivate::DescribeInputSecurityGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInputSecurityGroupResponse"));
    /// @todo
}

} // namespace MediaLive
} // namespace QtAws
