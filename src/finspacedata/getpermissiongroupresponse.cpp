// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpermissiongroupresponse.h"
#include "getpermissiongroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::GetPermissionGroupResponse
 * \brief The GetPermissionGroupResponse class provides an interace for FinspaceData GetPermissionGroup responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::getPermissionGroup
 */

/*!
 * Constructs a GetPermissionGroupResponse object for \a reply to \a request, with parent \a parent.
 */
GetPermissionGroupResponse::GetPermissionGroupResponse(
        const GetPermissionGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new GetPermissionGroupResponsePrivate(this), parent)
{
    setRequest(new GetPermissionGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPermissionGroupRequest * GetPermissionGroupResponse::request() const
{
    Q_D(const GetPermissionGroupResponse);
    return static_cast<const GetPermissionGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData GetPermissionGroup \a response.
 */
void GetPermissionGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPermissionGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::GetPermissionGroupResponsePrivate
 * \brief The GetPermissionGroupResponsePrivate class provides private implementation for GetPermissionGroupResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a GetPermissionGroupResponsePrivate object with public implementation \a q.
 */
GetPermissionGroupResponsePrivate::GetPermissionGroupResponsePrivate(
    GetPermissionGroupResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData GetPermissionGroup response element from \a xml.
 */
void GetPermissionGroupResponsePrivate::parseGetPermissionGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPermissionGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
