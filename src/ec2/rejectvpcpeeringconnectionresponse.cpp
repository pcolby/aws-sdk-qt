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

#include "rejectvpcpeeringconnectionresponse.h"
#include "rejectvpcpeeringconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::RejectVpcPeeringConnectionResponse
 *
 * \brief The RejectVpcPeeringConnectionResponse class encapsulates EC2 RejectVpcPeeringConnection responses.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::rejectVpcPeeringConnection
 */

/*!
 * @brief  Constructs a new RejectVpcPeeringConnectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RejectVpcPeeringConnectionResponse::RejectVpcPeeringConnectionResponse(
        const RejectVpcPeeringConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new RejectVpcPeeringConnectionResponsePrivate(this), parent)
{
    setRequest(new RejectVpcPeeringConnectionRequest(request));
    setReply(reply);
}

const RejectVpcPeeringConnectionRequest * RejectVpcPeeringConnectionResponse::request() const
{
    Q_D(const RejectVpcPeeringConnectionResponse);
    return static_cast<const RejectVpcPeeringConnectionRequest *>(d->request);
}

/*!
 * @brief  Parse a EC2 RejectVpcPeeringConnection response.
 *
 * @param  response  Response to parse.
 */
void RejectVpcPeeringConnectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(RejectVpcPeeringConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class RejectVpcPeeringConnectionResponsePrivate
 *
 * \brief Private implementation for RejectVpcPeeringConnectionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new RejectVpcPeeringConnectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RejectVpcPeeringConnectionResponse instance.
 */
RejectVpcPeeringConnectionResponsePrivate::RejectVpcPeeringConnectionResponsePrivate(
    RejectVpcPeeringConnectionResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EC2 RejectVpcPeeringConnectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RejectVpcPeeringConnectionResponsePrivate::parseRejectVpcPeeringConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RejectVpcPeeringConnectionResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
