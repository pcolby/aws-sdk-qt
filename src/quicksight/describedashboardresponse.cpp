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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
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
    return static_cast<const DescribeDashboardRequest *>(QuickSightResponse::request());
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
