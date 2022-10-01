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

#include "describeorderabledbinstanceoptionsresponse.h"
#include "describeorderabledbinstanceoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeOrderableDBInstanceOptionsResponse
 * \brief The DescribeOrderableDBInstanceOptionsResponse class provides an interace for DocDb DescribeOrderableDBInstanceOptions responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeOrderableDBInstanceOptions
 */

/*!
 * Constructs a DescribeOrderableDBInstanceOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeOrderableDBInstanceOptionsResponse::DescribeOrderableDBInstanceOptionsResponse(
        const DescribeOrderableDBInstanceOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new DescribeOrderableDBInstanceOptionsResponsePrivate(this), parent)
{
    setRequest(new DescribeOrderableDBInstanceOptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeOrderableDBInstanceOptionsRequest * DescribeOrderableDBInstanceOptionsResponse::request() const
{
    Q_D(const DescribeOrderableDBInstanceOptionsResponse);
    return static_cast<const DescribeOrderableDBInstanceOptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb DescribeOrderableDBInstanceOptions \a response.
 */
void DescribeOrderableDBInstanceOptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeOrderableDBInstanceOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::DescribeOrderableDBInstanceOptionsResponsePrivate
 * \brief The DescribeOrderableDBInstanceOptionsResponsePrivate class provides private implementation for DescribeOrderableDBInstanceOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeOrderableDBInstanceOptionsResponsePrivate object with public implementation \a q.
 */
DescribeOrderableDBInstanceOptionsResponsePrivate::DescribeOrderableDBInstanceOptionsResponsePrivate(
    DescribeOrderableDBInstanceOptionsResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb DescribeOrderableDBInstanceOptions response element from \a xml.
 */
void DescribeOrderableDBInstanceOptionsResponsePrivate::parseDescribeOrderableDBInstanceOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeOrderableDBInstanceOptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
