// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatethemepermissionsresponse.h"
#include "updatethemepermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateThemePermissionsResponse
 * \brief The UpdateThemePermissionsResponse class provides an interace for QuickSight UpdateThemePermissions responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateThemePermissions
 */

/*!
 * Constructs a UpdateThemePermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateThemePermissionsResponse::UpdateThemePermissionsResponse(
        const UpdateThemePermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new UpdateThemePermissionsResponsePrivate(this), parent)
{
    setRequest(new UpdateThemePermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateThemePermissionsRequest * UpdateThemePermissionsResponse::request() const
{
    Q_D(const UpdateThemePermissionsResponse);
    return static_cast<const UpdateThemePermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight UpdateThemePermissions \a response.
 */
void UpdateThemePermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateThemePermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::UpdateThemePermissionsResponsePrivate
 * \brief The UpdateThemePermissionsResponsePrivate class provides private implementation for UpdateThemePermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateThemePermissionsResponsePrivate object with public implementation \a q.
 */
UpdateThemePermissionsResponsePrivate::UpdateThemePermissionsResponsePrivate(
    UpdateThemePermissionsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight UpdateThemePermissions response element from \a xml.
 */
void UpdateThemePermissionsResponsePrivate::parseUpdateThemePermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateThemePermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
