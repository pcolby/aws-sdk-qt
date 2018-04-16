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

/*!
 * \class QtAws::DirectConnect::DescribeLocationsResponse
 *
 * \brief The DescribeLocationsResponse class provides an interace for DirectConnect DescribeLocations responses.
 *
 * \ingroup DirectConnect
 *
 *  AWS Direct Connect links your internal network to an AWS Direct Connect location over a standard 1 gigabit or 10 gigabit
 *  Ethernet fiber-optic cable. One end of the cable is connected to your router, the other to an AWS Direct Connect router.
 *  With this connection in place, you can create virtual interfaces directly to the AWS cloud (for example, to Amazon
 *  Elastic Compute Cloud (Amazon EC2) and Amazon Simple Storage Service (Amazon S3)) and to Amazon Virtual Private Cloud
 *  (Amazon VPC), bypassing Internet service providers in your network path. An AWS Direct Connect location provides access
 *  to AWS in the region it is associated with, as well as access to other US regions. For example, you can provision a
 *  single connection to any AWS Direct Connect location in the US and use it to access public AWS services in all US
 *  Regions and AWS GovCloud
 *
 * \sa DirectConnectClient::describeLocations
 */

/*!
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

/*!
 * @brief  Parse a DirectConnect DescribeLocations response.
 *
 * @param  response  Response to parse.
 */
void DescribeLocationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeLocationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeLocationsResponsePrivate
 *
 * \brief Private implementation for DescribeLocationsResponse.
 */

/*!
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

/*!
 * @brief  Parse an DirectConnect DescribeLocationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeLocationsResponsePrivate::parseDescribeLocationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLocationsResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace QtAws
