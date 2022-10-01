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

#include "claimdeviceresponse.h"
#include "claimdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ClaimDeviceResponse
 * \brief The ClaimDeviceResponse class provides an interace for MediaLive ClaimDevice responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::claimDevice
 */

/*!
 * Constructs a ClaimDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
ClaimDeviceResponse::ClaimDeviceResponse(
        const ClaimDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new ClaimDeviceResponsePrivate(this), parent)
{
    setRequest(new ClaimDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ClaimDeviceRequest * ClaimDeviceResponse::request() const
{
    Q_D(const ClaimDeviceResponse);
    return static_cast<const ClaimDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive ClaimDevice \a response.
 */
void ClaimDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ClaimDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::ClaimDeviceResponsePrivate
 * \brief The ClaimDeviceResponsePrivate class provides private implementation for ClaimDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ClaimDeviceResponsePrivate object with public implementation \a q.
 */
ClaimDeviceResponsePrivate::ClaimDeviceResponsePrivate(
    ClaimDeviceResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive ClaimDevice response element from \a xml.
 */
void ClaimDeviceResponsePrivate::parseClaimDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ClaimDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
