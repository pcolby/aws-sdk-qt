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

#include "modifyworkspacepropertiesresponse.h"
#include "modifyworkspacepropertiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::ModifyWorkspacePropertiesResponse
 * \brief The ModifyWorkspacePropertiesResponse class provides an interace for WorkSpaces ModifyWorkspaceProperties responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::modifyWorkspaceProperties
 */

/*!
 * Constructs a ModifyWorkspacePropertiesResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyWorkspacePropertiesResponse::ModifyWorkspacePropertiesResponse(
        const ModifyWorkspacePropertiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new ModifyWorkspacePropertiesResponsePrivate(this), parent)
{
    setRequest(new ModifyWorkspacePropertiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyWorkspacePropertiesRequest * ModifyWorkspacePropertiesResponse::request() const
{
    Q_D(const ModifyWorkspacePropertiesResponse);
    return static_cast<const ModifyWorkspacePropertiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces ModifyWorkspaceProperties \a response.
 */
void ModifyWorkspacePropertiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyWorkspacePropertiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::ModifyWorkspacePropertiesResponsePrivate
 * \brief The ModifyWorkspacePropertiesResponsePrivate class provides private implementation for ModifyWorkspacePropertiesResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a ModifyWorkspacePropertiesResponsePrivate object with public implementation \a q.
 */
ModifyWorkspacePropertiesResponsePrivate::ModifyWorkspacePropertiesResponsePrivate(
    ModifyWorkspacePropertiesResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces ModifyWorkspaceProperties response element from \a xml.
 */
void ModifyWorkspacePropertiesResponsePrivate::parseModifyWorkspacePropertiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyWorkspacePropertiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
