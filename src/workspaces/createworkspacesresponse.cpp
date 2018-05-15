/*
    Copyright 2013-2018 Paul Colby

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

#include "createworkspacesresponse.h"
#include "createworkspacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::CreateWorkspacesResponse
 * \brief The CreateWorkspacesResponse class provides an interace for WorkSpaces CreateWorkspaces responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows desktops for your
 *
 * \sa WorkSpacesClient::createWorkspaces
 */

/*!
 * Constructs a CreateWorkspacesResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWorkspacesResponse::CreateWorkspacesResponse(
        const CreateWorkspacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new CreateWorkspacesResponsePrivate(this), parent)
{
    setRequest(new CreateWorkspacesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWorkspacesRequest * CreateWorkspacesResponse::request() const
{
    Q_D(const CreateWorkspacesResponse);
    return static_cast<const CreateWorkspacesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces CreateWorkspaces \a response.
 */
void CreateWorkspacesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWorkspacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::CreateWorkspacesResponsePrivate
 * \brief The CreateWorkspacesResponsePrivate class provides private implementation for CreateWorkspacesResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a CreateWorkspacesResponsePrivate object with public implementation \a q.
 */
CreateWorkspacesResponsePrivate::CreateWorkspacesResponsePrivate(
    CreateWorkspacesResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces CreateWorkspaces response element from \a xml.
 */
void CreateWorkspacesResponsePrivate::parseCreateWorkspacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWorkspacesResponse"));
    /// @todo
}

} // namespace WorkSpaces
} // namespace QtAws
