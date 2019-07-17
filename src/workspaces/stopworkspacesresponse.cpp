/*
    Copyright 2013-2019 Paul Colby

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

#include "stopworkspacesresponse.h"
#include "stopworkspacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::StopWorkspacesResponse
 * \brief The StopWorkspacesResponse class provides an interace for WorkSpaces StopWorkspaces responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::stopWorkspaces
 */

/*!
 * Constructs a StopWorkspacesResponse object for \a reply to \a request, with parent \a parent.
 */
StopWorkspacesResponse::StopWorkspacesResponse(
        const StopWorkspacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new StopWorkspacesResponsePrivate(this), parent)
{
    setRequest(new StopWorkspacesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopWorkspacesRequest * StopWorkspacesResponse::request() const
{
    Q_D(const StopWorkspacesResponse);
    return static_cast<const StopWorkspacesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces StopWorkspaces \a response.
 */
void StopWorkspacesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopWorkspacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::StopWorkspacesResponsePrivate
 * \brief The StopWorkspacesResponsePrivate class provides private implementation for StopWorkspacesResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a StopWorkspacesResponsePrivate object with public implementation \a q.
 */
StopWorkspacesResponsePrivate::StopWorkspacesResponsePrivate(
    StopWorkspacesResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces StopWorkspaces response element from \a xml.
 */
void StopWorkspacesResponsePrivate::parseStopWorkspacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopWorkspacesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
