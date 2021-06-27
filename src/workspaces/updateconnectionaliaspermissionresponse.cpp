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

#include "updateconnectionaliaspermissionresponse.h"
#include "updateconnectionaliaspermissionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::UpdateConnectionAliasPermissionResponse
 * \brief The UpdateConnectionAliasPermissionResponse class provides an interace for WorkSpaces UpdateConnectionAliasPermission responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::updateConnectionAliasPermission
 */

/*!
 * Constructs a UpdateConnectionAliasPermissionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateConnectionAliasPermissionResponse::UpdateConnectionAliasPermissionResponse(
        const UpdateConnectionAliasPermissionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new UpdateConnectionAliasPermissionResponsePrivate(this), parent)
{
    setRequest(new UpdateConnectionAliasPermissionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateConnectionAliasPermissionRequest * UpdateConnectionAliasPermissionResponse::request() const
{
    return static_cast<const UpdateConnectionAliasPermissionRequest *>(WorkSpacesResponse::request());
}

/*!
 * \reimp
 * Parses a successful WorkSpaces UpdateConnectionAliasPermission \a response.
 */
void UpdateConnectionAliasPermissionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateConnectionAliasPermissionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::UpdateConnectionAliasPermissionResponsePrivate
 * \brief The UpdateConnectionAliasPermissionResponsePrivate class provides private implementation for UpdateConnectionAliasPermissionResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a UpdateConnectionAliasPermissionResponsePrivate object with public implementation \a q.
 */
UpdateConnectionAliasPermissionResponsePrivate::UpdateConnectionAliasPermissionResponsePrivate(
    UpdateConnectionAliasPermissionResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces UpdateConnectionAliasPermission response element from \a xml.
 */
void UpdateConnectionAliasPermissionResponsePrivate::parseUpdateConnectionAliasPermissionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConnectionAliasPermissionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
