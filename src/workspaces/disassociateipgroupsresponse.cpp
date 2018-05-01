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

#include "disassociateipgroupsresponse.h"
#include "disassociateipgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DisassociateIpGroupsResponse
 * \brief The DisassociateIpGroupsResponse class provides an interace for WorkSpaces DisassociateIpGroups responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows desktops for your
 *
 * \sa WorkSpacesClient::disassociateIpGroups
 */

/*!
 * Constructs a DisassociateIpGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateIpGroupsResponse::DisassociateIpGroupsResponse(
        const DisassociateIpGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new DisassociateIpGroupsResponsePrivate(this), parent)
{
    setRequest(new DisassociateIpGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateIpGroupsRequest * DisassociateIpGroupsResponse::request() const
{
    Q_D(const DisassociateIpGroupsResponse);
    return static_cast<const DisassociateIpGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces DisassociateIpGroups \a response.
 */
void DisassociateIpGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisassociateIpGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::DisassociateIpGroupsResponsePrivate
 * \brief The DisassociateIpGroupsResponsePrivate class provides private implementation for DisassociateIpGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DisassociateIpGroupsResponsePrivate object with public implementation \a q.
 */
DisassociateIpGroupsResponsePrivate::DisassociateIpGroupsResponsePrivate(
    DisassociateIpGroupsResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces DisassociateIpGroups response element from \a xml.
 */
void DisassociateIpGroupsResponsePrivate::parseDisassociateIpGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateIpGroupsResponse"));
    /// @todo
}

} // namespace WorkSpaces
} // namespace QtAws
