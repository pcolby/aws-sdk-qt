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

#include "revokepermissionsresponse.h"
#include "revokepermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::RevokePermissionsResponse
 * \brief The RevokePermissionsResponse class provides an interace for LakeFormation RevokePermissions responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>AWS Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the AWS Lake Formation
 *
 * \sa LakeFormationClient::revokePermissions
 */

/*!
 * Constructs a RevokePermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
RevokePermissionsResponse::RevokePermissionsResponse(
        const RevokePermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new RevokePermissionsResponsePrivate(this), parent)
{
    setRequest(new RevokePermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RevokePermissionsRequest * RevokePermissionsResponse::request() const
{
    return static_cast<const RevokePermissionsRequest *>(LakeFormationResponse::request());
}

/*!
 * \reimp
 * Parses a successful LakeFormation RevokePermissions \a response.
 */
void RevokePermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RevokePermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::RevokePermissionsResponsePrivate
 * \brief The RevokePermissionsResponsePrivate class provides private implementation for RevokePermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a RevokePermissionsResponsePrivate object with public implementation \a q.
 */
RevokePermissionsResponsePrivate::RevokePermissionsResponsePrivate(
    RevokePermissionsResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation RevokePermissions response element from \a xml.
 */
void RevokePermissionsResponsePrivate::parseRevokePermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RevokePermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
