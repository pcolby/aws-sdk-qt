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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
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
