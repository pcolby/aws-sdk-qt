/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
    return static_cast<const UpdateInputDeviceRequest *>(MediaLiveResponse::request());
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
