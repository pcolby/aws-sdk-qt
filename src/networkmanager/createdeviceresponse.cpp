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

#include "createdeviceresponse.h"
#include "createdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::CreateDeviceResponse
 * \brief The CreateDeviceResponse class provides an interace for NetworkManager CreateDevice responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Transit Gateway Network Manager (Network Manager) enables you to create a global network, in which you can monitor your
 *  AWS and on-premises networks that are built around transit
 * 
 *  gateways>
 * 
 *  The Network Manager APIs are supported in the US West (Oregon) Region only. You must specify the <code>us-west-2</code>
 *  Region in all requests made to Network
 *
 * \sa NetworkManagerClient::createDevice
 */

/*!
 * Constructs a CreateDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDeviceResponse::CreateDeviceResponse(
        const CreateDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new CreateDeviceResponsePrivate(this), parent)
{
    setRequest(new CreateDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDeviceRequest * CreateDeviceResponse::request() const
{
    return static_cast<const CreateDeviceRequest *>(NetworkManagerResponse::request());
}

/*!
 * \reimp
 * Parses a successful NetworkManager CreateDevice \a response.
 */
void CreateDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::CreateDeviceResponsePrivate
 * \brief The CreateDeviceResponsePrivate class provides private implementation for CreateDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a CreateDeviceResponsePrivate object with public implementation \a q.
 */
CreateDeviceResponsePrivate::CreateDeviceResponsePrivate(
    CreateDeviceResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager CreateDevice response element from \a xml.
 */
void CreateDeviceResponsePrivate::parseCreateDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
