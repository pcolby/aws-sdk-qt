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

#include "describemovingaddressesresponse.h"
#include "describemovingaddressesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeMovingAddressesResponse
 *
 * \brief The DescribeMovingAddressesResponse class provides an interace for EC2 DescribeMovingAddresses responses.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::describeMovingAddresses
 */

/*!
 * @brief  Constructs a new DescribeMovingAddressesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeMovingAddressesResponse::DescribeMovingAddressesResponse(
        const DescribeMovingAddressesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeMovingAddressesResponsePrivate(this), parent)
{
    setRequest(new DescribeMovingAddressesRequest(request));
    setReply(reply);
}

const DescribeMovingAddressesRequest * DescribeMovingAddressesResponse::request() const
{
    Q_D(const DescribeMovingAddressesResponse);
    return static_cast<const DescribeMovingAddressesRequest *>(d->request);
}

/*!
 * @brief  Parse a EC2 DescribeMovingAddresses response.
 *
 * @param  response  Response to parse.
 */
void DescribeMovingAddressesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeMovingAddressesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeMovingAddressesResponsePrivate
 *
 * \brief Private implementation for DescribeMovingAddressesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeMovingAddressesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeMovingAddressesResponse instance.
 */
DescribeMovingAddressesResponsePrivate::DescribeMovingAddressesResponsePrivate(
    DescribeMovingAddressesResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EC2 DescribeMovingAddressesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeMovingAddressesResponsePrivate::parseDescribeMovingAddressesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMovingAddressesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
