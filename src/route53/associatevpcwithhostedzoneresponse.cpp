// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
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
    //Q_D(AssociateVPCWithHostedZoneResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
