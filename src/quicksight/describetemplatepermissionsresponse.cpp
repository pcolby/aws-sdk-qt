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

#include "describetemplatepermissionsresponse.h"
#include "describetemplatepermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeTemplatePermissionsResponse
 * \brief The DescribeTemplatePermissionsResponse class provides an interace for QuickSight DescribeTemplatePermissions responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeTemplatePermissions
 */

/*!
 * Constructs a DescribeTemplatePermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTemplatePermissionsResponse::DescribeTemplatePermissionsResponse(
        const DescribeTemplatePermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeTemplatePermissionsResponsePrivate(this), parent)
{
    setRequest(new DescribeTemplatePermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTemplatePermissionsRequest * DescribeTemplatePermissionsResponse::request() const
{
    Q_D(const DescribeTemplatePermissionsResponse);
    return static_cast<const DescribeTemplatePermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeTemplatePermissions \a response.
 */
void DescribeTemplatePermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTemplatePermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeTemplatePermissionsResponsePrivate
 * \brief The DescribeTemplatePermissionsResponsePrivate class provides private implementation for DescribeTemplatePermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeTemplatePermissionsResponsePrivate object with public implementation \a q.
 */
DescribeTemplatePermissionsResponsePrivate::DescribeTemplatePermissionsResponsePrivate(
    DescribeTemplatePermissionsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeTemplatePermissions response element from \a xml.
 */
void DescribeTemplatePermissionsResponsePrivate::parseDescribeTemplatePermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTemplatePermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
