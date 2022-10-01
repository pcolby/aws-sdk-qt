// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedatasourcepermissionsresponse.h"
#include "updatedatasourcepermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateDataSourcePermissionsResponse
 * \brief The UpdateDataSourcePermissionsResponse class provides an interace for QuickSight UpdateDataSourcePermissions responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateDataSourcePermissions
 */

/*!
 * Constructs a UpdateDataSourcePermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDataSourcePermissionsResponse::UpdateDataSourcePermissionsResponse(
        const UpdateDataSourcePermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new UpdateDataSourcePermissionsResponsePrivate(this), parent)
{
    setRequest(new UpdateDataSourcePermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDataSourcePermissionsRequest * UpdateDataSourcePermissionsResponse::request() const
{
    Q_D(const UpdateDataSourcePermissionsResponse);
    return static_cast<const UpdateDataSourcePermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight UpdateDataSourcePermissions \a response.
 */
void UpdateDataSourcePermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDataSourcePermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::UpdateDataSourcePermissionsResponsePrivate
 * \brief The UpdateDataSourcePermissionsResponsePrivate class provides private implementation for UpdateDataSourcePermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateDataSourcePermissionsResponsePrivate object with public implementation \a q.
 */
UpdateDataSourcePermissionsResponsePrivate::UpdateDataSourcePermissionsResponsePrivate(
    UpdateDataSourcePermissionsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight UpdateDataSourcePermissions response element from \a xml.
 */
void UpdateDataSourcePermissionsResponsePrivate::parseUpdateDataSourcePermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDataSourcePermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
