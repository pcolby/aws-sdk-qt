// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gethostedzoneresponse.h"
#include "gethostedzoneresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetHostedZoneResponse
 * \brief The GetHostedZoneResponse class provides an interace for Route53 GetHostedZone responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getHostedZone
 */

/*!
 * Constructs a GetHostedZoneResponse object for \a reply to \a request, with parent \a parent.
 */
GetHostedZoneResponse::GetHostedZoneResponse(
        const GetHostedZoneRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetHostedZoneResponsePrivate(this), parent)
{
    setRequest(new GetHostedZoneRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetHostedZoneRequest * GetHostedZoneResponse::request() const
{
    Q_D(const GetHostedZoneResponse);
    return static_cast<const GetHostedZoneRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 GetHostedZone \a response.
 */
void GetHostedZoneResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetHostedZoneResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::GetHostedZoneResponsePrivate
 * \brief The GetHostedZoneResponsePrivate class provides private implementation for GetHostedZoneResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetHostedZoneResponsePrivate object with public implementation \a q.
 */
GetHostedZoneResponsePrivate::GetHostedZoneResponsePrivate(
    GetHostedZoneResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 GetHostedZone response element from \a xml.
 */
void GetHostedZoneResponsePrivate::parseGetHostedZoneResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetHostedZoneResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
