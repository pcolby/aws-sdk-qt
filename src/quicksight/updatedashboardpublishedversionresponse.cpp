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

#include "updatedashboardpublishedversionresponse.h"
#include "updatedashboardpublishedversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateDashboardPublishedVersionResponse
 * \brief The UpdateDashboardPublishedVersionResponse class provides an interace for QuickSight UpdateDashboardPublishedVersion responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateDashboardPublishedVersion
 */

/*!
 * Constructs a UpdateDashboardPublishedVersionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDashboardPublishedVersionResponse::UpdateDashboardPublishedVersionResponse(
        const UpdateDashboardPublishedVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new UpdateDashboardPublishedVersionResponsePrivate(this), parent)
{
    setRequest(new UpdateDashboardPublishedVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDashboardPublishedVersionRequest * UpdateDashboardPublishedVersionResponse::request() const
{
    Q_D(const UpdateDashboardPublishedVersionResponse);
    return static_cast<const UpdateDashboardPublishedVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight UpdateDashboardPublishedVersion \a response.
 */
void UpdateDashboardPublishedVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDashboardPublishedVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::UpdateDashboardPublishedVersionResponsePrivate
 * \brief The UpdateDashboardPublishedVersionResponsePrivate class provides private implementation for UpdateDashboardPublishedVersionResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateDashboardPublishedVersionResponsePrivate object with public implementation \a q.
 */
UpdateDashboardPublishedVersionResponsePrivate::UpdateDashboardPublishedVersionResponsePrivate(
    UpdateDashboardPublishedVersionResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight UpdateDashboardPublishedVersion response element from \a xml.
 */
void UpdateDashboardPublishedVersionResponsePrivate::parseUpdateDashboardPublishedVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDashboardPublishedVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
