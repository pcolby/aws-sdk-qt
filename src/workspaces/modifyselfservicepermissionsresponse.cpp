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

#include "modifyselfservicepermissionsresponse.h"
#include "modifyselfservicepermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::ModifySelfservicePermissionsResponse
 * \brief The ModifySelfservicePermissionsResponse class provides an interace for WorkSpaces ModifySelfservicePermissions responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::modifySelfservicePermissions
 */

/*!
 * Constructs a ModifySelfservicePermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
ModifySelfservicePermissionsResponse::ModifySelfservicePermissionsResponse(
        const ModifySelfservicePermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new ModifySelfservicePermissionsResponsePrivate(this), parent)
{
    setRequest(new ModifySelfservicePermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifySelfservicePermissionsRequest * ModifySelfservicePermissionsResponse::request() const
{
    return static_cast<const ModifySelfservicePermissionsRequest *>(WorkSpacesResponse::request());
}

/*!
 * \reimp
 * Parses a successful WorkSpaces ModifySelfservicePermissions \a response.
 */
void ModifySelfservicePermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifySelfservicePermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::ModifySelfservicePermissionsResponsePrivate
 * \brief The ModifySelfservicePermissionsResponsePrivate class provides private implementation for ModifySelfservicePermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a ModifySelfservicePermissionsResponsePrivate object with public implementation \a q.
 */
ModifySelfservicePermissionsResponsePrivate::ModifySelfservicePermissionsResponsePrivate(
    ModifySelfservicePermissionsResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces ModifySelfservicePermissions response element from \a xml.
 */
void ModifySelfservicePermissionsResponsePrivate::parseModifySelfservicePermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifySelfservicePermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
