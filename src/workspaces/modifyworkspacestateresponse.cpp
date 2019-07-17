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

#include "modifyworkspacestateresponse.h"
#include "modifyworkspacestateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::ModifyWorkspaceStateResponse
 * \brief The ModifyWorkspaceStateResponse class provides an interace for WorkSpaces ModifyWorkspaceState responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::modifyWorkspaceState
 */

/*!
 * Constructs a ModifyWorkspaceStateResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyWorkspaceStateResponse::ModifyWorkspaceStateResponse(
        const ModifyWorkspaceStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new ModifyWorkspaceStateResponsePrivate(this), parent)
{
    setRequest(new ModifyWorkspaceStateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyWorkspaceStateRequest * ModifyWorkspaceStateResponse::request() const
{
    Q_D(const ModifyWorkspaceStateResponse);
    return static_cast<const ModifyWorkspaceStateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces ModifyWorkspaceState \a response.
 */
void ModifyWorkspaceStateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyWorkspaceStateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::ModifyWorkspaceStateResponsePrivate
 * \brief The ModifyWorkspaceStateResponsePrivate class provides private implementation for ModifyWorkspaceStateResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a ModifyWorkspaceStateResponsePrivate object with public implementation \a q.
 */
ModifyWorkspaceStateResponsePrivate::ModifyWorkspaceStateResponsePrivate(
    ModifyWorkspaceStateResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces ModifyWorkspaceState response element from \a xml.
 */
void ModifyWorkspaceStateResponsePrivate::parseModifyWorkspaceStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyWorkspaceStateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
