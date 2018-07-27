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

#include "createipgroupresponse.h"
#include "createipgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::CreateIpGroupResponse
 * \brief The CreateIpGroupResponse class provides an interace for WorkSpaces CreateIpGroup responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows desktops for your
 *
 * \sa WorkSpacesClient::createIpGroup
 */

/*!
 * Constructs a CreateIpGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateIpGroupResponse::CreateIpGroupResponse(
        const CreateIpGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new CreateIpGroupResponsePrivate(this), parent)
{
    setRequest(new CreateIpGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateIpGroupRequest * CreateIpGroupResponse::request() const
{
    Q_D(const CreateIpGroupResponse);
    return static_cast<const CreateIpGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces CreateIpGroup \a response.
 */
void CreateIpGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateIpGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::CreateIpGroupResponsePrivate
 * \brief The CreateIpGroupResponsePrivate class provides private implementation for CreateIpGroupResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a CreateIpGroupResponsePrivate object with public implementation \a q.
 */
CreateIpGroupResponsePrivate::CreateIpGroupResponsePrivate(
    CreateIpGroupResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces CreateIpGroup response element from \a xml.
 */
void CreateIpGroupResponsePrivate::parseCreateIpGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateIpGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
