// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
