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

#include "attachthingprincipalresponse.h"
#include "attachthingprincipalresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  AttachThingPrincipalResponse
 *
 * @brief  Handles IoT AttachThingPrincipal responses.
 *
 * @see    IoTClient::attachThingPrincipal
 */

/**
 * @brief  Constructs a new AttachThingPrincipalResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AttachThingPrincipalResponse::AttachThingPrincipalResponse(
        const AttachThingPrincipalRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new AttachThingPrincipalResponsePrivate(this), parent)
{
    setRequest(new AttachThingPrincipalRequest(request));
    setReply(reply);
}

const AttachThingPrincipalRequest * AttachThingPrincipalResponse::request() const
{
    Q_D(const AttachThingPrincipalResponse);
    return static_cast<const AttachThingPrincipalRequest *>(d->request);
}

/**
 * @brief  Parse a IoT AttachThingPrincipal response.
 *
 * @param  response  Response to parse.
 */
void AttachThingPrincipalResponse::parseSuccess(QIODevice &response)
{
    Q_D(AttachThingPrincipalResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AttachThingPrincipalResponsePrivate
 *
 * @brief  Private implementation for AttachThingPrincipalResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachThingPrincipalResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AttachThingPrincipalResponse instance.
 */
AttachThingPrincipalResponsePrivate::AttachThingPrincipalResponsePrivate(
    AttachThingPrincipalResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT AttachThingPrincipalResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AttachThingPrincipalResponsePrivate::parseAttachThingPrincipalResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachThingPrincipalResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
