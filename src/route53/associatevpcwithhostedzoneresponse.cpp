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

#include "associatevpcwithhostedzoneresponse.h"
#include "associatevpcwithhostedzoneresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::AssociateVPCWithHostedZoneResponse
 * \brief The AssociateVPCWithHostedZoneResponse class provides an interace for Route53 AssociateVPCWithHostedZone responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::associateVPCWithHostedZone
 */

/*!
 * Constructs a AssociateVPCWithHostedZoneResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateVPCWithHostedZoneResponse::AssociateVPCWithHostedZoneResponse(
        const AssociateVPCWithHostedZoneRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new AssociateVPCWithHostedZoneResponsePrivate(this), parent)
{
    setRequest(new AssociateVPCWithHostedZoneRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateVPCWithHostedZoneRequest * AssociateVPCWithHostedZoneResponse::request() const
{
    Q_D(const AssociateVPCWithHostedZoneResponse);
    return static_cast<const AssociateVPCWithHostedZoneRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 AssociateVPCWithHostedZone \a response.
 */
void AssociateVPCWithHostedZoneResponse::parseSuccess(QIODevice &response)
{
    Q_D(AssociateVPCWithHostedZoneResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::AssociateVPCWithHostedZoneResponsePrivate
 * \brief The AssociateVPCWithHostedZoneResponsePrivate class provides private implementation for AssociateVPCWithHostedZoneResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a AssociateVPCWithHostedZoneResponsePrivate object with public implementation \a q.
 */
AssociateVPCWithHostedZoneResponsePrivate::AssociateVPCWithHostedZoneResponsePrivate(
    AssociateVPCWithHostedZoneResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 AssociateVPCWithHostedZone response element from \a xml.
 */
void AssociateVPCWithHostedZoneResponsePrivate::parseAssociateVPCWithHostedZoneResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateVPCWithHostedZoneResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
