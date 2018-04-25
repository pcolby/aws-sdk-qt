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

#include "createnetworkprofileresponse.h"
#include "createnetworkprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::CreateNetworkProfileResponse
 * \brief The CreateNetworkProfileResponse class provides an interace for DeviceFarm CreateNetworkProfile responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::createNetworkProfile
 */

/*!
 * Constructs a CreateNetworkProfileResponse object for \a reply to \a request, with parent \a parent.
 */
CreateNetworkProfileResponse::CreateNetworkProfileResponse(
        const CreateNetworkProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new CreateNetworkProfileResponsePrivate(this), parent)
{
    setRequest(new CreateNetworkProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateNetworkProfileRequest * CreateNetworkProfileResponse::request() const
{
    Q_D(const CreateNetworkProfileResponse);
    return static_cast<const CreateNetworkProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm CreateNetworkProfile \a response.
 */
void CreateNetworkProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateNetworkProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::CreateNetworkProfileResponsePrivate
 * \brief The CreateNetworkProfileResponsePrivate class provides private implementation for CreateNetworkProfileResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a CreateNetworkProfileResponsePrivate object with public implementation \a q.
 */
CreateNetworkProfileResponsePrivate::CreateNetworkProfileResponsePrivate(
    CreateNetworkProfileResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm CreateNetworkProfile response element from \a xml.
 */
void CreateNetworkProfileResponsePrivate::parseCreateNetworkProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNetworkProfileResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
