// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgeolocationresponse.h"
#include "getgeolocationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetGeoLocationResponse
 * \brief The GetGeoLocationResponse class provides an interace for Route53 GetGeoLocation responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getGeoLocation
 */

/*!
 * Constructs a GetGeoLocationResponse object for \a reply to \a request, with parent \a parent.
 */
GetGeoLocationResponse::GetGeoLocationResponse(
        const GetGeoLocationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetGeoLocationResponsePrivate(this), parent)
{
    setRequest(new GetGeoLocationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGeoLocationRequest * GetGeoLocationResponse::request() const
{
    Q_D(const GetGeoLocationResponse);
    return static_cast<const GetGeoLocationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 GetGeoLocation \a response.
 */
void GetGeoLocationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGeoLocationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::GetGeoLocationResponsePrivate
 * \brief The GetGeoLocationResponsePrivate class provides private implementation for GetGeoLocationResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetGeoLocationResponsePrivate object with public implementation \a q.
 */
GetGeoLocationResponsePrivate::GetGeoLocationResponsePrivate(
    GetGeoLocationResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 GetGeoLocation response element from \a xml.
 */
void GetGeoLocationResponsePrivate::parseGetGeoLocationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGeoLocationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
