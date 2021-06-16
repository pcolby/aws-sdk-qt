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

#include "updatenetworkprofileresponse.h"
#include "updatenetworkprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::UpdateNetworkProfileResponse
 * \brief The UpdateNetworkProfileResponse class provides an interace for DeviceFarm UpdateNetworkProfile responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::updateNetworkProfile
 */

/*!
 * Constructs a UpdateNetworkProfileResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateNetworkProfileResponse::UpdateNetworkProfileResponse(
        const UpdateNetworkProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new UpdateNetworkProfileResponsePrivate(this), parent)
{
    setRequest(new UpdateNetworkProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateNetworkProfileRequest * UpdateNetworkProfileResponse::request() const
{
    Q_D(const UpdateNetworkProfileResponse);
    return static_cast<const UpdateNetworkProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm UpdateNetworkProfile \a response.
 */
void UpdateNetworkProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateNetworkProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::UpdateNetworkProfileResponsePrivate
 * \brief The UpdateNetworkProfileResponsePrivate class provides private implementation for UpdateNetworkProfileResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a UpdateNetworkProfileResponsePrivate object with public implementation \a q.
 */
UpdateNetworkProfileResponsePrivate::UpdateNetworkProfileResponsePrivate(
    UpdateNetworkProfileResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm UpdateNetworkProfile response element from \a xml.
 */
void UpdateNetworkProfileResponsePrivate::parseUpdateNetworkProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateNetworkProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
