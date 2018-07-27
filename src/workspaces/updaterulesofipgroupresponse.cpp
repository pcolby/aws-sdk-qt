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

#include "updaterulesofipgroupresponse.h"
#include "updaterulesofipgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::UpdateRulesOfIpGroupResponse
 * \brief The UpdateRulesOfIpGroupResponse class provides an interace for WorkSpaces UpdateRulesOfIpGroup responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows desktops for your
 *
 * \sa WorkSpacesClient::updateRulesOfIpGroup
 */

/*!
 * Constructs a UpdateRulesOfIpGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRulesOfIpGroupResponse::UpdateRulesOfIpGroupResponse(
        const UpdateRulesOfIpGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new UpdateRulesOfIpGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateRulesOfIpGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRulesOfIpGroupRequest * UpdateRulesOfIpGroupResponse::request() const
{
    Q_D(const UpdateRulesOfIpGroupResponse);
    return static_cast<const UpdateRulesOfIpGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces UpdateRulesOfIpGroup \a response.
 */
void UpdateRulesOfIpGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRulesOfIpGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::UpdateRulesOfIpGroupResponsePrivate
 * \brief The UpdateRulesOfIpGroupResponsePrivate class provides private implementation for UpdateRulesOfIpGroupResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a UpdateRulesOfIpGroupResponsePrivate object with public implementation \a q.
 */
UpdateRulesOfIpGroupResponsePrivate::UpdateRulesOfIpGroupResponsePrivate(
    UpdateRulesOfIpGroupResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces UpdateRulesOfIpGroup response element from \a xml.
 */
void UpdateRulesOfIpGroupResponsePrivate::parseUpdateRulesOfIpGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRulesOfIpGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
