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

#include "associateipgroupsresponse.h"
#include "associateipgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::AssociateIpGroupsResponse
 * \brief The AssociateIpGroupsResponse class provides an interace for WorkSpaces AssociateIpGroups responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::associateIpGroups
 */

/*!
 * Constructs a AssociateIpGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateIpGroupsResponse::AssociateIpGroupsResponse(
        const AssociateIpGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new AssociateIpGroupsResponsePrivate(this), parent)
{
    setRequest(new AssociateIpGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateIpGroupsRequest * AssociateIpGroupsResponse::request() const
{
    Q_D(const AssociateIpGroupsResponse);
    return static_cast<const AssociateIpGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces AssociateIpGroups \a response.
 */
void AssociateIpGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateIpGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::AssociateIpGroupsResponsePrivate
 * \brief The AssociateIpGroupsResponsePrivate class provides private implementation for AssociateIpGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a AssociateIpGroupsResponsePrivate object with public implementation \a q.
 */
AssociateIpGroupsResponsePrivate::AssociateIpGroupsResponsePrivate(
    AssociateIpGroupsResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces AssociateIpGroups response element from \a xml.
 */
void AssociateIpGroupsResponsePrivate::parseAssociateIpGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateIpGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
