// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
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
    Q_D(const UpdateDashboardResponse);
    return static_cast<const UpdateDashboardRequest *>(d->request);
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
