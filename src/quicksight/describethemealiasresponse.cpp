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

#include "describethemealiasresponse.h"
#include "describethemealiasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeThemeAliasResponse
 * \brief The DescribeThemeAliasResponse class provides an interace for QuickSight DescribeThemeAlias responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeThemeAlias
 */

/*!
 * Constructs a DescribeThemeAliasResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeThemeAliasResponse::DescribeThemeAliasResponse(
        const DescribeThemeAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeThemeAliasResponsePrivate(this), parent)
{
    setRequest(new DescribeThemeAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeThemeAliasRequest * DescribeThemeAliasResponse::request() const
{
    return static_cast<const DescribeThemeAliasRequest *>(QuickSightResponse::request());
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeThemeAlias \a response.
 */
void DescribeThemeAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeThemeAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeThemeAliasResponsePrivate
 * \brief The DescribeThemeAliasResponsePrivate class provides private implementation for DescribeThemeAliasResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeThemeAliasResponsePrivate object with public implementation \a q.
 */
DescribeThemeAliasResponsePrivate::DescribeThemeAliasResponsePrivate(
    DescribeThemeAliasResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeThemeAlias response element from \a xml.
 */
void DescribeThemeAliasResponsePrivate::parseDescribeThemeAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeThemeAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
