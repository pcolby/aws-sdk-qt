// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedashboardpermissionsresponse.h"
#include "updatedashboardpermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateDashboardPermissionsResponse
 * \brief The UpdateDashboardPermissionsResponse class provides an interace for QuickSight UpdateDashboardPermissions responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateDashboardPermissions
 */

/*!
 * Constructs a UpdateDashboardPermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDashboardPermissionsResponse::UpdateDashboardPermissionsResponse(
        const UpdateDashboardPermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new UpdateDashboardPermissionsResponsePrivate(this), parent)
{
    setRequest(new UpdateDashboardPermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDashboardPermissionsRequest * UpdateDashboardPermissionsResponse::request() const
{
    Q_D(const UpdateDashboardPermissionsResponse);
    return static_cast<const UpdateDashboardPermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight UpdateDashboardPermissions \a response.
 */
void UpdateDashboardPermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDashboardPermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::UpdateDashboardPermissionsResponsePrivate
 * \brief The UpdateDashboardPermissionsResponsePrivate class provides private implementation for UpdateDashboardPermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateDashboardPermissionsResponsePrivate object with public implementation \a q.
 */
UpdateDashboardPermissionsResponsePrivate::UpdateDashboardPermissionsResponsePrivate(
    UpdateDashboardPermissionsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight UpdateDashboardPermissions response element from \a xml.
 */
void UpdateDashboardPermissionsResponsePrivate::parseUpdateDashboardPermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDashboardPermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
