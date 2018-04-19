/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletenetworkprofileresponse.h"
#include "deletenetworkprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::DeleteNetworkProfileResponse
 * \brief The DeleteNetworkProfileResponse class provides an interace for DeviceFarm DeleteNetworkProfile responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::deleteNetworkProfile
 */

/*!
 * Constructs a DeleteNetworkProfileResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteNetworkProfileResponse::DeleteNetworkProfileResponse(
        const DeleteNetworkProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new DeleteNetworkProfileResponsePrivate(this), parent)
{
    setRequest(new DeleteNetworkProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteNetworkProfileRequest * DeleteNetworkProfileResponse::request() const
{
    Q_D(const DeleteNetworkProfileResponse);
    return static_cast<const DeleteNetworkProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm DeleteNetworkProfile \a response.
 */
void DeleteNetworkProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteNetworkProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::DeleteNetworkProfileResponsePrivate
 * \brief The DeleteNetworkProfileResponsePrivate class provides private implementation for DeleteNetworkProfileResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a DeleteNetworkProfileResponsePrivate object with public implementation \a q.
 */
DeleteNetworkProfileResponsePrivate::DeleteNetworkProfileResponsePrivate(
    DeleteNetworkProfileResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm DeleteNetworkProfile response element from \a xml.
 */
void DeleteNetworkProfileResponsePrivate::parseDeleteNetworkProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNetworkProfileResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
