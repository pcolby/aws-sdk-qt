/*
    Copyright 2013-2020 Paul Colby

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

#include "getsuiteresponse.h"
#include "getsuiteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetSuiteResponse
 * \brief The GetSuiteResponse class provides an interace for DeviceFarm GetSuite responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getSuite
 */

/*!
 * Constructs a GetSuiteResponse object for \a reply to \a request, with parent \a parent.
 */
GetSuiteResponse::GetSuiteResponse(
        const GetSuiteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetSuiteResponsePrivate(this), parent)
{
    setRequest(new GetSuiteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSuiteRequest * GetSuiteResponse::request() const
{
    Q_D(const GetSuiteResponse);
    return static_cast<const GetSuiteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm GetSuite \a response.
 */
void GetSuiteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSuiteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::GetSuiteResponsePrivate
 * \brief The GetSuiteResponsePrivate class provides private implementation for GetSuiteResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetSuiteResponsePrivate object with public implementation \a q.
 */
GetSuiteResponsePrivate::GetSuiteResponsePrivate(
    GetSuiteResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm GetSuite response element from \a xml.
 */
void GetSuiteResponsePrivate::parseGetSuiteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSuiteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
