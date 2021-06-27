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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
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
    return static_cast<const UpdateDataSetPermissionsRequest *>(QuickSightResponse::request());
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
