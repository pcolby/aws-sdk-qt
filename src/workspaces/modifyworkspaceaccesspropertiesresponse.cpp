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

#include "modifyworkspaceaccesspropertiesresponse.h"
#include "modifyworkspaceaccesspropertiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::ModifyWorkspaceAccessPropertiesResponse
 * \brief The ModifyWorkspaceAccessPropertiesResponse class provides an interace for WorkSpaces ModifyWorkspaceAccessProperties responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::modifyWorkspaceAccessProperties
 */

/*!
 * Constructs a ModifyWorkspaceAccessPropertiesResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyWorkspaceAccessPropertiesResponse::ModifyWorkspaceAccessPropertiesResponse(
        const ModifyWorkspaceAccessPropertiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new ModifyWorkspaceAccessPropertiesResponsePrivate(this), parent)
{
    setRequest(new ModifyWorkspaceAccessPropertiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyWorkspaceAccessPropertiesRequest * ModifyWorkspaceAccessPropertiesResponse::request() const
{
    return static_cast<const ModifyWorkspaceAccessPropertiesRequest *>(WorkSpacesResponse::request());
}

/*!
 * \reimp
 * Parses a successful WorkSpaces ModifyWorkspaceAccessProperties \a response.
 */
void ModifyWorkspaceAccessPropertiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyWorkspaceAccessPropertiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::ModifyWorkspaceAccessPropertiesResponsePrivate
 * \brief The ModifyWorkspaceAccessPropertiesResponsePrivate class provides private implementation for ModifyWorkspaceAccessPropertiesResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a ModifyWorkspaceAccessPropertiesResponsePrivate object with public implementation \a q.
 */
ModifyWorkspaceAccessPropertiesResponsePrivate::ModifyWorkspaceAccessPropertiesResponsePrivate(
    ModifyWorkspaceAccessPropertiesResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces ModifyWorkspaceAccessProperties response element from \a xml.
 */
void ModifyWorkspaceAccessPropertiesResponsePrivate::parseModifyWorkspaceAccessPropertiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyWorkspaceAccessPropertiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
