// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatefolderpermissionsresponse.h"
#include "updatefolderpermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateFolderPermissionsResponse
 * \brief The UpdateFolderPermissionsResponse class provides an interace for QuickSight UpdateFolderPermissions responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateFolderPermissions
 */

/*!
 * Constructs a UpdateFolderPermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFolderPermissionsResponse::UpdateFolderPermissionsResponse(
        const UpdateFolderPermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new UpdateFolderPermissionsResponsePrivate(this), parent)
{
    setRequest(new UpdateFolderPermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFolderPermissionsRequest * UpdateFolderPermissionsResponse::request() const
{
    Q_D(const UpdateFolderPermissionsResponse);
    return static_cast<const UpdateFolderPermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight UpdateFolderPermissions \a response.
 */
void UpdateFolderPermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFolderPermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::UpdateFolderPermissionsResponsePrivate
 * \brief The UpdateFolderPermissionsResponsePrivate class provides private implementation for UpdateFolderPermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateFolderPermissionsResponsePrivate object with public implementation \a q.
 */
UpdateFolderPermissionsResponsePrivate::UpdateFolderPermissionsResponsePrivate(
    UpdateFolderPermissionsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight UpdateFolderPermissions response element from \a xml.
 */
void UpdateFolderPermissionsResponsePrivate::parseUpdateFolderPermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFolderPermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
