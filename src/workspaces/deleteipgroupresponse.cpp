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

#include "deleteipgroupresponse.h"
#include "deleteipgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DeleteIpGroupResponse
 * \brief The DeleteIpGroupResponse class provides an interace for WorkSpaces DeleteIpGroup responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::deleteIpGroup
 */

/*!
 * Constructs a DeleteIpGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteIpGroupResponse::DeleteIpGroupResponse(
        const DeleteIpGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new DeleteIpGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteIpGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteIpGroupRequest * DeleteIpGroupResponse::request() const
{
    return static_cast<const DeleteIpGroupRequest *>(WorkSpacesResponse::request());
}

/*!
 * \reimp
 * Parses a successful WorkSpaces DeleteIpGroup \a response.
 */
void DeleteIpGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteIpGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::DeleteIpGroupResponsePrivate
 * \brief The DeleteIpGroupResponsePrivate class provides private implementation for DeleteIpGroupResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DeleteIpGroupResponsePrivate object with public implementation \a q.
 */
DeleteIpGroupResponsePrivate::DeleteIpGroupResponsePrivate(
    DeleteIpGroupResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces DeleteIpGroup response element from \a xml.
 */
void DeleteIpGroupResponsePrivate::parseDeleteIpGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIpGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
