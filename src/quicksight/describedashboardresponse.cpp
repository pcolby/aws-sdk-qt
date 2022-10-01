// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedashboardresponse.h"
#include "describedashboardresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeDashboardResponse
 * \brief The DescribeDashboardResponse class provides an interace for QuickSight DescribeDashboard responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeDashboard
 */

/*!
 * Constructs a DescribeDashboardResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDashboardResponse::DescribeDashboardResponse(
        const DescribeDashboardRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeDashboardResponsePrivate(this), parent)
{
    setRequest(new DescribeDashboardRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDashboardRequest * DescribeDashboardResponse::request() const
{
    Q_D(const DescribeDashboardResponse);
    return static_cast<const DescribeDashboardRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeDashboard \a response.
 */
void DescribeDashboardResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDashboardResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeDashboardResponsePrivate
 * \brief The DescribeDashboardResponsePrivate class provides private implementation for DescribeDashboardResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeDashboardResponsePrivate object with public implementation \a q.
 */
DescribeDashboardResponsePrivate::DescribeDashboardResponsePrivate(
    DescribeDashboardResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeDashboard response element from \a xml.
 */
void DescribeDashboardResponsePrivate::parseDescribeDashboardResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDashboardResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
