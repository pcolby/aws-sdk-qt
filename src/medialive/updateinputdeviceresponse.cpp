// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateinputdeviceresponse.h"
#include "updateinputdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::UpdateInputDeviceResponse
 * \brief The UpdateInputDeviceResponse class provides an interace for MediaLive UpdateInputDevice responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::updateInputDevice
 */

/*!
 * Constructs a UpdateInputDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateInputDeviceResponse::UpdateInputDeviceResponse(
        const UpdateInputDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new UpdateInputDeviceResponsePrivate(this), parent)
{
    setRequest(new UpdateInputDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateInputDeviceRequest * UpdateInputDeviceResponse::request() const
{
    Q_D(const UpdateInputDeviceResponse);
    return static_cast<const UpdateInputDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive UpdateInputDevice \a response.
 */
void UpdateInputDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateInputDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::UpdateInputDeviceResponsePrivate
 * \brief The UpdateInputDeviceResponsePrivate class provides private implementation for UpdateInputDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a UpdateInputDeviceResponsePrivate object with public implementation \a q.
 */
UpdateInputDeviceResponsePrivate::UpdateInputDeviceResponsePrivate(
    UpdateInputDeviceResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive UpdateInputDevice response element from \a xml.
 */
void UpdateInputDeviceResponsePrivate::parseUpdateInputDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateInputDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
