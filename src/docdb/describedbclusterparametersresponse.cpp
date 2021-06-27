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

#include "describedbclusterparametersresponse.h"
#include "describedbclusterparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DescribeDBClusterParametersResponse
 * \brief The DescribeDBClusterParametersResponse class provides an interace for DocDB DescribeDBClusterParameters responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::describeDBClusterParameters
 */

/*!
 * Constructs a DescribeDBClusterParametersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDBClusterParametersResponse::DescribeDBClusterParametersResponse(
        const DescribeDBClusterParametersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new DescribeDBClusterParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeDBClusterParametersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDBClusterParametersRequest * DescribeDBClusterParametersResponse::request() const
{
    return static_cast<const DescribeDBClusterParametersRequest *>(DocDBResponse::request());
}

/*!
 * \reimp
 * Parses a successful DocDB DescribeDBClusterParameters \a response.
 */
void DescribeDBClusterParametersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDBClusterParametersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::DescribeDBClusterParametersResponsePrivate
 * \brief The DescribeDBClusterParametersResponsePrivate class provides private implementation for DescribeDBClusterParametersResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DescribeDBClusterParametersResponsePrivate object with public implementation \a q.
 */
DescribeDBClusterParametersResponsePrivate::DescribeDBClusterParametersResponsePrivate(
    DescribeDBClusterParametersResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB DescribeDBClusterParameters response element from \a xml.
 */
void DescribeDBClusterParametersResponsePrivate::parseDescribeDBClusterParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBClusterParametersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
