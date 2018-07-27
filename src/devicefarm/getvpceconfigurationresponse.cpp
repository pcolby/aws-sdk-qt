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

#include "getvpceconfigurationresponse.h"
#include "getvpceconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetVPCEConfigurationResponse
 * \brief The GetVPCEConfigurationResponse class provides an interace for DeviceFarm GetVPCEConfiguration responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getVPCEConfiguration
 */

/*!
 * Constructs a GetVPCEConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetVPCEConfigurationResponse::GetVPCEConfigurationResponse(
        const GetVPCEConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetVPCEConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetVPCEConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetVPCEConfigurationRequest * GetVPCEConfigurationResponse::request() const
{
    Q_D(const GetVPCEConfigurationResponse);
    return static_cast<const GetVPCEConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm GetVPCEConfiguration \a response.
 */
void GetVPCEConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetVPCEConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::GetVPCEConfigurationResponsePrivate
 * \brief The GetVPCEConfigurationResponsePrivate class provides private implementation for GetVPCEConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetVPCEConfigurationResponsePrivate object with public implementation \a q.
 */
GetVPCEConfigurationResponsePrivate::GetVPCEConfigurationResponsePrivate(
    GetVPCEConfigurationResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm GetVPCEConfiguration response element from \a xml.
 */
void GetVPCEConfigurationResponsePrivate::parseGetVPCEConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetVPCEConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
