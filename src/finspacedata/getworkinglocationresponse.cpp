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

#include "getworkinglocationresponse.h"
#include "getworkinglocationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinSpaceData {

/*!
 * \class QtAws::FinSpaceData::GetWorkingLocationResponse
 * \brief The GetWorkingLocationResponse class provides an interace for FinSpaceData GetWorkingLocation responses.
 *
 * \inmodule QtAwsFinSpaceData
 *
 *  The FinSpace APIs let you take actions inside the FinSpace environment.
 *
 * \sa FinSpaceDataClient::getWorkingLocation
 */

/*!
 * Constructs a GetWorkingLocationResponse object for \a reply to \a request, with parent \a parent.
 */
GetWorkingLocationResponse::GetWorkingLocationResponse(
        const GetWorkingLocationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinSpaceDataResponse(new GetWorkingLocationResponsePrivate(this), parent)
{
    setRequest(new GetWorkingLocationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWorkingLocationRequest * GetWorkingLocationResponse::request() const
{
    Q_D(const GetWorkingLocationResponse);
    return static_cast<const GetWorkingLocationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinSpaceData GetWorkingLocation \a response.
 */
void GetWorkingLocationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWorkingLocationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinSpaceData::GetWorkingLocationResponsePrivate
 * \brief The GetWorkingLocationResponsePrivate class provides private implementation for GetWorkingLocationResponse.
 * \internal
 *
 * \inmodule QtAwsFinSpaceData
 */

/*!
 * Constructs a GetWorkingLocationResponsePrivate object with public implementation \a q.
 */
GetWorkingLocationResponsePrivate::GetWorkingLocationResponsePrivate(
    GetWorkingLocationResponse * const q) : FinSpaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinSpaceData GetWorkingLocation response element from \a xml.
 */
void GetWorkingLocationResponsePrivate::parseGetWorkingLocationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWorkingLocationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinSpaceData
} // namespace QtAws
