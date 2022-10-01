// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepermissiongroupresponse.h"
#include "deletepermissiongroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::DeletePermissionGroupResponse
 * \brief The DeletePermissionGroupResponse class provides an interace for FinspaceData DeletePermissionGroup responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::deletePermissionGroup
 */

/*!
 * Constructs a DeletePermissionGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePermissionGroupResponse::DeletePermissionGroupResponse(
        const DeletePermissionGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new DeletePermissionGroupResponsePrivate(this), parent)
{
    setRequest(new DeletePermissionGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePermissionGroupRequest * DeletePermissionGroupResponse::request() const
{
    Q_D(const DeletePermissionGroupResponse);
    return static_cast<const DeletePermissionGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData DeletePermissionGroup \a response.
 */
void DeletePermissionGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePermissionGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::DeletePermissionGroupResponsePrivate
 * \brief The DeletePermissionGroupResponsePrivate class provides private implementation for DeletePermissionGroupResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a DeletePermissionGroupResponsePrivate object with public implementation \a q.
 */
DeletePermissionGroupResponsePrivate::DeletePermissionGroupResponsePrivate(
    DeletePermissionGroupResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData DeletePermissionGroup response element from \a xml.
 */
void DeletePermissionGroupResponsePrivate::parseDeletePermissionGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePermissionGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
