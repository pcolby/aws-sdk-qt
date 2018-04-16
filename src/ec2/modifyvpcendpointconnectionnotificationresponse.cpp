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

#include "modifyvpcendpointconnectionnotificationresponse.h"
#include "modifyvpcendpointconnectionnotificationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ModifyVpcEndpointConnectionNotificationResponse
 *
 * \brief The ModifyVpcEndpointConnectionNotificationResponse class encapsulates EC2 ModifyVpcEndpointConnectionNotification responses.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::modifyVpcEndpointConnectionNotification
 */

/*!
 * @brief  Constructs a new ModifyVpcEndpointConnectionNotificationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyVpcEndpointConnectionNotificationResponse::ModifyVpcEndpointConnectionNotificationResponse(
        const ModifyVpcEndpointConnectionNotificationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ModifyVpcEndpointConnectionNotificationResponsePrivate(this), parent)
{
    setRequest(new ModifyVpcEndpointConnectionNotificationRequest(request));
    setReply(reply);
}

const ModifyVpcEndpointConnectionNotificationRequest * ModifyVpcEndpointConnectionNotificationResponse::request() const
{
    Q_D(const ModifyVpcEndpointConnectionNotificationResponse);
    return static_cast<const ModifyVpcEndpointConnectionNotificationRequest *>(d->request);
}

/*!
 * @brief  Parse a EC2 ModifyVpcEndpointConnectionNotification response.
 *
 * @param  response  Response to parse.
 */
void ModifyVpcEndpointConnectionNotificationResponse::parseSuccess(QIODevice &response)
{
    Q_D(ModifyVpcEndpointConnectionNotificationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ModifyVpcEndpointConnectionNotificationResponsePrivate
 *
 * \brief Private implementation for ModifyVpcEndpointConnectionNotificationResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ModifyVpcEndpointConnectionNotificationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyVpcEndpointConnectionNotificationResponse instance.
 */
ModifyVpcEndpointConnectionNotificationResponsePrivate::ModifyVpcEndpointConnectionNotificationResponsePrivate(
    ModifyVpcEndpointConnectionNotificationResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EC2 ModifyVpcEndpointConnectionNotificationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyVpcEndpointConnectionNotificationResponsePrivate::parseModifyVpcEndpointConnectionNotificationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyVpcEndpointConnectionNotificationResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
