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

#include "describedatasourceresponse.h"
#include "describedatasourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeDataSourceResponse
 * \brief The DescribeDataSourceResponse class provides an interace for QuickSight DescribeDataSource responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeDataSource
 */

/*!
 * Constructs a DescribeDataSourceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDataSourceResponse::DescribeDataSourceResponse(
        const DescribeDataSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeDataSourceResponsePrivate(this), parent)
{
    setRequest(new DescribeDataSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDataSourceRequest * DescribeDataSourceResponse::request() const
{
    Q_D(const DescribeDataSourceResponse);
    return static_cast<const DescribeDataSourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeDataSource \a response.
 */
void DescribeDataSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDataSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeDataSourceResponsePrivate
 * \brief The DescribeDataSourceResponsePrivate class provides private implementation for DescribeDataSourceResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeDataSourceResponsePrivate object with public implementation \a q.
 */
DescribeDataSourceResponsePrivate::DescribeDataSourceResponsePrivate(
    DescribeDataSourceResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeDataSource response element from \a xml.
 */
void DescribeDataSourceResponsePrivate::parseDescribeDataSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDataSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
