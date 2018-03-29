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

#include "describevpcpeeringauthorizationsresponse.h"
#include "describevpcpeeringauthorizationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  DescribeVpcPeeringAuthorizationsResponse
 *
 * @brief  Handles GameLift DescribeVpcPeeringAuthorizations responses.
 *
 * @see    GameLiftClient::describeVpcPeeringAuthorizations
 */

/**
 * @brief  Constructs a new DescribeVpcPeeringAuthorizationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeVpcPeeringAuthorizationsResponse::DescribeVpcPeeringAuthorizationsResponse(
        const DescribeVpcPeeringAuthorizationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new DescribeVpcPeeringAuthorizationsResponsePrivate(this), parent)
{
    setRequest(new DescribeVpcPeeringAuthorizationsRequest(request));
    setReply(reply);
}

const DescribeVpcPeeringAuthorizationsRequest * DescribeVpcPeeringAuthorizationsResponse::request() const
{
    Q_D(const DescribeVpcPeeringAuthorizationsResponse);
    return static_cast<const DescribeVpcPeeringAuthorizationsRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift DescribeVpcPeeringAuthorizations response.
 *
 * @param  response  Response to parse.
 */
void DescribeVpcPeeringAuthorizationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeVpcPeeringAuthorizationsResponsePrivate
 *
 * @brief  Private implementation for DescribeVpcPeeringAuthorizationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpcPeeringAuthorizationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeVpcPeeringAuthorizationsResponse instance.
 */
DescribeVpcPeeringAuthorizationsResponsePrivate::DescribeVpcPeeringAuthorizationsResponsePrivate(
    DescribeVpcPeeringAuthorizationsResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift DescribeVpcPeeringAuthorizationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeVpcPeeringAuthorizationsResponsePrivate::DescribeVpcPeeringAuthorizationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVpcPeeringAuthorizationsResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
