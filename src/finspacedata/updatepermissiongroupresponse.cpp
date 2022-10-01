// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatepermissiongroupresponse.h"
#include "updatepermissiongroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::UpdatePermissionGroupResponse
 * \brief The UpdatePermissionGroupResponse class provides an interace for FinspaceData UpdatePermissionGroup responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::updatePermissionGroup
 */

/*!
 * Constructs a UpdatePermissionGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePermissionGroupResponse::UpdatePermissionGroupResponse(
        const UpdatePermissionGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new UpdatePermissionGroupResponsePrivate(this), parent)
{
    setRequest(new UpdatePermissionGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePermissionGroupRequest * UpdatePermissionGroupResponse::request() const
{
    Q_D(const UpdatePermissionGroupResponse);
    return static_cast<const UpdatePermissionGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData UpdatePermissionGroup \a response.
 */
void UpdatePermissionGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePermissionGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::UpdatePermissionGroupResponsePrivate
 * \brief The UpdatePermissionGroupResponsePrivate class provides private implementation for UpdatePermissionGroupResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a UpdatePermissionGroupResponsePrivate object with public implementation \a q.
 */
UpdatePermissionGroupResponsePrivate::UpdatePermissionGroupResponsePrivate(
    UpdatePermissionGroupResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData UpdatePermissionGroup response element from \a xml.
 */
void UpdatePermissionGroupResponsePrivate::parseUpdatePermissionGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePermissionGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
