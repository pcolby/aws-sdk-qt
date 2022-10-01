// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapplicationsettingsresponse.h"
#include "getapplicationsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetApplicationSettingsResponse
 * \brief The GetApplicationSettingsResponse class provides an interace for Pinpoint GetApplicationSettings responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getApplicationSettings
 */

/*!
 * Constructs a GetApplicationSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
GetApplicationSettingsResponse::GetApplicationSettingsResponse(
        const GetApplicationSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetApplicationSettingsResponsePrivate(this), parent)
{
    setRequest(new GetApplicationSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApplicationSettingsRequest * GetApplicationSettingsResponse::request() const
{
    Q_D(const GetApplicationSettingsResponse);
    return static_cast<const GetApplicationSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetApplicationSettings \a response.
 */
void GetApplicationSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetApplicationSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetApplicationSettingsResponsePrivate
 * \brief The GetApplicationSettingsResponsePrivate class provides private implementation for GetApplicationSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetApplicationSettingsResponsePrivate object with public implementation \a q.
 */
GetApplicationSettingsResponsePrivate::GetApplicationSettingsResponsePrivate(
    GetApplicationSettingsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetApplicationSettings response element from \a xml.
 */
void GetApplicationSettingsResponsePrivate::parseGetApplicationSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApplicationSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
