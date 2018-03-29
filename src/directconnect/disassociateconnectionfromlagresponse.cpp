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

#include "disassociateconnectionfromlagresponse.h"
#include "disassociateconnectionfromlagresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/**
 * @class  DisassociateConnectionFromLagResponse
 *
 * @brief  Handles DirectConnect DisassociateConnectionFromLag responses.
 *
 * @see    DirectConnectClient::disassociateConnectionFromLag
 */

/**
 * @brief  Constructs a new DisassociateConnectionFromLagResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateConnectionFromLagResponse::DisassociateConnectionFromLagResponse(
        const DisassociateConnectionFromLagRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DisassociateConnectionFromLagResponsePrivate(this), parent)
{
    setRequest(new DisassociateConnectionFromLagRequest(request));
    setReply(reply);
}

const DisassociateConnectionFromLagRequest * DisassociateConnectionFromLagResponse::request() const
{
    Q_D(const DisassociateConnectionFromLagResponse);
    return static_cast<const DisassociateConnectionFromLagRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect DisassociateConnectionFromLag response.
 *
 * @param  response  Response to parse.
 */
void DisassociateConnectionFromLagResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisassociateConnectionFromLagResponsePrivate
 *
 * @brief  Private implementation for DisassociateConnectionFromLagResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateConnectionFromLagResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateConnectionFromLagResponse instance.
 */
DisassociateConnectionFromLagResponsePrivate::DisassociateConnectionFromLagResponsePrivate(
    DisassociateConnectionFromLagResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect DisassociateConnectionFromLagResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateConnectionFromLagResponsePrivate::DisassociateConnectionFromLagResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateConnectionFromLagResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace QtAws
