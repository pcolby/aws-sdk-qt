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

#include "migrateworkspaceresponse.h"
#include "migrateworkspaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::MigrateWorkspaceResponse
 * \brief The MigrateWorkspaceResponse class provides an interace for WorkSpaces MigrateWorkspace responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::migrateWorkspace
 */

/*!
 * Constructs a MigrateWorkspaceResponse object for \a reply to \a request, with parent \a parent.
 */
MigrateWorkspaceResponse::MigrateWorkspaceResponse(
        const MigrateWorkspaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new MigrateWorkspaceResponsePrivate(this), parent)
{
    setRequest(new MigrateWorkspaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const MigrateWorkspaceRequest * MigrateWorkspaceResponse::request() const
{
    return static_cast<const MigrateWorkspaceRequest *>(WorkSpacesResponse::request());
}

/*!
 * \reimp
 * Parses a successful WorkSpaces MigrateWorkspace \a response.
 */
void MigrateWorkspaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(MigrateWorkspaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::MigrateWorkspaceResponsePrivate
 * \brief The MigrateWorkspaceResponsePrivate class provides private implementation for MigrateWorkspaceResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a MigrateWorkspaceResponsePrivate object with public implementation \a q.
 */
MigrateWorkspaceResponsePrivate::MigrateWorkspaceResponsePrivate(
    MigrateWorkspaceResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces MigrateWorkspace response element from \a xml.
 */
void MigrateWorkspaceResponsePrivate::parseMigrateWorkspaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("MigrateWorkspaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
