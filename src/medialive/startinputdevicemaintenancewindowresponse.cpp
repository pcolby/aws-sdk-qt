// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startinputdevicemaintenancewindowresponse.h"
#include "startinputdevicemaintenancewindowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::StartInputDeviceMaintenanceWindowResponse
 * \brief The StartInputDeviceMaintenanceWindowResponse class provides an interace for MediaLive StartInputDeviceMaintenanceWindow responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::startInputDeviceMaintenanceWindow
 */

/*!
 * Constructs a StartInputDeviceMaintenanceWindowResponse object for \a reply to \a request, with parent \a parent.
 */
StartInputDeviceMaintenanceWindowResponse::StartInputDeviceMaintenanceWindowResponse(
        const StartInputDeviceMaintenanceWindowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new StartInputDeviceMaintenanceWindowResponsePrivate(this), parent)
{
    setRequest(new StartInputDeviceMaintenanceWindowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartInputDeviceMaintenanceWindowRequest * StartInputDeviceMaintenanceWindowResponse::request() const
{
    Q_D(const StartInputDeviceMaintenanceWindowResponse);
    return static_cast<const StartInputDeviceMaintenanceWindowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive StartInputDeviceMaintenanceWindow \a response.
 */
void StartInputDeviceMaintenanceWindowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartInputDeviceMaintenanceWindowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::StartInputDeviceMaintenanceWindowResponsePrivate
 * \brief The StartInputDeviceMaintenanceWindowResponsePrivate class provides private implementation for StartInputDeviceMaintenanceWindowResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a StartInputDeviceMaintenanceWindowResponsePrivate object with public implementation \a q.
 */
StartInputDeviceMaintenanceWindowResponsePrivate::StartInputDeviceMaintenanceWindowResponsePrivate(
    StartInputDeviceMaintenanceWindowResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive StartInputDeviceMaintenanceWindow response element from \a xml.
 */
void StartInputDeviceMaintenanceWindowResponsePrivate::parseStartInputDeviceMaintenanceWindowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartInputDeviceMaintenanceWindowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
