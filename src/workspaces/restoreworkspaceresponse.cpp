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

#include "restoreworkspaceresponse.h"
#include "restoreworkspaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::RestoreWorkspaceResponse
 * \brief The RestoreWorkspaceResponse class provides an interace for WorkSpaces RestoreWorkspace responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::restoreWorkspace
 */

/*!
 * Constructs a RestoreWorkspaceResponse object for \a reply to \a request, with parent \a parent.
 */
RestoreWorkspaceResponse::RestoreWorkspaceResponse(
        const RestoreWorkspaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new RestoreWorkspaceResponsePrivate(this), parent)
{
    setRequest(new RestoreWorkspaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RestoreWorkspaceRequest * RestoreWorkspaceResponse::request() const
{
    Q_D(const RestoreWorkspaceResponse);
    return static_cast<const RestoreWorkspaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces RestoreWorkspace \a response.
 */
void RestoreWorkspaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RestoreWorkspaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::RestoreWorkspaceResponsePrivate
 * \brief The RestoreWorkspaceResponsePrivate class provides private implementation for RestoreWorkspaceResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a RestoreWorkspaceResponsePrivate object with public implementation \a q.
 */
RestoreWorkspaceResponsePrivate::RestoreWorkspaceResponsePrivate(
    RestoreWorkspaceResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces RestoreWorkspace response element from \a xml.
 */
void RestoreWorkspaceResponsePrivate::parseRestoreWorkspaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreWorkspaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
