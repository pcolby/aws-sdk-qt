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

#include "describenetworkinterfacepermissionsresponse.h"
#include "describenetworkinterfacepermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeNetworkInterfacePermissionsResponse
 *
 * @brief  Handles EC2 DescribeNetworkInterfacePermissions responses.
 *
 * @see    EC2Client::describeNetworkInterfacePermissions
 */

/**
 * @brief  Constructs a new DescribeNetworkInterfacePermissionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeNetworkInterfacePermissionsResponse::DescribeNetworkInterfacePermissionsResponse(
        const DescribeNetworkInterfacePermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeNetworkInterfacePermissionsResponsePrivate(this), parent)
{
    setRequest(new DescribeNetworkInterfacePermissionsRequest(request));
    setReply(reply);
}

const DescribeNetworkInterfacePermissionsRequest * DescribeNetworkInterfacePermissionsResponse::request() const
{
    Q_D(const DescribeNetworkInterfacePermissionsResponse);
    return static_cast<const DescribeNetworkInterfacePermissionsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeNetworkInterfacePermissions response.
 *
 * @param  response  Response to parse.
 */
void DescribeNetworkInterfacePermissionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeNetworkInterfacePermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeNetworkInterfacePermissionsResponsePrivate
 *
 * @brief  Private implementation for DescribeNetworkInterfacePermissionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeNetworkInterfacePermissionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeNetworkInterfacePermissionsResponse instance.
 */
DescribeNetworkInterfacePermissionsResponsePrivate::DescribeNetworkInterfacePermissionsResponsePrivate(
    DescribeNetworkInterfacePermissionsResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeNetworkInterfacePermissionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeNetworkInterfacePermissionsResponsePrivate::DescribeNetworkInterfacePermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeNetworkInterfacePermissionsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
