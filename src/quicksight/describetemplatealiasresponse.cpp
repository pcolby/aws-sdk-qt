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

#include "describetemplatealiasresponse.h"
#include "describetemplatealiasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeTemplateAliasResponse
 * \brief The DescribeTemplateAliasResponse class provides an interace for QuickSight DescribeTemplateAlias responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeTemplateAlias
 */

/*!
 * Constructs a DescribeTemplateAliasResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTemplateAliasResponse::DescribeTemplateAliasResponse(
        const DescribeTemplateAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeTemplateAliasResponsePrivate(this), parent)
{
    setRequest(new DescribeTemplateAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTemplateAliasRequest * DescribeTemplateAliasResponse::request() const
{
    return static_cast<const DescribeTemplateAliasRequest *>(QuickSightResponse::request());
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeTemplateAlias \a response.
 */
void DescribeTemplateAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTemplateAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeTemplateAliasResponsePrivate
 * \brief The DescribeTemplateAliasResponsePrivate class provides private implementation for DescribeTemplateAliasResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeTemplateAliasResponsePrivate object with public implementation \a q.
 */
DescribeTemplateAliasResponsePrivate::DescribeTemplateAliasResponsePrivate(
    DescribeTemplateAliasResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeTemplateAlias response element from \a xml.
 */
void DescribeTemplateAliasResponsePrivate::parseDescribeTemplateAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTemplateAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
