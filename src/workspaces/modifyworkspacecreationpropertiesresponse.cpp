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

#include "modifyworkspacecreationpropertiesresponse.h"
#include "modifyworkspacecreationpropertiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::ModifyWorkspaceCreationPropertiesResponse
 * \brief The ModifyWorkspaceCreationPropertiesResponse class provides an interace for WorkSpaces ModifyWorkspaceCreationProperties responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::modifyWorkspaceCreationProperties
 */

/*!
 * Constructs a ModifyWorkspaceCreationPropertiesResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyWorkspaceCreationPropertiesResponse::ModifyWorkspaceCreationPropertiesResponse(
        const ModifyWorkspaceCreationPropertiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new ModifyWorkspaceCreationPropertiesResponsePrivate(this), parent)
{
    setRequest(new ModifyWorkspaceCreationPropertiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyWorkspaceCreationPropertiesRequest * ModifyWorkspaceCreationPropertiesResponse::request() const
{
    Q_D(const ModifyWorkspaceCreationPropertiesResponse);
    return static_cast<const ModifyWorkspaceCreationPropertiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces ModifyWorkspaceCreationProperties \a response.
 */
void ModifyWorkspaceCreationPropertiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyWorkspaceCreationPropertiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::ModifyWorkspaceCreationPropertiesResponsePrivate
 * \brief The ModifyWorkspaceCreationPropertiesResponsePrivate class provides private implementation for ModifyWorkspaceCreationPropertiesResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a ModifyWorkspaceCreationPropertiesResponsePrivate object with public implementation \a q.
 */
ModifyWorkspaceCreationPropertiesResponsePrivate::ModifyWorkspaceCreationPropertiesResponsePrivate(
    ModifyWorkspaceCreationPropertiesResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces ModifyWorkspaceCreationProperties response element from \a xml.
 */
void ModifyWorkspaceCreationPropertiesResponsePrivate::parseModifyWorkspaceCreationPropertiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyWorkspaceCreationPropertiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
