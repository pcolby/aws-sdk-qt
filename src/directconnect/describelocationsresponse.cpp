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

#include "describelocationsresponse.h"
#include "describelocationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/**
 * @class  DescribeLocationsResponse
 *
 * @brief  Handles DirectConnect DescribeLocations responses.
 *
 * @see    DirectConnectClient::describeLocations
 */

/**
 * @brief  Constructs a new DescribeLocationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeLocationsResponse::DescribeLocationsResponse(
        const DescribeLocationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DescribeLocationsResponsePrivate(this), parent)
{
    setRequest(new DescribeLocationsRequest(request));
    setReply(reply);
}

const DescribeLocationsRequest * DescribeLocationsResponse::request() const
{
    Q_D(const DescribeLocationsResponse);
    return static_cast<const DescribeLocationsRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect DescribeLocations response.
 *
 * @param  response  Response to parse.
 */
void DescribeLocationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeLocationsResponsePrivate
 *
 * @brief  Private implementation for DescribeLocationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLocationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeLocationsResponse instance.
 */
DescribeLocationsResponsePrivate::DescribeLocationsResponsePrivate(
    DescribeLocationsResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect DescribeLocationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeLocationsResponsePrivate::DescribeLocationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLocationsResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace QtAws
