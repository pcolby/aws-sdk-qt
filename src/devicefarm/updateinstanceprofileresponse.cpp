/*
    Copyright 2013-2019 Paul Colby

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

#include "updateinstanceprofileresponse.h"
#include "updateinstanceprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::UpdateInstanceProfileResponse
 * \brief The UpdateInstanceProfileResponse class provides an interace for DeviceFarm UpdateInstanceProfile responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::updateInstanceProfile
 */

/*!
 * Constructs a UpdateInstanceProfileResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateInstanceProfileResponse::UpdateInstanceProfileResponse(
        const UpdateInstanceProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new UpdateInstanceProfileResponsePrivate(this), parent)
{
    setRequest(new UpdateInstanceProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateInstanceProfileRequest * UpdateInstanceProfileResponse::request() const
{
    Q_D(const UpdateInstanceProfileResponse);
    return static_cast<const UpdateInstanceProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm UpdateInstanceProfile \a response.
 */
void UpdateInstanceProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateInstanceProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::UpdateInstanceProfileResponsePrivate
 * \brief The UpdateInstanceProfileResponsePrivate class provides private implementation for UpdateInstanceProfileResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a UpdateInstanceProfileResponsePrivate object with public implementation \a q.
 */
UpdateInstanceProfileResponsePrivate::UpdateInstanceProfileResponsePrivate(
    UpdateInstanceProfileResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm UpdateInstanceProfile response element from \a xml.
 */
void UpdateInstanceProfileResponsePrivate::parseUpdateInstanceProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateInstanceProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
