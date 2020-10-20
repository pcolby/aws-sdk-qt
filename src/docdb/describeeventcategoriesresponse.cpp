/*
    Copyright 2013-2020 Paul Colby

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

#include "describeeventcategoriesresponse.h"
#include "describeeventcategoriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DescribeEventCategoriesResponse
 * \brief The DescribeEventCategoriesResponse class provides an interace for DocDB DescribeEventCategories responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::describeEventCategories
 */

/*!
 * Constructs a DescribeEventCategoriesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEventCategoriesResponse::DescribeEventCategoriesResponse(
        const DescribeEventCategoriesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new DescribeEventCategoriesResponsePrivate(this), parent)
{
    setRequest(new DescribeEventCategoriesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEventCategoriesRequest * DescribeEventCategoriesResponse::request() const
{
    Q_D(const DescribeEventCategoriesResponse);
    return static_cast<const DescribeEventCategoriesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDB DescribeEventCategories \a response.
 */
void DescribeEventCategoriesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEventCategoriesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::DescribeEventCategoriesResponsePrivate
 * \brief The DescribeEventCategoriesResponsePrivate class provides private implementation for DescribeEventCategoriesResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DescribeEventCategoriesResponsePrivate object with public implementation \a q.
 */
DescribeEventCategoriesResponsePrivate::DescribeEventCategoriesResponsePrivate(
    DescribeEventCategoriesResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB DescribeEventCategories response element from \a xml.
 */
void DescribeEventCategoriesResponsePrivate::parseDescribeEventCategoriesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEventCategoriesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
