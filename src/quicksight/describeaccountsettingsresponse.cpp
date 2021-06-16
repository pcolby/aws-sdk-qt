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

#include "describeaccountsettingsresponse.h"
#include "describeaccountsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeAccountSettingsResponse
 * \brief The DescribeAccountSettingsResponse class provides an interace for QuickSight DescribeAccountSettings responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeAccountSettings
 */

/*!
 * Constructs a DescribeAccountSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAccountSettingsResponse::DescribeAccountSettingsResponse(
        const DescribeAccountSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeAccountSettingsResponsePrivate(this), parent)
{
    setRequest(new DescribeAccountSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAccountSettingsRequest * DescribeAccountSettingsResponse::request() const
{
    Q_D(const DescribeAccountSettingsResponse);
    return static_cast<const DescribeAccountSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeAccountSettings \a response.
 */
void DescribeAccountSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAccountSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeAccountSettingsResponsePrivate
 * \brief The DescribeAccountSettingsResponsePrivate class provides private implementation for DescribeAccountSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeAccountSettingsResponsePrivate object with public implementation \a q.
 */
DescribeAccountSettingsResponsePrivate::DescribeAccountSettingsResponsePrivate(
    DescribeAccountSettingsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeAccountSettings response element from \a xml.
 */
void DescribeAccountSettingsResponsePrivate::parseDescribeAccountSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAccountSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
