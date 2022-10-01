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

#include "deletedashboardresponse.h"
#include "deletedashboardresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteDashboardResponse
 * \brief The DeleteDashboardResponse class provides an interace for QuickSight DeleteDashboard responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteDashboard
 */

/*!
 * Constructs a DeleteDashboardResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDashboardResponse::DeleteDashboardResponse(
        const DeleteDashboardRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DeleteDashboardResponsePrivate(this), parent)
{
    setRequest(new DeleteDashboardRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDashboardRequest * DeleteDashboardResponse::request() const
{
    Q_D(const DeleteDashboardResponse);
    return static_cast<const DeleteDashboardRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DeleteDashboard \a response.
 */
void DeleteDashboardResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDashboardResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DeleteDashboardResponsePrivate
 * \brief The DeleteDashboardResponsePrivate class provides private implementation for DeleteDashboardResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteDashboardResponsePrivate object with public implementation \a q.
 */
DeleteDashboardResponsePrivate::DeleteDashboardResponsePrivate(
    DeleteDashboardResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DeleteDashboard response element from \a xml.
 */
void DeleteDashboardResponsePrivate::parseDeleteDashboardResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDashboardResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
