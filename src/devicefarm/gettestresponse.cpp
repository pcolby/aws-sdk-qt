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

#include "gettestresponse.h"
#include "gettestresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetTestResponse
 * \brief The GetTestResponse class provides an interace for DeviceFarm GetTest responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getTest
 */

/*!
 * Constructs a GetTestResponse object for \a reply to \a request, with parent \a parent.
 */
GetTestResponse::GetTestResponse(
        const GetTestRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetTestResponsePrivate(this), parent)
{
    setRequest(new GetTestRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTestRequest * GetTestResponse::request() const
{
    Q_D(const GetTestResponse);
    return static_cast<const GetTestRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm GetTest \a response.
 */
void GetTestResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetTestResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::GetTestResponsePrivate
 * \brief The GetTestResponsePrivate class provides private implementation for GetTestResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetTestResponsePrivate object with public implementation \a q.
 */
GetTestResponsePrivate::GetTestResponsePrivate(
    GetTestResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm GetTest response element from \a xml.
 */
void GetTestResponsePrivate::parseGetTestResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTestResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
