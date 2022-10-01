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

#include "getworkunitsresponse.h"
#include "getworkunitsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetWorkUnitsResponse
 * \brief The GetWorkUnitsResponse class provides an interace for LakeFormation GetWorkUnits responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getWorkUnits
 */

/*!
 * Constructs a GetWorkUnitsResponse object for \a reply to \a request, with parent \a parent.
 */
GetWorkUnitsResponse::GetWorkUnitsResponse(
        const GetWorkUnitsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new GetWorkUnitsResponsePrivate(this), parent)
{
    setRequest(new GetWorkUnitsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWorkUnitsRequest * GetWorkUnitsResponse::request() const
{
    Q_D(const GetWorkUnitsResponse);
    return static_cast<const GetWorkUnitsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation GetWorkUnits \a response.
 */
void GetWorkUnitsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWorkUnitsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::GetWorkUnitsResponsePrivate
 * \brief The GetWorkUnitsResponsePrivate class provides private implementation for GetWorkUnitsResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetWorkUnitsResponsePrivate object with public implementation \a q.
 */
GetWorkUnitsResponsePrivate::GetWorkUnitsResponsePrivate(
    GetWorkUnitsResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation GetWorkUnits response element from \a xml.
 */
void GetWorkUnitsResponsePrivate::parseGetWorkUnitsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWorkUnitsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
