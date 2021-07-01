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

#include "createworkspacebundleresponse.h"
#include "createworkspacebundleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::CreateWorkspaceBundleResponse
 * \brief The CreateWorkspaceBundleResponse class provides an interace for WorkSpaces CreateWorkspaceBundle responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::createWorkspaceBundle
 */

/*!
 * Constructs a CreateWorkspaceBundleResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWorkspaceBundleResponse::CreateWorkspaceBundleResponse(
        const CreateWorkspaceBundleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new CreateWorkspaceBundleResponsePrivate(this), parent)
{
    setRequest(new CreateWorkspaceBundleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWorkspaceBundleRequest * CreateWorkspaceBundleResponse::request() const
{
    Q_D(const CreateWorkspaceBundleResponse);
    return static_cast<const CreateWorkspaceBundleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces CreateWorkspaceBundle \a response.
 */
void CreateWorkspaceBundleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWorkspaceBundleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::CreateWorkspaceBundleResponsePrivate
 * \brief The CreateWorkspaceBundleResponsePrivate class provides private implementation for CreateWorkspaceBundleResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a CreateWorkspaceBundleResponsePrivate object with public implementation \a q.
 */
CreateWorkspaceBundleResponsePrivate::CreateWorkspaceBundleResponsePrivate(
    CreateWorkspaceBundleResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces CreateWorkspaceBundle response element from \a xml.
 */
void CreateWorkspaceBundleResponsePrivate::parseCreateWorkspaceBundleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWorkspaceBundleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
