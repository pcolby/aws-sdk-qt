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

#include "describeenginedefaultclusterparametersresponse.h"
#include "describeenginedefaultclusterparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DescribeEngineDefaultClusterParametersResponse
 * \brief The DescribeEngineDefaultClusterParametersResponse class provides an interace for DocDB DescribeEngineDefaultClusterParameters responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::describeEngineDefaultClusterParameters
 */

/*!
 * Constructs a DescribeEngineDefaultClusterParametersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEngineDefaultClusterParametersResponse::DescribeEngineDefaultClusterParametersResponse(
        const DescribeEngineDefaultClusterParametersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new DescribeEngineDefaultClusterParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeEngineDefaultClusterParametersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEngineDefaultClusterParametersRequest * DescribeEngineDefaultClusterParametersResponse::request() const
{
    return static_cast<const DescribeEngineDefaultClusterParametersRequest *>(DocDBResponse::request());
}

/*!
 * \reimp
 * Parses a successful DocDB DescribeEngineDefaultClusterParameters \a response.
 */
void DescribeEngineDefaultClusterParametersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEngineDefaultClusterParametersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::DescribeEngineDefaultClusterParametersResponsePrivate
 * \brief The DescribeEngineDefaultClusterParametersResponsePrivate class provides private implementation for DescribeEngineDefaultClusterParametersResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DescribeEngineDefaultClusterParametersResponsePrivate object with public implementation \a q.
 */
DescribeEngineDefaultClusterParametersResponsePrivate::DescribeEngineDefaultClusterParametersResponsePrivate(
    DescribeEngineDefaultClusterParametersResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB DescribeEngineDefaultClusterParameters response element from \a xml.
 */
void DescribeEngineDefaultClusterParametersResponsePrivate::parseDescribeEngineDefaultClusterParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEngineDefaultClusterParametersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
