/*
    Copyright 2013-2018 Paul Colby

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

#include "updatevpceconfigurationresponse.h"
#include "updatevpceconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::UpdateVPCEConfigurationResponse
 * \brief The UpdateVPCEConfigurationResponse class provides an interace for DeviceFarm UpdateVPCEConfiguration responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::updateVPCEConfiguration
 */

/*!
 * Constructs a UpdateVPCEConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateVPCEConfigurationResponse::UpdateVPCEConfigurationResponse(
        const UpdateVPCEConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new UpdateVPCEConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateVPCEConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateVPCEConfigurationRequest * UpdateVPCEConfigurationResponse::request() const
{
    Q_D(const UpdateVPCEConfigurationResponse);
    return static_cast<const UpdateVPCEConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm UpdateVPCEConfiguration \a response.
 */
void UpdateVPCEConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateVPCEConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::UpdateVPCEConfigurationResponsePrivate
 * \brief The UpdateVPCEConfigurationResponsePrivate class provides private implementation for UpdateVPCEConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a UpdateVPCEConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateVPCEConfigurationResponsePrivate::UpdateVPCEConfigurationResponsePrivate(
    UpdateVPCEConfigurationResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm UpdateVPCEConfiguration response element from \a xml.
 */
void UpdateVPCEConfigurationResponsePrivate::parseUpdateVPCEConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateVPCEConfigurationResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
