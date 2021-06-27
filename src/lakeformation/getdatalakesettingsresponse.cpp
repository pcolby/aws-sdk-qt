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

#include "getdatalakesettingsresponse.h"
#include "getdatalakesettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetDataLakeSettingsResponse
 * \brief The GetDataLakeSettingsResponse class provides an interace for LakeFormation GetDataLakeSettings responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>AWS Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the AWS Lake Formation
 *
 * \sa LakeFormationClient::getDataLakeSettings
 */

/*!
 * Constructs a GetDataLakeSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
GetDataLakeSettingsResponse::GetDataLakeSettingsResponse(
        const GetDataLakeSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new GetDataLakeSettingsResponsePrivate(this), parent)
{
    setRequest(new GetDataLakeSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDataLakeSettingsRequest * GetDataLakeSettingsResponse::request() const
{
    return static_cast<const GetDataLakeSettingsRequest *>(LakeFormationResponse::request());
}

/*!
 * \reimp
 * Parses a successful LakeFormation GetDataLakeSettings \a response.
 */
void GetDataLakeSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDataLakeSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::GetDataLakeSettingsResponsePrivate
 * \brief The GetDataLakeSettingsResponsePrivate class provides private implementation for GetDataLakeSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetDataLakeSettingsResponsePrivate object with public implementation \a q.
 */
GetDataLakeSettingsResponsePrivate::GetDataLakeSettingsResponsePrivate(
    GetDataLakeSettingsResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation GetDataLakeSettings response element from \a xml.
 */
void GetDataLakeSettingsResponsePrivate::parseGetDataLakeSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDataLakeSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
