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

#include "assignprivateipaddressesresponse.h"
#include "assignprivateipaddressesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::AssignPrivateIpAddressesResponse
 *
 * \brief The AssignPrivateIpAddressesResponse class encapsulates EC2 AssignPrivateIpAddresses responses.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::assignPrivateIpAddresses
 */

/*!
 * @brief  Constructs a new AssignPrivateIpAddressesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssignPrivateIpAddressesResponse::AssignPrivateIpAddressesResponse(
        const AssignPrivateIpAddressesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new AssignPrivateIpAddressesResponsePrivate(this), parent)
{
    setRequest(new AssignPrivateIpAddressesRequest(request));
    setReply(reply);
}

const AssignPrivateIpAddressesRequest * AssignPrivateIpAddressesResponse::request() const
{
    Q_D(const AssignPrivateIpAddressesResponse);
    return static_cast<const AssignPrivateIpAddressesRequest *>(d->request);
}

/*!
 * @brief  Parse a EC2 AssignPrivateIpAddresses response.
 *
 * @param  response  Response to parse.
 */
void AssignPrivateIpAddressesResponse::parseSuccess(QIODevice &response)
{
    Q_D(AssignPrivateIpAddressesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class AssignPrivateIpAddressesResponsePrivate
 *
 * \brief Private implementation for AssignPrivateIpAddressesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AssignPrivateIpAddressesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssignPrivateIpAddressesResponse instance.
 */
AssignPrivateIpAddressesResponsePrivate::AssignPrivateIpAddressesResponsePrivate(
    AssignPrivateIpAddressesResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EC2 AssignPrivateIpAddressesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssignPrivateIpAddressesResponsePrivate::parseAssignPrivateIpAddressesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssignPrivateIpAddressesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
