// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedatasetpermissionsresponse.h"
#include "describedatasetpermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeDataSetPermissionsResponse
 * \brief The DescribeDataSetPermissionsResponse class provides an interace for QuickSight DescribeDataSetPermissions responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeDataSetPermissions
 */

/*!
 * Constructs a DescribeDataSetPermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDataSetPermissionsResponse::DescribeDataSetPermissionsResponse(
        const DescribeDataSetPermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeDataSetPermissionsResponsePrivate(this), parent)
{
    setRequest(new DescribeDataSetPermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDataSetPermissionsRequest * DescribeDataSetPermissionsResponse::request() const
{
    Q_D(const DescribeDataSetPermissionsResponse);
    return static_cast<const DescribeDataSetPermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeDataSetPermissions \a response.
 */
void DescribeDataSetPermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDataSetPermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeDataSetPermissionsResponsePrivate
 * \brief The DescribeDataSetPermissionsResponsePrivate class provides private implementation for DescribeDataSetPermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeDataSetPermissionsResponsePrivate object with public implementation \a q.
 */
DescribeDataSetPermissionsResponsePrivate::DescribeDataSetPermissionsResponsePrivate(
    DescribeDataSetPermissionsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeDataSetPermissions response element from \a xml.
 */
void DescribeDataSetPermissionsResponsePrivate::parseDescribeDataSetPermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDataSetPermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
