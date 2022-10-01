// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getappsresponse.h"
#include "getappsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetAppsResponse
 * \brief The GetAppsResponse class provides an interace for Pinpoint GetApps responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getApps
 */

/*!
 * Constructs a GetAppsResponse object for \a reply to \a request, with parent \a parent.
 */
GetAppsResponse::GetAppsResponse(
        const GetAppsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetAppsResponsePrivate(this), parent)
{
    setRequest(new GetAppsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAppsRequest * GetAppsResponse::request() const
{
    Q_D(const GetAppsResponse);
    return static_cast<const GetAppsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetApps \a response.
 */
void GetAppsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAppsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetAppsResponsePrivate
 * \brief The GetAppsResponsePrivate class provides private implementation for GetAppsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetAppsResponsePrivate object with public implementation \a q.
 */
GetAppsResponsePrivate::GetAppsResponsePrivate(
    GetAppsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetApps response element from \a xml.
 */
void GetAppsResponsePrivate::parseGetAppsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAppsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
