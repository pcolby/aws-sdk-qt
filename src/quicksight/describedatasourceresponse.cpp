// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
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
