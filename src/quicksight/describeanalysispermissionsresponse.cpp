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

#include "describeanalysispermissionsresponse.h"
#include "describeanalysispermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeAnalysisPermissionsResponse
 * \brief The DescribeAnalysisPermissionsResponse class provides an interace for QuickSight DescribeAnalysisPermissions responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeAnalysisPermissions
 */

/*!
 * Constructs a DescribeAnalysisPermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAnalysisPermissionsResponse::DescribeAnalysisPermissionsResponse(
        const DescribeAnalysisPermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeAnalysisPermissionsResponsePrivate(this), parent)
{
    setRequest(new DescribeAnalysisPermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAnalysisPermissionsRequest * DescribeAnalysisPermissionsResponse::request() const
{
    Q_D(const DescribeAnalysisPermissionsResponse);
    return static_cast<const DescribeAnalysisPermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeAnalysisPermissions \a response.
 */
void DescribeAnalysisPermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAnalysisPermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeAnalysisPermissionsResponsePrivate
 * \brief The DescribeAnalysisPermissionsResponsePrivate class provides private implementation for DescribeAnalysisPermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeAnalysisPermissionsResponsePrivate object with public implementation \a q.
 */
DescribeAnalysisPermissionsResponsePrivate::DescribeAnalysisPermissionsResponsePrivate(
    DescribeAnalysisPermissionsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeAnalysisPermissions response element from \a xml.
 */
void DescribeAnalysisPermissionsResponsePrivate::parseDescribeAnalysisPermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAnalysisPermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
