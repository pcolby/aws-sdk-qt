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

#include "geteffectivepermissionsforpathresponse.h"
#include "geteffectivepermissionsforpathresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetEffectivePermissionsForPathResponse
 * \brief The GetEffectivePermissionsForPathResponse class provides an interace for LakeFormation GetEffectivePermissionsForPath responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>AWS Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the AWS Lake Formation
 *
 * \sa LakeFormationClient::getEffectivePermissionsForPath
 */

/*!
 * Constructs a GetEffectivePermissionsForPathResponse object for \a reply to \a request, with parent \a parent.
 */
GetEffectivePermissionsForPathResponse::GetEffectivePermissionsForPathResponse(
        const GetEffectivePermissionsForPathRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new GetEffectivePermissionsForPathResponsePrivate(this), parent)
{
    setRequest(new GetEffectivePermissionsForPathRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEffectivePermissionsForPathRequest * GetEffectivePermissionsForPathResponse::request() const
{
    Q_D(const GetEffectivePermissionsForPathResponse);
    return static_cast<const GetEffectivePermissionsForPathRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation GetEffectivePermissionsForPath \a response.
 */
void GetEffectivePermissionsForPathResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEffectivePermissionsForPathResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::GetEffectivePermissionsForPathResponsePrivate
 * \brief The GetEffectivePermissionsForPathResponsePrivate class provides private implementation for GetEffectivePermissionsForPathResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetEffectivePermissionsForPathResponsePrivate object with public implementation \a q.
 */
GetEffectivePermissionsForPathResponsePrivate::GetEffectivePermissionsForPathResponsePrivate(
    GetEffectivePermissionsForPathResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation GetEffectivePermissionsForPath response element from \a xml.
 */
void GetEffectivePermissionsForPathResponsePrivate::parseGetEffectivePermissionsForPathResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEffectivePermissionsForPathResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
