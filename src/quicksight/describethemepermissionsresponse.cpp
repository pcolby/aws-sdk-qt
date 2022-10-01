// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describethemepermissionsresponse.h"
#include "describethemepermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeThemePermissionsResponse
 * \brief The DescribeThemePermissionsResponse class provides an interace for QuickSight DescribeThemePermissions responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeThemePermissions
 */

/*!
 * Constructs a DescribeThemePermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeThemePermissionsResponse::DescribeThemePermissionsResponse(
        const DescribeThemePermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeThemePermissionsResponsePrivate(this), parent)
{
    setRequest(new DescribeThemePermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeThemePermissionsRequest * DescribeThemePermissionsResponse::request() const
{
    Q_D(const DescribeThemePermissionsResponse);
    return static_cast<const DescribeThemePermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeThemePermissions \a response.
 */
void DescribeThemePermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeThemePermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeThemePermissionsResponsePrivate
 * \brief The DescribeThemePermissionsResponsePrivate class provides private implementation for DescribeThemePermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeThemePermissionsResponsePrivate object with public implementation \a q.
 */
DescribeThemePermissionsResponsePrivate::DescribeThemePermissionsResponsePrivate(
    DescribeThemePermissionsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeThemePermissions response element from \a xml.
 */
void DescribeThemePermissionsResponsePrivate::parseDescribeThemePermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeThemePermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
