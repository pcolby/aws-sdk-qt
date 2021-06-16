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

#include "createvpceconfigurationresponse.h"
#include "createvpceconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::CreateVPCEConfigurationResponse
 * \brief The CreateVPCEConfigurationResponse class provides an interace for DeviceFarm CreateVPCEConfiguration responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::createVPCEConfiguration
 */

/*!
 * Constructs a CreateVPCEConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateVPCEConfigurationResponse::CreateVPCEConfigurationResponse(
        const CreateVPCEConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new CreateVPCEConfigurationResponsePrivate(this), parent)
{
    setRequest(new CreateVPCEConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateVPCEConfigurationRequest * CreateVPCEConfigurationResponse::request() const
{
    Q_D(const CreateVPCEConfigurationResponse);
    return static_cast<const CreateVPCEConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm CreateVPCEConfiguration \a response.
 */
void CreateVPCEConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateVPCEConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::CreateVPCEConfigurationResponsePrivate
 * \brief The CreateVPCEConfigurationResponsePrivate class provides private implementation for CreateVPCEConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a CreateVPCEConfigurationResponsePrivate object with public implementation \a q.
 */
CreateVPCEConfigurationResponsePrivate::CreateVPCEConfigurationResponsePrivate(
    CreateVPCEConfigurationResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm CreateVPCEConfiguration response element from \a xml.
 */
void CreateVPCEConfigurationResponsePrivate::parseCreateVPCEConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVPCEConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
