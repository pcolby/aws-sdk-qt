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

#include "rebootworkspacesresponse.h"
#include "rebootworkspacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::RebootWorkspacesResponse
 * \brief The RebootWorkspacesResponse class provides an interace for WorkSpaces RebootWorkspaces responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows desktops for your
 *
 * \sa WorkSpacesClient::rebootWorkspaces
 */

/*!
 * Constructs a RebootWorkspacesResponse object for \a reply to \a request, with parent \a parent.
 */
RebootWorkspacesResponse::RebootWorkspacesResponse(
        const RebootWorkspacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new RebootWorkspacesResponsePrivate(this), parent)
{
    setRequest(new RebootWorkspacesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RebootWorkspacesRequest * RebootWorkspacesResponse::request() const
{
    Q_D(const RebootWorkspacesResponse);
    return static_cast<const RebootWorkspacesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces RebootWorkspaces \a response.
 */
void RebootWorkspacesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RebootWorkspacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::RebootWorkspacesResponsePrivate
 * \brief The RebootWorkspacesResponsePrivate class provides private implementation for RebootWorkspacesResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a RebootWorkspacesResponsePrivate object with public implementation \a q.
 */
RebootWorkspacesResponsePrivate::RebootWorkspacesResponsePrivate(
    RebootWorkspacesResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces RebootWorkspaces response element from \a xml.
 */
void RebootWorkspacesResponsePrivate::parseRebootWorkspacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RebootWorkspacesResponse"));
    /// @todo
}

} // namespace WorkSpaces
} // namespace QtAws
