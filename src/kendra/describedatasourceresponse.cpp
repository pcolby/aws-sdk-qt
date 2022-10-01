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

#include "describedatasourceresponse.h"
#include "describedatasourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DescribeDataSourceResponse
 * \brief The DescribeDataSourceResponse class provides an interace for Kendra DescribeDataSource responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::describeDataSource
 */

/*!
 * Constructs a DescribeDataSourceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDataSourceResponse::DescribeDataSourceResponse(
        const DescribeDataSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new DescribeDataSourceResponsePrivate(this), parent)
{
    setRequest(new DescribeDataSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDataSourceRequest * DescribeDataSourceResponse::request() const
{
    Q_D(const DescribeDataSourceResponse);
    return static_cast<const DescribeDataSourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra DescribeDataSource \a response.
 */
void DescribeDataSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDataSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::DescribeDataSourceResponsePrivate
 * \brief The DescribeDataSourceResponsePrivate class provides private implementation for DescribeDataSourceResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DescribeDataSourceResponsePrivate object with public implementation \a q.
 */
DescribeDataSourceResponsePrivate::DescribeDataSourceResponsePrivate(
    DescribeDataSourceResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra DescribeDataSource response element from \a xml.
 */
void DescribeDataSourceResponsePrivate::parseDescribeDataSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDataSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
