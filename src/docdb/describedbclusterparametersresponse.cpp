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
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeDBClusterParametersResponse
 * \brief The DescribeDBClusterParametersResponse class provides an interace for DocDb DescribeDBClusterParameters responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeDBClusterParameters
 */

/*!
 * Constructs a DescribeDBClusterParametersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDBClusterParametersResponse::DescribeDBClusterParametersResponse(
        const DescribeDBClusterParametersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new DescribeDBClusterParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeDBClusterParametersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDBClusterParametersRequest * DescribeDBClusterParametersResponse::request() const
{
    Q_D(const DescribeDBClusterParametersResponse);
    return static_cast<const DescribeDBClusterParametersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb DescribeDBClusterParameters \a response.
 */
void DescribeDBClusterParametersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDBClusterParametersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::DescribeDBClusterParametersResponsePrivate
 * \brief The DescribeDBClusterParametersResponsePrivate class provides private implementation for DescribeDBClusterParametersResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeDBClusterParametersResponsePrivate object with public implementation \a q.
 */
DescribeDBClusterParametersResponsePrivate::DescribeDBClusterParametersResponsePrivate(
    DescribeDBClusterParametersResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb DescribeDBClusterParameters response element from \a xml.
 */
void DescribeDBClusterParametersResponsePrivate::parseDescribeDBClusterParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBClusterParametersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
