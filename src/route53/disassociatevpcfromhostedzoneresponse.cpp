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

#include "disassociatevpcfromhostedzoneresponse.h"
#include "disassociatevpcfromhostedzoneresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DisassociateVPCFromHostedZoneResponse
 *
 * \brief The DisassociateVPCFromHostedZoneResponse class encapsulates Route53 DisassociateVPCFromHostedZone responses.
 *
 * \ingroup Route53
 *
 *
 * \sa Route53Client::disassociateVPCFromHostedZone
 */

/*!
 * @brief  Constructs a new DisassociateVPCFromHostedZoneResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateVPCFromHostedZoneResponse::DisassociateVPCFromHostedZoneResponse(
        const DisassociateVPCFromHostedZoneRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new DisassociateVPCFromHostedZoneResponsePrivate(this), parent)
{
    setRequest(new DisassociateVPCFromHostedZoneRequest(request));
    setReply(reply);
}

const DisassociateVPCFromHostedZoneRequest * DisassociateVPCFromHostedZoneResponse::request() const
{
    Q_D(const DisassociateVPCFromHostedZoneResponse);
    return static_cast<const DisassociateVPCFromHostedZoneRequest *>(d->request);
}

/*!
 * @brief  Parse a Route53 DisassociateVPCFromHostedZone response.
 *
 * @param  response  Response to parse.
 */
void DisassociateVPCFromHostedZoneResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisassociateVPCFromHostedZoneResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DisassociateVPCFromHostedZoneResponsePrivate
 *
 * \brief Private implementation for DisassociateVPCFromHostedZoneResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DisassociateVPCFromHostedZoneResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateVPCFromHostedZoneResponse instance.
 */
DisassociateVPCFromHostedZoneResponsePrivate::DisassociateVPCFromHostedZoneResponsePrivate(
    DisassociateVPCFromHostedZoneResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Route53 DisassociateVPCFromHostedZoneResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateVPCFromHostedZoneResponsePrivate::parseDisassociateVPCFromHostedZoneResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateVPCFromHostedZoneResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
