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

#include "getworkunitresultsresponse.h"
#include "getworkunitresultsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetWorkUnitResultsResponse
 * \brief The GetWorkUnitResultsResponse class provides an interace for LakeFormation GetWorkUnitResults responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getWorkUnitResults
 */

/*!
 * Constructs a GetWorkUnitResultsResponse object for \a reply to \a request, with parent \a parent.
 */
GetWorkUnitResultsResponse::GetWorkUnitResultsResponse(
        const GetWorkUnitResultsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new GetWorkUnitResultsResponsePrivate(this), parent)
{
    setRequest(new GetWorkUnitResultsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWorkUnitResultsRequest * GetWorkUnitResultsResponse::request() const
{
    Q_D(const GetWorkUnitResultsResponse);
    return static_cast<const GetWorkUnitResultsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation GetWorkUnitResults \a response.
 */
void GetWorkUnitResultsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWorkUnitResultsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::GetWorkUnitResultsResponsePrivate
 * \brief The GetWorkUnitResultsResponsePrivate class provides private implementation for GetWorkUnitResultsResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetWorkUnitResultsResponsePrivate object with public implementation \a q.
 */
GetWorkUnitResultsResponsePrivate::GetWorkUnitResultsResponsePrivate(
    GetWorkUnitResultsResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation GetWorkUnitResults response element from \a xml.
 */
void GetWorkUnitResultsResponsePrivate::parseGetWorkUnitResultsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWorkUnitResultsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
