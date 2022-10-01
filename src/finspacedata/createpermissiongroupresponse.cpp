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

#include "createpermissiongroupresponse.h"
#include "createpermissiongroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::CreatePermissionGroupResponse
 * \brief The CreatePermissionGroupResponse class provides an interace for FinspaceData CreatePermissionGroup responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::createPermissionGroup
 */

/*!
 * Constructs a CreatePermissionGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePermissionGroupResponse::CreatePermissionGroupResponse(
        const CreatePermissionGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new CreatePermissionGroupResponsePrivate(this), parent)
{
    setRequest(new CreatePermissionGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePermissionGroupRequest * CreatePermissionGroupResponse::request() const
{
    Q_D(const CreatePermissionGroupResponse);
    return static_cast<const CreatePermissionGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData CreatePermissionGroup \a response.
 */
void CreatePermissionGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePermissionGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::CreatePermissionGroupResponsePrivate
 * \brief The CreatePermissionGroupResponsePrivate class provides private implementation for CreatePermissionGroupResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a CreatePermissionGroupResponsePrivate object with public implementation \a q.
 */
CreatePermissionGroupResponsePrivate::CreatePermissionGroupResponsePrivate(
    CreatePermissionGroupResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData CreatePermissionGroup response element from \a xml.
 */
void CreatePermissionGroupResponsePrivate::parseCreatePermissionGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePermissionGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
