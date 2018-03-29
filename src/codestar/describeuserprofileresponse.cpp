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

#include "describeuserprofileresponse.h"
#include "describeuserprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeStar {

/**
 * @class  DescribeUserProfileResponse
 *
 * @brief  Handles CodeStar DescribeUserProfile responses.
 *
 * @see    CodeStarClient::describeUserProfile
 */

/**
 * @brief  Constructs a new DescribeUserProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeUserProfileResponse::DescribeUserProfileResponse(
        const DescribeUserProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeStarResponse(new DescribeUserProfileResponsePrivate(this), parent)
{
    setRequest(new DescribeUserProfileRequest(request));
    setReply(reply);
}

const DescribeUserProfileRequest * DescribeUserProfileResponse::request() const
{
    Q_D(const DescribeUserProfileResponse);
    return static_cast<const DescribeUserProfileRequest *>(d->request);
}

/**
 * @brief  Parse a CodeStar DescribeUserProfile response.
 *
 * @param  response  Response to parse.
 */
void DescribeUserProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeUserProfileResponsePrivate
 *
 * @brief  Private implementation for DescribeUserProfileResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeUserProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeUserProfileResponse instance.
 */
DescribeUserProfileResponsePrivate::DescribeUserProfileResponsePrivate(
    DescribeUserProfileQueueResponse * const q) : DescribeUserProfilePrivate(q)
{

}

/**
 * @brief  Parse an CodeStar DescribeUserProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeUserProfileResponsePrivate::DescribeUserProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeUserProfileResponse"));
    /// @todo
}

} // namespace CodeStar
} // namespace AWS
