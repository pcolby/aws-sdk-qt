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

#include "allocateconnectiononinterconnectresponse.h"
#include "allocateconnectiononinterconnectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::AllocateConnectionOnInterconnectResponse
 *
 * \brief The AllocateConnectionOnInterconnectResponse class provides an interace for DirectConnect AllocateConnectionOnInterconnect responses.
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
 * \sa DirectConnectClient::allocateConnectionOnInterconnect
 */

/*!
 * @brief  Constructs a new AllocateConnectionOnInterconnectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AllocateConnectionOnInterconnectResponse::AllocateConnectionOnInterconnectResponse(
        const AllocateConnectionOnInterconnectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new AllocateConnectionOnInterconnectResponsePrivate(this), parent)
{
    setRequest(new AllocateConnectionOnInterconnectRequest(request));
    setReply(reply);
}

const AllocateConnectionOnInterconnectRequest * AllocateConnectionOnInterconnectResponse::request() const
{
    Q_D(const AllocateConnectionOnInterconnectResponse);
    return static_cast<const AllocateConnectionOnInterconnectRequest *>(d->request);
}

/*!
 * @brief  Parse a DirectConnect AllocateConnectionOnInterconnect response.
 *
 * @param  response  Response to parse.
 */
void AllocateConnectionOnInterconnectResponse::parseSuccess(QIODevice &response)
{
    Q_D(AllocateConnectionOnInterconnectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class AllocateConnectionOnInterconnectResponsePrivate
 *
 * \brief Private implementation for AllocateConnectionOnInterconnectResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AllocateConnectionOnInterconnectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AllocateConnectionOnInterconnectResponse instance.
 */
AllocateConnectionOnInterconnectResponsePrivate::AllocateConnectionOnInterconnectResponsePrivate(
    AllocateConnectionOnInterconnectResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DirectConnect AllocateConnectionOnInterconnectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AllocateConnectionOnInterconnectResponsePrivate::parseAllocateConnectionOnInterconnectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AllocateConnectionOnInterconnectResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace QtAws
