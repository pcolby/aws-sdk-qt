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

#include "deletevpceconfigurationresponse.h"
#include "deletevpceconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::DeleteVPCEConfigurationResponse
 * \brief The DeleteVPCEConfigurationResponse class provides an interace for DeviceFarm DeleteVPCEConfiguration responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::deleteVPCEConfiguration
 */

/*!
 * Constructs a DeleteVPCEConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVPCEConfigurationResponse::DeleteVPCEConfigurationResponse(
        const DeleteVPCEConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new DeleteVPCEConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteVPCEConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVPCEConfigurationRequest * DeleteVPCEConfigurationResponse::request() const
{
    Q_D(const DeleteVPCEConfigurationResponse);
    return static_cast<const DeleteVPCEConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm DeleteVPCEConfiguration \a response.
 */
void DeleteVPCEConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteVPCEConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::DeleteVPCEConfigurationResponsePrivate
 * \brief The DeleteVPCEConfigurationResponsePrivate class provides private implementation for DeleteVPCEConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a DeleteVPCEConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteVPCEConfigurationResponsePrivate::DeleteVPCEConfigurationResponsePrivate(
    DeleteVPCEConfigurationResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm DeleteVPCEConfiguration response element from \a xml.
 */
void DeleteVPCEConfigurationResponsePrivate::parseDeleteVPCEConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVPCEConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
