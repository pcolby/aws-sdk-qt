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

#include "describeuserprofilesresponse.h"
#include "describeuserprofilesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  DescribeUserProfilesResponse
 *
 * @brief  Handles OpsWorks DescribeUserProfiles responses.
 *
 * @see    OpsWorksClient::describeUserProfiles
 */

/**
 * @brief  Constructs a new DescribeUserProfilesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeUserProfilesResponse::DescribeUserProfilesResponse(
        const DescribeUserProfilesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DescribeUserProfilesResponsePrivate(this), parent)
{
    setRequest(new DescribeUserProfilesRequest(request));
    setReply(reply);
}

const DescribeUserProfilesRequest * DescribeUserProfilesResponse::request() const
{
    Q_D(const DescribeUserProfilesResponse);
    return static_cast<const DescribeUserProfilesRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DescribeUserProfiles response.
 *
 * @param  response  Response to parse.
 */
void DescribeUserProfilesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeUserProfilesResponsePrivate
 *
 * @brief  Private implementation for DescribeUserProfilesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeUserProfilesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeUserProfilesResponse instance.
 */
DescribeUserProfilesResponsePrivate::DescribeUserProfilesResponsePrivate(
    DescribeUserProfilesQueueResponse * const q) : DescribeUserProfilesPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DescribeUserProfilesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeUserProfilesResponsePrivate::DescribeUserProfilesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeUserProfilesResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace AWS
