// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedashboardpermissionsresponse.h"
#include "describedashboardpermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeDashboardPermissionsResponse
 * \brief The DescribeDashboardPermissionsResponse class provides an interace for QuickSight DescribeDashboardPermissions responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeDashboardPermissions
 */

/*!
 * Constructs a DescribeDashboardPermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDashboardPermissionsResponse::DescribeDashboardPermissionsResponse(
        const DescribeDashboardPermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeDashboardPermissionsResponsePrivate(this), parent)
{
    setRequest(new DescribeDashboardPermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDashboardPermissionsRequest * DescribeDashboardPermissionsResponse::request() const
{
    Q_D(const DescribeDashboardPermissionsResponse);
    return static_cast<const DescribeDashboardPermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeDashboardPermissions \a response.
 */
void DescribeDashboardPermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDashboardPermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeDashboardPermissionsResponsePrivate
 * \brief The DescribeDashboardPermissionsResponsePrivate class provides private implementation for DescribeDashboardPermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeDashboardPermissionsResponsePrivate object with public implementation \a q.
 */
DescribeDashboardPermissionsResponsePrivate::DescribeDashboardPermissionsResponsePrivate(
    DescribeDashboardPermissionsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeDashboardPermissions response element from \a xml.
 */
void DescribeDashboardPermissionsResponsePrivate::parseDescribeDashboardPermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDashboardPermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
