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

#include "rebootinputdeviceresponse.h"
#include "rebootinputdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::RebootInputDeviceResponse
 * \brief The RebootInputDeviceResponse class provides an interace for MediaLive RebootInputDevice responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::rebootInputDevice
 */

/*!
 * Constructs a RebootInputDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
RebootInputDeviceResponse::RebootInputDeviceResponse(
        const RebootInputDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new RebootInputDeviceResponsePrivate(this), parent)
{
    setRequest(new RebootInputDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RebootInputDeviceRequest * RebootInputDeviceResponse::request() const
{
    Q_D(const RebootInputDeviceResponse);
    return static_cast<const RebootInputDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive RebootInputDevice \a response.
 */
void RebootInputDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RebootInputDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::RebootInputDeviceResponsePrivate
 * \brief The RebootInputDeviceResponsePrivate class provides private implementation for RebootInputDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a RebootInputDeviceResponsePrivate object with public implementation \a q.
 */
RebootInputDeviceResponsePrivate::RebootInputDeviceResponsePrivate(
    RebootInputDeviceResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive RebootInputDevice response element from \a xml.
 */
void RebootInputDeviceResponsePrivate::parseRebootInputDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RebootInputDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
