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

#include "updatedashboardresponse.h"
#include "updatedashboardresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateDashboardResponse
 * \brief The UpdateDashboardResponse class provides an interace for QuickSight UpdateDashboard responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateDashboard
 */

/*!
 * Constructs a UpdateDashboardResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDashboardResponse::UpdateDashboardResponse(
        const UpdateDashboardRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new UpdateDashboardResponsePrivate(this), parent)
{
    setRequest(new UpdateDashboardRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDashboardRequest * UpdateDashboardResponse::request() const
{
    return static_cast<const UpdateDashboardRequest *>(QuickSightResponse::request());
}

/*!
 * \reimp
 * Parses a successful QuickSight UpdateDashboard \a response.
 */
void UpdateDashboardResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDashboardResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::UpdateDashboardResponsePrivate
 * \brief The UpdateDashboardResponsePrivate class provides private implementation for UpdateDashboardResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateDashboardResponsePrivate object with public implementation \a q.
 */
UpdateDashboardResponsePrivate::UpdateDashboardResponsePrivate(
    UpdateDashboardResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight UpdateDashboard response element from \a xml.
 */
void UpdateDashboardResponsePrivate::parseUpdateDashboardResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDashboardResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
