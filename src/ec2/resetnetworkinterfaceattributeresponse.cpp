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

#include "resetnetworkinterfaceattributeresponse.h"
#include "resetnetworkinterfaceattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  ResetNetworkInterfaceAttributeResponse
 *
 * @brief  Handles EC2 ResetNetworkInterfaceAttribute responses.
 *
 * @see    EC2Client::resetNetworkInterfaceAttribute
 */

/**
 * @brief  Constructs a new ResetNetworkInterfaceAttributeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResetNetworkInterfaceAttributeResponse::ResetNetworkInterfaceAttributeResponse(
        const ResetNetworkInterfaceAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ResetNetworkInterfaceAttributeResponsePrivate(this), parent)
{
    setRequest(new ResetNetworkInterfaceAttributeRequest(request));
    setReply(reply);
}

const ResetNetworkInterfaceAttributeRequest * ResetNetworkInterfaceAttributeResponse::request() const
{
    Q_D(const ResetNetworkInterfaceAttributeResponse);
    return static_cast<const ResetNetworkInterfaceAttributeRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ResetNetworkInterfaceAttribute response.
 *
 * @param  response  Response to parse.
 */
void ResetNetworkInterfaceAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ResetNetworkInterfaceAttributeResponsePrivate
 *
 * @brief  Private implementation for ResetNetworkInterfaceAttributeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResetNetworkInterfaceAttributeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ResetNetworkInterfaceAttributeResponse instance.
 */
ResetNetworkInterfaceAttributeResponsePrivate::ResetNetworkInterfaceAttributeResponsePrivate(
    ResetNetworkInterfaceAttributeQueueResponse * const q) : ResetNetworkInterfaceAttributePrivate(q)
{

}

/**
 * @brief  Parse an EC2 ResetNetworkInterfaceAttributeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ResetNetworkInterfaceAttributeResponsePrivate::ResetNetworkInterfaceAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetNetworkInterfaceAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
