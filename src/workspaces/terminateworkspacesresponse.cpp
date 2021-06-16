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

#include "terminateworkspacesresponse.h"
#include "terminateworkspacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::TerminateWorkspacesResponse
 * \brief The TerminateWorkspacesResponse class provides an interace for WorkSpaces TerminateWorkspaces responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::terminateWorkspaces
 */

/*!
 * Constructs a TerminateWorkspacesResponse object for \a reply to \a request, with parent \a parent.
 */
TerminateWorkspacesResponse::TerminateWorkspacesResponse(
        const TerminateWorkspacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new TerminateWorkspacesResponsePrivate(this), parent)
{
    setRequest(new TerminateWorkspacesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TerminateWorkspacesRequest * TerminateWorkspacesResponse::request() const
{
    Q_D(const TerminateWorkspacesResponse);
    return static_cast<const TerminateWorkspacesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces TerminateWorkspaces \a response.
 */
void TerminateWorkspacesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TerminateWorkspacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::TerminateWorkspacesResponsePrivate
 * \brief The TerminateWorkspacesResponsePrivate class provides private implementation for TerminateWorkspacesResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a TerminateWorkspacesResponsePrivate object with public implementation \a q.
 */
TerminateWorkspacesResponsePrivate::TerminateWorkspacesResponsePrivate(
    TerminateWorkspacesResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces TerminateWorkspaces response element from \a xml.
 */
void TerminateWorkspacesResponsePrivate::parseTerminateWorkspacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TerminateWorkspacesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
