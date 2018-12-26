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

#include "startworkspacesresponse.h"
#include "startworkspacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::StartWorkspacesResponse
 * \brief The StartWorkspacesResponse class provides an interace for WorkSpaces StartWorkspaces responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::startWorkspaces
 */

/*!
 * Constructs a StartWorkspacesResponse object for \a reply to \a request, with parent \a parent.
 */
StartWorkspacesResponse::StartWorkspacesResponse(
        const StartWorkspacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new StartWorkspacesResponsePrivate(this), parent)
{
    setRequest(new StartWorkspacesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartWorkspacesRequest * StartWorkspacesResponse::request() const
{
    Q_D(const StartWorkspacesResponse);
    return static_cast<const StartWorkspacesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces StartWorkspaces \a response.
 */
void StartWorkspacesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartWorkspacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::StartWorkspacesResponsePrivate
 * \brief The StartWorkspacesResponsePrivate class provides private implementation for StartWorkspacesResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a StartWorkspacesResponsePrivate object with public implementation \a q.
 */
StartWorkspacesResponsePrivate::StartWorkspacesResponsePrivate(
    StartWorkspacesResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces StartWorkspaces response element from \a xml.
 */
void StartWorkspacesResponsePrivate::parseStartWorkspacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartWorkspacesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
