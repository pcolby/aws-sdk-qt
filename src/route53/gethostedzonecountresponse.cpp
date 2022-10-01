// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gethostedzonecountresponse.h"
#include "gethostedzonecountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetHostedZoneCountResponse
 * \brief The GetHostedZoneCountResponse class provides an interace for Route53 GetHostedZoneCount responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getHostedZoneCount
 */

/*!
 * Constructs a GetHostedZoneCountResponse object for \a reply to \a request, with parent \a parent.
 */
GetHostedZoneCountResponse::GetHostedZoneCountResponse(
        const GetHostedZoneCountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetHostedZoneCountResponsePrivate(this), parent)
{
    setRequest(new GetHostedZoneCountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetHostedZoneCountRequest * GetHostedZoneCountResponse::request() const
{
    Q_D(const GetHostedZoneCountResponse);
    return static_cast<const GetHostedZoneCountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 GetHostedZoneCount \a response.
 */
void GetHostedZoneCountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetHostedZoneCountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::GetHostedZoneCountResponsePrivate
 * \brief The GetHostedZoneCountResponsePrivate class provides private implementation for GetHostedZoneCountResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetHostedZoneCountResponsePrivate object with public implementation \a q.
 */
GetHostedZoneCountResponsePrivate::GetHostedZoneCountResponsePrivate(
    GetHostedZoneCountResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 GetHostedZoneCount response element from \a xml.
 */
void GetHostedZoneCountResponsePrivate::parseGetHostedZoneCountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetHostedZoneCountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
