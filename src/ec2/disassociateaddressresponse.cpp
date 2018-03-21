/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "disassociateaddressresponse.h"
#include "disassociateaddressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DisassociateAddressResponse
 *
 * @brief  Handles EC2 DisassociateAddress responses.
 *
 * @see    EC2Client::disassociateAddress
 */

/**
 * @brief  Constructs a new DisassociateAddressResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateAddressResponse::DisassociateAddressResponse(
        const DisassociateAddressRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DisassociateAddressResponsePrivate(this), parent)
{
    setRequest(new DisassociateAddressRequest(request));
    setReply(reply);
}

const DisassociateAddressRequest * DisassociateAddressResponse::request() const
{
    Q_D(const DisassociateAddressResponse);
    return static_cast<const DisassociateAddressRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DisassociateAddress response.
 *
 * @param  response  Response to parse.
 */
void DisassociateAddressResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisassociateAddressResponsePrivate
 *
 * @brief  Private implementation for DisassociateAddressResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateAddressResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateAddressResponse instance.
 */
DisassociateAddressResponsePrivate::DisassociateAddressResponsePrivate(
    DisassociateAddressQueueResponse * const q) : DisassociateAddressPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DisassociateAddressResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateAddressResponsePrivate::DisassociateAddressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateAddressResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
