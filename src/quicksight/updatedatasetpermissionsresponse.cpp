// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedatasetpermissionsresponse.h"
#include "updatedatasetpermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateDataSetPermissionsResponse
 * \brief The UpdateDataSetPermissionsResponse class provides an interace for QuickSight UpdateDataSetPermissions responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateDataSetPermissions
 */

/*!
 * Constructs a UpdateDataSetPermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDataSetPermissionsResponse::UpdateDataSetPermissionsResponse(
        const UpdateDataSetPermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new UpdateDataSetPermissionsResponsePrivate(this), parent)
{
    setRequest(new UpdateDataSetPermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDataSetPermissionsRequest * UpdateDataSetPermissionsResponse::request() const
{
    Q_D(const UpdateDataSetPermissionsResponse);
    return static_cast<const UpdateDataSetPermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight UpdateDataSetPermissions \a response.
 */
void UpdateDataSetPermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDataSetPermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::UpdateDataSetPermissionsResponsePrivate
 * \brief The UpdateDataSetPermissionsResponsePrivate class provides private implementation for UpdateDataSetPermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateDataSetPermissionsResponsePrivate object with public implementation \a q.
 */
UpdateDataSetPermissionsResponsePrivate::UpdateDataSetPermissionsResponsePrivate(
    UpdateDataSetPermissionsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight UpdateDataSetPermissions response element from \a xml.
 */
void UpdateDataSetPermissionsResponsePrivate::parseUpdateDataSetPermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDataSetPermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
