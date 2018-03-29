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

#include "describemyuserprofileresponse.h"
#include "describemyuserprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  DescribeMyUserProfileResponse
 *
 * @brief  Handles OpsWorks DescribeMyUserProfile responses.
 *
 * @see    OpsWorksClient::describeMyUserProfile
 */

/**
 * @brief  Constructs a new DescribeMyUserProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeMyUserProfileResponse::DescribeMyUserProfileResponse(
        const DescribeMyUserProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DescribeMyUserProfileResponsePrivate(this), parent)
{
    setRequest(new DescribeMyUserProfileRequest(request));
    setReply(reply);
}

const DescribeMyUserProfileRequest * DescribeMyUserProfileResponse::request() const
{
    Q_D(const DescribeMyUserProfileResponse);
    return static_cast<const DescribeMyUserProfileRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DescribeMyUserProfile response.
 *
 * @param  response  Response to parse.
 */
void DescribeMyUserProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeMyUserProfileResponsePrivate
 *
 * @brief  Private implementation for DescribeMyUserProfileResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMyUserProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeMyUserProfileResponse instance.
 */
DescribeMyUserProfileResponsePrivate::DescribeMyUserProfileResponsePrivate(
    DescribeMyUserProfileResponse * const q) : OpsWorksResponsePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DescribeMyUserProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeMyUserProfileResponsePrivate::DescribeMyUserProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMyUserProfileResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
