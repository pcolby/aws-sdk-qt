// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletehostedzoneresponse.h"
#include "deletehostedzoneresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeleteHostedZoneResponse
 * \brief The DeleteHostedZoneResponse class provides an interace for Route53 DeleteHostedZone responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::deleteHostedZone
 */

/*!
 * Constructs a DeleteHostedZoneResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteHostedZoneResponse::DeleteHostedZoneResponse(
        const DeleteHostedZoneRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new DeleteHostedZoneResponsePrivate(this), parent)
{
    setRequest(new DeleteHostedZoneRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteHostedZoneRequest * DeleteHostedZoneResponse::request() const
{
    Q_D(const DeleteHostedZoneResponse);
    return static_cast<const DeleteHostedZoneRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 DeleteHostedZone \a response.
 */
void DeleteHostedZoneResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteHostedZoneResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::DeleteHostedZoneResponsePrivate
 * \brief The DeleteHostedZoneResponsePrivate class provides private implementation for DeleteHostedZoneResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a DeleteHostedZoneResponsePrivate object with public implementation \a q.
 */
DeleteHostedZoneResponsePrivate::DeleteHostedZoneResponsePrivate(
    DeleteHostedZoneResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 DeleteHostedZone response element from \a xml.
 */
void DeleteHostedZoneResponsePrivate::parseDeleteHostedZoneResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteHostedZoneResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
