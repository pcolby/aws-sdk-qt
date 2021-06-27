/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
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
 * \brief The DisassociateVPCFromHostedZoneResponse class provides an interace for Route53 DisassociateVPCFromHostedZone responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::disassociateVPCFromHostedZone
 */

/*!
 * Constructs a DisassociateVPCFromHostedZoneResponse object for \a reply to \a request, with parent \a parent.
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

/*!
 * \reimp
 */
const DisassociateVPCFromHostedZoneRequest * DisassociateVPCFromHostedZoneResponse::request() const
{
    return static_cast<const DisassociateVPCFromHostedZoneRequest *>(Route53Response::request());
}

/*!
 * \reimp
 * Parses a successful Route53 DisassociateVPCFromHostedZone \a response.
 */
void DisassociateVPCFromHostedZoneResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateVPCFromHostedZoneResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::DisassociateVPCFromHostedZoneResponsePrivate
 * \brief The DisassociateVPCFromHostedZoneResponsePrivate class provides private implementation for DisassociateVPCFromHostedZoneResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a DisassociateVPCFromHostedZoneResponsePrivate object with public implementation \a q.
 */
DisassociateVPCFromHostedZoneResponsePrivate::DisassociateVPCFromHostedZoneResponsePrivate(
    DisassociateVPCFromHostedZoneResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 DisassociateVPCFromHostedZone response element from \a xml.
 */
void DisassociateVPCFromHostedZoneResponsePrivate::parseDisassociateVPCFromHostedZoneResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateVPCFromHostedZoneResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
