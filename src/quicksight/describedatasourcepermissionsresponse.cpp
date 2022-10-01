// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedatasourcepermissionsresponse.h"
#include "describedatasourcepermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeDataSourcePermissionsResponse
 * \brief The DescribeDataSourcePermissionsResponse class provides an interace for QuickSight DescribeDataSourcePermissions responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeDataSourcePermissions
 */

/*!
 * Constructs a DescribeDataSourcePermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDataSourcePermissionsResponse::DescribeDataSourcePermissionsResponse(
        const DescribeDataSourcePermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeDataSourcePermissionsResponsePrivate(this), parent)
{
    setRequest(new DescribeDataSourcePermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDataSourcePermissionsRequest * DescribeDataSourcePermissionsResponse::request() const
{
    Q_D(const DescribeDataSourcePermissionsResponse);
    return static_cast<const DescribeDataSourcePermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeDataSourcePermissions \a response.
 */
void DescribeDataSourcePermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDataSourcePermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeDataSourcePermissionsResponsePrivate
 * \brief The DescribeDataSourcePermissionsResponsePrivate class provides private implementation for DescribeDataSourcePermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeDataSourcePermissionsResponsePrivate object with public implementation \a q.
 */
DescribeDataSourcePermissionsResponsePrivate::DescribeDataSourcePermissionsResponsePrivate(
    DescribeDataSourcePermissionsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeDataSourcePermissions response element from \a xml.
 */
void DescribeDataSourcePermissionsResponsePrivate::parseDescribeDataSourcePermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDataSourcePermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
